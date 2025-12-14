/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186184
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
    var_11 ^= var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 8040744260296566416LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))));
                                var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 2910287601939608797LL)) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_0 + 4] [i_0 + 2] [i_0 + 3])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_0 - 1])))), (((((/* implicit */int) (unsigned short)2528)) - (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0 + 3]))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((-1418732682) - (arr_2 [i_1])))) != (min((((/* implicit */unsigned int) (_Bool)0)), (1254008333U)))))), (max((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
            }
        } 
    } 
}
