/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141616
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                arr_16 [4LL] [4LL] [i_2] [i_3 + 2] [i_4] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)255));
                                arr_17 [i_0] [i_0] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)244)) & (((/* implicit */int) arr_1 [i_0] [i_1]))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                            {
                                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))))), (((((/* implicit */int) (signed char)-116)) ^ (((/* implicit */int) (unsigned char)1)))))) >> (((((((_Bool) (signed char)115)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_7 [i_0] [i_0] [i_0] [i_0])))))) - (231))))))));
                                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) ((signed char) ((((var_0) + (2147483647))) >> (((((/* implicit */int) arr_18 [i_0] [10] [i_2] [10] [i_3] [i_5] [i_5])) - (21936)))))));
                                var_12 += ((signed char) (!(((/* implicit */_Bool) var_8))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                            {
                                arr_25 [6U] [i_1] [i_2] [i_3] [6U] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_11 [i_1] [i_2] [i_3 + 1] [i_3 + 2] [i_3] [i_3])), (-8208391423119244849LL))) & (((/* implicit */long long int) ((/* implicit */int) (((!((_Bool)1))) && (((/* implicit */_Bool) max(((unsigned char)5), (arr_4 [(short)5] [(short)5] [i_3]))))))))));
                                var_13 = ((/* implicit */signed char) ((unsigned int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(unsigned short)5] [i_3 - 2] [i_6] [6U]))))));
                                arr_26 [i_0] [i_0] [i_2] [i_2] [(_Bool)1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-13100)) > (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)24453))))));
                                arr_27 [(short)10] [i_1] [i_1] [i_3 - 2] [i_6] &= ((/* implicit */_Bool) ((long long int) (unsigned char)237));
                            }
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] = arr_20 [i_1] [i_1] [i_1] [i_3 + 1] [i_3 - 2];
                            arr_29 [i_1] [i_0] [i_1] [i_3 - 1] [(short)9] [i_0] = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_20 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 2] [i_3 + 1])) : (((/* implicit */int) arr_20 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 - 1])))))));
                            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_0] [i_3] [i_2] [i_2] [i_0]))));
                        }
                    } 
                } 
                arr_30 [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned short) (unsigned char)11);
    var_16 = ((/* implicit */short) ((unsigned long long int) var_7));
}
