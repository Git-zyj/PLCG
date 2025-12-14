/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14461
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 1] [i_2] [i_1 + 1]);
                        arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(max((max((((/* implicit */unsigned int) (signed char)114)), (2926492439U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)10714)) : (((/* implicit */int) (unsigned char)165)))))))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)166)) < (-2041584429)))))))));
                    }
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_2 [i_2]), (arr_9 [i_1] [7U] [(signed char)6] [i_1 - 1])))))))));
                        var_17 = ((/* implicit */unsigned long long int) min((8U), (((/* implicit */unsigned int) (signed char)-64))));
                        arr_13 [i_1] [i_1] [1LL] [(short)19] [i_0] [1LL] = ((/* implicit */unsigned short) max((arr_7 [i_1 + 2] [i_4] [i_4] [i_4]), (((/* implicit */short) (signed char)-71))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_0] [i_1 + 3]))))))))));
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) max(((unsigned char)155), (((/* implicit */unsigned char) (signed char)-64))))), ((-(arr_14 [i_2] [i_1 - 1] [i_0])))));
                        arr_16 [i_0] [i_2] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((2041584424) < (((/* implicit */int) (signed char)5))))), (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_14 [i_0] [i_0] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5])))))) << (((min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_5])))) - (21U))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((3018890431U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))), (var_5))) == (arr_14 [i_1] [i_2] [i_5])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_21 = var_5;
                            var_22 = (-(arr_17 [(_Bool)1] [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1] [i_6] [i_6]));
                            arr_20 [i_0] = ((/* implicit */unsigned int) (-(arr_17 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2] [i_6])));
                            var_23 = (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1608827284U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_6] [(signed char)3] [i_6] [i_0] [i_0]))))));
                        }
                    }
                    arr_21 [i_2 + 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (((var_6) * (var_6))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [(_Bool)1] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((max((var_5), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)123)), (var_3)))))) <= (((/* implicit */long long int) max((min((700709846U), (2013265920U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) || ((_Bool)1)))))))));
    var_25 = ((/* implicit */signed char) (~((-(max((var_4), (var_8)))))));
    var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)64))));
}
