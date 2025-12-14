/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139993
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */signed char) arr_1 [i_0]);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [6U] = ((/* implicit */long long int) arr_11 [i_4] [i_3] [i_1] [i_1] [i_0]);
                                var_21 -= ((/* implicit */signed char) max((((/* implicit */long long int) (~(268435455)))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (0LL) : (arr_6 [i_3])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -15LL)))))));
                    arr_13 [i_0] [10] [8U] [i_2] = ((/* implicit */int) ((((_Bool) max((((/* implicit */unsigned long long int) (signed char)-61)), (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2)));
                    var_23 ^= min((arr_8 [i_2] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(short)0] [i_1])));
                    arr_14 [11] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1293259650)) ? (((/* implicit */unsigned int) 807689551)) : (449567387U)))) ? (((/* implicit */unsigned long long int) -7LL)) : (((((/* implicit */_Bool) -42LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2]))) : (arr_8 [i_2 + 2] [i_2] [i_2] [i_2 + 2])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_5);
}
