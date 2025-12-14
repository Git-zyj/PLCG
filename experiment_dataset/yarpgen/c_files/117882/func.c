/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117882
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)47029)))));
                    arr_7 [i_0] [i_0] [(_Bool)1] [i_2 + 1] = min(((~(arr_5 [i_2 + 1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((signed char) var_15))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_21 |= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4]))) & (4506440239421056748ULL))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) (unsigned short)47029)) ? (6546194307596187313ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))))))));
                                var_22 ^= ((/* implicit */long long int) max((var_18), (((/* implicit */unsigned long long int) (signed char)13))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
