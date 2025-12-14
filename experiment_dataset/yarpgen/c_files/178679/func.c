/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178679
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((min((((/* implicit */int) var_11)), (var_0))), (var_10))))));
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_9)) == (min((((/* implicit */int) var_11)), (var_0))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_1 - 3] [i_1 + 1]), (var_2))))) > (max((2080768U), (4292886528U)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((signed char) ((min((((/* implicit */unsigned int) var_0)), (2080773U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                                var_17 = ((/* implicit */long long int) (~(arr_4 [i_0])));
                                var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-13333)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_3 [i_1 + 1]) && (arr_3 [i_1 - 1]))))));
                                var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_15 [i_0] [(signed char)7] [i_0] [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) arr_11 [i_3])))), (arr_1 [i_0])));
                            }
                        } 
                    } 
                    arr_16 [5U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 3] [i_2] [i_2] [i_1] [i_2]))) - (max((arr_15 [i_0] [i_0] [i_1 - 3] [i_1 - 4] [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */long long int) 2080787U)) : (arr_11 [i_0]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) ((2080767U) / (var_12)))) ? (((4292886521U) * (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) max((var_4), (((unsigned char) (_Bool)1)))))));
}
