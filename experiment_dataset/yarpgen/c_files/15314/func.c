/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15314
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) var_16);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_6 [i_0 - 1] [i_1 - 3] [i_2]), (arr_6 [i_0] [i_0 - 1] [i_0 + 1])))), (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) << (((((/* implicit */int) arr_6 [i_3] [i_1] [i_1])) - (147)))))));
                                var_22 = ((/* implicit */short) (-((-((-(arr_2 [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_1] [i_6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)132)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) 268173312)) >= (13281640580093800908ULL))))));
                                arr_19 [i_6] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)120)) ? (max((arr_4 [i_5] [i_1]), (((/* implicit */long long int) (+(var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                                arr_20 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_2 [i_0 - 1] [i_0]), (arr_2 [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 ^= (~((-(min((2147483647), (2147483647))))));
    var_24 = var_17;
    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_2))));
}
