/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133511
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
    var_11 = (~(min((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_4))))), (min((((/* implicit */int) (_Bool)1)), (var_9))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) << ((((+((-(((/* implicit */int) var_6)))))) + (26436)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_0] [i_0])), (var_3)))) ? (arr_1 [i_1 - 3] [(signed char)15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 2]))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_6)))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (_Bool)0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_16 &= ((/* implicit */int) (!(((/* implicit */_Bool) (-(-162782536))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_4 - 2] [i_3])) ? (6485088286883209412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1] [i_3])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_18 -= 1682431044U;
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4095)) ? (arr_17 [(unsigned short)7]) : ((~(arr_1 [i_2] [i_2])))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_7]))))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_3 [i_7] [i_3] [i_2])) : (((/* implicit */int) arr_4 [i_2]))))));
                    var_21 = ((/* implicit */int) arr_1 [i_7] [i_7]);
                }
                var_22 &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [12LL] [12LL]))))) ? (((((/* implicit */int) arr_13 [i_2] [i_2])) << (((((/* implicit */int) arr_13 [i_3] [i_2])) - (25048))))) : ((-(((/* implicit */int) arr_13 [i_2] [i_3])))));
            }
        } 
    } 
}
