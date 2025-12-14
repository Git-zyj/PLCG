/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171826
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) var_18))))) & (var_4)))));
        arr_4 [9] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_21 -= ((/* implicit */short) var_16);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) 8593127480708900212LL))));
        arr_8 [1U] = ((/* implicit */short) (unsigned short)52616);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (int i_5 = 4; i_5 < 13; i_5 += 2) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_3] [i_4] [i_3] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_20 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [6LL] [i_2] [i_2] [8LL])))))))))) : (1073741823LL)));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) var_10)) | (arr_15 [(signed char)12] [12LL] [(signed char)12]))), (((/* implicit */long long int) ((signed char) arr_10 [i_1] [i_2 - 1] [i_3])))))), (max((((unsigned long long int) arr_12 [i_2 - 1] [i_3])), (((/* implicit */unsigned long long int) var_5))))))));
                                arr_23 [i_1] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned char) var_3);
                                var_24 += (~(((arr_1 [i_5 - 1]) ^ (arr_13 [i_1 - 2]))));
                            }
                        } 
                    } 
                    arr_24 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] = ((/* implicit */unsigned int) var_13);
                    var_25 = ((/* implicit */_Bool) (~(545460846592LL)));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_4)) : (((var_16) + (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-(0LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_27 = ((/* implicit */unsigned long long int) var_13);
    var_28 = (-2147483647 - 1);
}
