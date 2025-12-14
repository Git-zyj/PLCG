/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13834
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
    var_10 ^= ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18))))) << (((-4691387980273466631LL) + (4691387980273466643LL))))) | (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (~(var_2)))), (((-4691387980273466615LL) & (arr_5 [i_3] [(unsigned short)20] [i_1])))))));
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 2077405838))) + ((-(((/* implicit */int) var_0)))))))));
                            var_13 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_10 [i_1] [i_1 - 2] [i_1 - 1] [i_3] [i_3])))));
                            var_14 = ((/* implicit */_Bool) var_7);
                            arr_12 [i_0] [i_1] [i_0] [5] = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((unsigned char) var_3));
            }
        } 
    } 
}
