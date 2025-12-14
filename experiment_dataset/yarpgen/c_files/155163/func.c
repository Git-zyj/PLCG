/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155163
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
    var_14 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        arr_8 [i_1] = ((/* implicit */unsigned int) ((((_Bool) (~(((/* implicit */int) var_3))))) ? (min((((/* implicit */int) arr_0 [i_2] [i_3])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2] [i_2] [i_0 - 1])) : (977984707))))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_2 [4LL]))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (4611686018393833472ULL))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_11 [(unsigned short)4] [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(498676723U)))));
                        arr_12 [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_4] [i_2] [i_4] [i_1])) ? (12548945910971629244ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0]))));
                        var_17 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)10091)))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((unsigned char) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_13 [i_0] [i_1] [7] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_2 [i_0]));
                    }
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((arr_17 [i_5 - 1] [i_5] [i_5] [i_5 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0 + 3]))))))));
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (unsigned char)245)))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) arr_6 [i_0 - 2] [i_1] [i_1] [i_5] [i_1])))));
                        }
                        arr_21 [i_0 - 4] [i_1] [i_2] [i_1] = ((signed char) -1455367797);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_10)) - (46300)))));
}
