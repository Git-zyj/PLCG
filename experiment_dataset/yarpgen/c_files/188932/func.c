/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188932
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1234601429)) ? (1234601429) : (-1234601430)));
                    arr_9 [i_0] [i_2] [i_2] [6U] = ((/* implicit */short) min((-1234601430), (((/* implicit */int) (unsigned char)67))));
                }
                for (long long int i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned char)60)) ? (arr_2 [i_3 - 4] [i_4]) : (arr_2 [i_0] [i_0]))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_0 [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((short) arr_11 [i_4] [i_0]))))), (((int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_14 [i_3 + 4] [i_3 + 4] [i_4] [i_4]) : (((/* implicit */int) (short)2420))))))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 960))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_4])))))))) : ((+(((unsigned long long int) var_16))))));
                        var_21 = ((/* implicit */int) (~(var_4)));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 789694931U)) ? (((/* implicit */unsigned int) 893878709)) : (4294967295U))))));
                        var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967295U))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) -981777590)) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned int) -961)) : (582196121U)))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (var_1)))) ? (((/* implicit */int) (unsigned short)14823)) : (((/* implicit */int) ((unsigned short) arr_15 [i_3 + 4] [i_1] [i_3])))));
                        arr_19 [(signed char)16] [i_1] [(signed char)16] [i_3] [i_3] [(short)0] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_13 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))))))))));
                        var_25 = ((/* implicit */short) 13828857607743303059ULL);
                    }
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (2305843009209499648ULL)));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_3] [7]);
                }
                for (unsigned int i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_6 + 2] [i_6 + 1]))))) + (min((((/* implicit */unsigned int) arr_13 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_0])), (var_11)))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_6 + 2] [i_6] [i_1] [i_0]))))) ? (arr_17 [i_0] [i_0] [i_1] [i_1] [14] [i_6]) : (((int) (-(var_11))))));
                }
                arr_23 [i_1] [i_1] [i_1] = min((((/* implicit */int) ((short) var_12))), ((-(((/* implicit */int) var_12)))));
                arr_24 [i_0] = ((/* implicit */unsigned short) min((max((4294967295U), (((/* implicit */unsigned int) (unsigned char)13)))), (((unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0] [6ULL] [i_0]))));
                var_29 = min(((~(arr_14 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) ((unsigned char) var_7)))))));
                var_30 = ((/* implicit */int) max((max((((/* implicit */short) arr_11 [i_0] [i_0])), (var_17))), (((/* implicit */short) (signed char)127))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (var_15)));
}
