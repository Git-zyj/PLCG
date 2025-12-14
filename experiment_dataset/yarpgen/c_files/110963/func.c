/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110963
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((min((min((arr_5 [i_0]), (((/* implicit */long long int) arr_10 [(unsigned char)8] [i_1] [i_1] [i_2] [i_3] [i_3])))), (((/* implicit */long long int) arr_10 [i_0] [(signed char)0] [(signed char)0] [i_0] [i_0] [i_0])))), (max((min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [11LL])), (6286471769022657958LL))), (((/* implicit */long long int) (short)19191))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [(_Bool)1] [10LL] [10LL]))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */signed char) -6286471769022657948LL);
                    var_18 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (short)-19191)), (0LL))), (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [6ULL] [i_2] [i_2]))) <= (arr_2 [i_0])))), (arr_2 [i_0])))));
                    arr_15 [i_2] [i_0] [i_2] = ((/* implicit */signed char) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                    var_19 *= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((8102544949332356813LL), (((/* implicit */long long int) arr_7 [i_0] [i_0] [4LL] [i_2]))))), (max((((/* implicit */unsigned long long int) (unsigned short)22518)), (arr_8 [i_2] [i_1] [5ULL]))))), (((/* implicit */unsigned long long int) arr_10 [i_0] [(signed char)6] [i_2] [2LL] [(short)13] [(_Bool)1]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_11);
}
