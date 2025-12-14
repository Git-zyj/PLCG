/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169668
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
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [2LL] [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                                arr_12 [i_1] [(unsigned char)19] [(short)19] [i_1] [(unsigned short)14] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) | (((/* implicit */long long int) 2147483647))))) ? (806383344U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [13LL]))))))))));
                                var_20 &= ((/* implicit */short) min(((!(((/* implicit */_Bool) var_16)))), (((_Bool) arr_4 [i_2 + 2]))));
                                var_21 = ((/* implicit */_Bool) min(((~(arr_4 [19ULL]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) arr_3 [i_1] [i_3]))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [(short)7] [i_1] [i_4]))) | (117368637985071606LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        var_22 |= ((/* implicit */short) max((((/* implicit */int) arr_2 [4ULL] [i_0] [(unsigned short)12])), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2 - 2] [i_0])) ? (-2147483644) : (((/* implicit */int) var_12))))));
                        arr_17 [i_0] [i_1] [i_0] [1LL] [5ULL] [i_0] = ((((/* implicit */_Bool) ((short) ((arr_13 [i_0] [i_1] [i_0] [i_0]) | (((/* implicit */int) (unsigned char)10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_2 + 2] [i_1] [i_5 - 2]), (arr_0 [i_5 - 1]))))) : (max((((/* implicit */unsigned long long int) ((int) var_4))), (((unsigned long long int) var_7)))));
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)116)) | (((/* implicit */int) (unsigned short)8))));
                        var_24 = ((/* implicit */unsigned short) (-(((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) ((short) 2443203094019082918ULL))))))));
                        var_25 = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) (+(-2147483647)))));
                    }
                    var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-11634)) ? (2532540485121618618ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 - 2])))));
                }
            } 
        } 
    } 
}
