/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185670
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_16)), (var_2)));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_3))));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-11099)) | (((/* implicit */int) var_8))))) : ((-9223372036854775807LL - 1LL)))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))));
                                var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 385632214739849294LL)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_8))))), ((+(arr_5 [i_0] [i_2] [i_3] [i_4])))));
                            }
                            for (short i_5 = 1; i_5 < 22; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0] [i_2] [i_2] [i_3] [i_0] [i_5 + 1])) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) * (((/* implicit */unsigned int) 1812529260))));
                                arr_14 [(unsigned short)13] [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (short)32))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_1])))))));
                                arr_15 [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((var_17), (((/* implicit */int) (_Bool)0))))))) : (((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) (unsigned char)204)))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_17))) >> (((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)94), (arr_2 [i_3])))) || (((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3]))))))))))));
                            }
                            for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                            {
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */short) (unsigned short)35787);
                                var_26 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] [i_6])) >> (((arr_5 [i_6] [i_2] [i_1] [i_0 + 1]) + (3577553482070256934LL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_18 [i_0])), (arr_3 [i_3] [i_0 - 1])))) : (((/* implicit */int) arr_9 [(signed char)11] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (385632214739849308LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_8 [i_0]))))))) : (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] [i_6])) + (2147483647))) >> (((arr_5 [i_6] [i_2] [i_1] [i_0 + 1]) + (3577553482070256934LL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_18 [i_0])), (arr_3 [i_3] [i_0 - 1])))) : (((/* implicit */int) arr_9 [(signed char)11] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (385632214739849308LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_8 [i_0])))))));
                            }
                            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)29733)), (10543747106844519833ULL)));
                            arr_20 [i_0] [i_0] [(_Bool)1] [i_0 - 2] = ((/* implicit */long long int) min((arr_9 [9] [9] [i_0 - 1] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 3]), (min((arr_9 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0 - 3]), (arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0 - 3])))));
                            arr_21 [21U] [i_0] [21U] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_5 [i_0] [i_1] [(signed char)5] [i_0]))) ? (min((arr_5 [i_0 - 1] [i_1] [i_0 - 1] [i_3]), (((/* implicit */long long int) arr_18 [i_0])))) : (((/* implicit */long long int) arr_10 [i_0] [i_2] [i_0] [i_3] [i_0] [i_0] [i_0 - 2]))));
                        }
                    } 
                } 
                arr_22 [i_1] [i_1] |= ((/* implicit */signed char) (short)-11111);
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (unsigned short)61415))));
}
