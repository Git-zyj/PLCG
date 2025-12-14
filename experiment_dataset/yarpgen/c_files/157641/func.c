/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157641
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((max((((/* implicit */unsigned long long int) var_18)), (min((var_12), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) var_18))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_8 [i_0 + 2] [i_2] [i_2] [i_0 + 2])))), (((/* implicit */int) ((short) arr_8 [i_0 - 1] [i_0] [i_2] [i_0 + 2])))));
                    var_20 -= ((/* implicit */unsigned long long int) max((((unsigned int) arr_9 [i_0] [i_0 - 2] [i_0] [i_0])), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)24)))))));
                    var_21 -= ((/* implicit */short) ((max((((/* implicit */long long int) max((arr_9 [i_0 - 2] [i_1] [i_1] [i_0]), (arr_6 [i_0 - 1] [i_0] [i_0] [i_0])))), (((long long int) arr_4 [i_0] [i_0 - 2] [i_0 + 1])))) >> (((max((((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0 - 2])), (arr_4 [i_0] [i_2] [i_2])))), (arr_5 [i_1]))) - (795573105)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_4] = ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3 + 2]);
                                arr_19 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (arr_7 [i_0 + 2] [i_0 + 1] [i_0 - 2])))), (max((min((arr_14 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_2] [i_2])))), (min((arr_1 [i_0] [i_0 + 2]), (((/* implicit */unsigned long long int) arr_13 [i_1]))))))));
                                var_22 = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) << ((((+(arr_14 [i_0] [2LL] [i_2] [i_2] [i_3] [i_2]))) - (7827239661382691005ULL)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) << ((((((+(arr_14 [i_0] [2LL] [i_2] [i_2] [i_3] [i_2]))) - (7827239661382691005ULL))) - (8837110329388960647ULL))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [1ULL] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_2 [i_1] [i_2])))))), (((((/* implicit */unsigned long long int) arr_13 [i_0 - 1])) & (arr_14 [i_0] [i_0 - 2] [i_0] [i_1] [7ULL] [i_2])))));
                }
            } 
        } 
    } 
}
