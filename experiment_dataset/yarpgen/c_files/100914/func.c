/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100914
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
    var_16 = ((int) (+(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((33292288U), (((/* implicit */unsigned int) arr_11 [i_4] [i_3] [i_3] [(unsigned char)12]))))) ? ((~(var_4))) : (min((var_4), (var_4)))))), (min((arr_2 [i_4]), (((/* implicit */long long int) (_Bool)1)))))))));
                                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) ((int) (short)(-32767 - 1)))))));
                                var_19 = ((/* implicit */unsigned short) var_15);
                            }
                            for (int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                            {
                                arr_18 [i_3] [i_3] [i_3 + 1] [i_3] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((max((((/* implicit */long long int) ((arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_0]) << (((arr_16 [i_0] [i_1] [i_0] [i_5] [15ULL] [i_3 + 1]) - (1227917223)))))), (var_0))) < (((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_8))))) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_12)))))))) : (((/* implicit */signed char) ((max((((/* implicit */long long int) ((arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_0]) << (((((arr_16 [i_0] [i_1] [i_0] [i_5] [15ULL] [i_3 + 1]) - (1227917223))) - (730462406)))))), (var_0))) < (((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_8))))) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_12))))))));
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_5] = ((/* implicit */unsigned char) ((((18446744065119617024ULL) == (((arr_3 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))) ? ((((_Bool)1) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [1U] [i_0] [1U] [1U]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [(_Bool)1] [i_5] [i_1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) 33292310U)) : (0ULL)))));
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_11);
                                var_20 |= ((/* implicit */int) 3518242333U);
                            }
                            arr_22 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((((min((((/* implicit */unsigned int) (short)32759)), (var_4))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)2)) / (var_13)))))) ? (var_3) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (2251782633816064ULL)))));
                            var_21 = ((((((/* implicit */int) var_6)) == (((/* implicit */int) arr_8 [i_3 - 1] [i_0] [i_3] [i_3])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_15))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(_Bool)1] [i_3 - 1] [i_3 - 1] [i_0])) && (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [8LL] [i_3 - 1] [i_0] [i_3])) || (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_3 + 1] [i_3] [i_3])))));
                            var_22 = ((/* implicit */unsigned long long int) -7077321744201447911LL);
                        }
                    } 
                } 
                arr_24 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) var_0));
            }
        } 
    } 
}
