/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132239
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
    var_18 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((int) var_1));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [13LL] [i_4] [i_0] [i_4] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) min((arr_10 [i_0 - 3]), (((/* implicit */unsigned long long int) (_Bool)1)))))) % (((/* implicit */int) (signed char)-125))));
                                arr_15 [i_0] [i_4] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */short) (((~(arr_3 [i_3] [i_2] [i_0 - 1]))) >> (min(((~(arr_10 [i_0]))), (((/* implicit */unsigned long long int) min(((_Bool)1), (arr_13 [i_4]))))))));
                                var_19 += ((/* implicit */int) (~(max((min((((/* implicit */long long int) arr_5 [i_1] [i_2] [i_3])), (-1471774776703222604LL))), (((/* implicit */long long int) arr_13 [i_3]))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((((/* implicit */_Bool) 56)) ? (var_3) : (((/* implicit */int) arr_1 [i_4 + 3] [i_2 + 2])))), ((-(((/* implicit */int) arr_1 [i_4 + 3] [i_2 - 3])))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) (~(((((((/* implicit */_Bool) var_2)) ? (6867364154675271880LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [(signed char)3] [i_1] [(signed char)3] [i_1] [i_0] [i_0 - 1])), (var_14)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */long long int) arr_12 [i_0] [2LL] [i_2] [i_5] [i_5] [i_5])), (5006765076034774298LL)))));
                                var_23 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_6] [i_2] [i_6])) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_6] [i_0 - 3] [i_2 + 3] [i_5])) : (((/* implicit */int) (short)511))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */long long int) var_0);
}
