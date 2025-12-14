/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144319
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (4095))))))) + (((/* implicit */int) ((((/* implicit */unsigned int) 1599665302)) <= (2823306582U))))));
    var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-1))))), (((((/* implicit */_Bool) (short)-10202)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))))) : (min((var_8), (((/* implicit */unsigned long long int) var_1))))));
    var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)11))))) ? (min((2939119174307859917ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) var_3)))), (var_8)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) -1139393740))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1] [i_1])) ? (arr_8 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)14)) * (((/* implicit */int) (short)-11)))))));
                    arr_9 [i_0] = ((/* implicit */_Bool) -1139393767);
                }
                for (short i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    arr_12 [(unsigned char)22] [(short)10] [i_3] = 15U;
                    arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-11))) | (max((((/* implicit */long long int) (short)-5)), (7087009499662830235LL)))));
                }
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_16 [i_0] [i_1] [(unsigned char)12] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)120), ((signed char)-79)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [14] [i_1])), (3388562786U))))));
                    var_16 = ((/* implicit */_Bool) arr_11 [i_0] [(signed char)16] [i_4]);
                    arr_17 [i_0] [0LL] [i_4] = ((/* implicit */unsigned int) (unsigned char)183);
                    var_17 = arr_11 [i_0] [i_4] [(_Bool)1];
                    var_18 ^= ((((/* implicit */_Bool) -259553474)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6192459325794470623ULL))))) : (((/* implicit */int) (_Bool)1)));
                }
            }
        } 
    } 
}
