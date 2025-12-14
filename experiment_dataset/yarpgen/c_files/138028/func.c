/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138028
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
    var_17 += ((/* implicit */unsigned long long int) (short)10740);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)4100))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)4100)) : (736425651))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_4 [i_0 - 1] [i_1 + 4] [i_1 - 2])))) : (((/* implicit */int) var_15))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)4100))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2 + 1])) ? (arr_1 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2147483643)) ? (511) : (((/* implicit */int) (_Bool)0)))) > (((var_3) ? (((/* implicit */int) var_16)) : (184332430)))));
                    arr_12 [i_0] [i_0] = ((/* implicit */int) (-(arr_0 [i_0 + 4])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) -534)) & (4881893667680966549ULL)))));
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_0 + 1])) ? (arr_0 [i_0 + 4]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967295U))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
                    var_23 |= ((/* implicit */unsigned long long int) var_8);
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    var_24 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-9882))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1632339274U)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_6])) : (((/* implicit */int) (unsigned short)45394))))) || (((/* implicit */_Bool) arr_1 [i_1 + 3]))));
                }
                var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 4])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 1]))))));
            }
        } 
    } 
    var_27 |= ((/* implicit */unsigned long long int) -2114766704);
}
