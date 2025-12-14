/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174501
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                            {
                                var_12 = ((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned char)28)))) + (2147483647))) >> (((((((/* implicit */int) max((var_4), (var_3)))) * (((/* implicit */int) var_3)))) - (2275)))));
                                arr_13 [i_2] [i_3] [(short)6] [i_1] [i_2] = ((/* implicit */int) (+(((9223372036854775807LL) / (((/* implicit */long long int) (-2147483647 - 1)))))));
                            }
                            for (short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)236))))) ? ((-(((/* implicit */int) var_5)))) : (((var_10) & (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */int) max((var_4), (var_4)))) : (((/* implicit */int) var_8))))));
                                arr_16 [(signed char)2] [(signed char)8] [(unsigned short)8] [10] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)9757))))))))));
                            }
                            for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
                            {
                                arr_19 [i_0] [i_1] [(short)2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) max((var_4), (((/* implicit */unsigned char) arr_12 [(_Bool)1] [5ULL] [i_2]))))), ((short)-17889))))));
                                var_14 = ((/* implicit */unsigned int) (unsigned char)28);
                                arr_20 [14] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_2)) + (((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_0]))))));
                            }
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17681439861744001707ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)130))))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : (max((var_10), (((/* implicit */int) var_4))))))) * (var_7))))));
                        }
                    } 
                } 
                arr_21 [i_0] &= ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (5746982838118951931LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105))))), (((/* implicit */long long int) var_0))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9758)) ? (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [(signed char)1] [i_1])) : (((/* implicit */int) var_4)))), (max((-723044801), (((/* implicit */int) var_2)))))) : (((((/* implicit */int) ((unsigned short) var_2))) << (((((/* implicit */int) (signed char)120)) - (98)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((((long long int) max((((/* implicit */short) var_0)), (var_1)))), (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))));
    var_18 &= ((/* implicit */unsigned short) max((((long long int) min((var_8), (((/* implicit */unsigned short) (short)9741))))), (((/* implicit */long long int) (-(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_0))))))))));
}
