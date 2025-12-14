/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127941
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = 752600198939040091LL;
                    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((arr_4 [i_2]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-23234)) : (((/* implicit */int) ((unsigned char) 20)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_2])) ? (arr_10 [i_3 + 2] [i_2] [i_0] [i_0]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2834249607U)) ? (arr_0 [i_3]) : (arr_4 [i_0 + 1])))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) (((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_4 + 1]))))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_4 - 1])))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)8)))) : (((unsigned int) arr_7 [7] [i_1]))))) ? (((arr_2 [i_0 - 1]) - (arr_2 [i_0 - 1]))) : (((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */int) arr_9 [1] [i_4]))))) ? (((((/* implicit */_Bool) var_15)) ? (arr_2 [(signed char)1]) : (((/* implicit */unsigned long long int) arr_12 [i_4] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) max((-8047557291446222956LL), (((/* implicit */long long int) var_3)))))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_12);
}
