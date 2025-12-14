/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108190
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((signed char) var_1));
                    var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [(signed char)0] [i_1] [i_0]))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [11LL] [i_1] [i_2])) ? (max((((/* implicit */long long int) arr_5 [i_2 - 2] [i_1 + 2])), ((+(var_5))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_2 - 2])), (min(((-2147483647 - 1)), (((/* implicit */int) arr_3 [i_0] [i_1]))))))))))));
                    var_21 = ((/* implicit */_Bool) 299624662);
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) var_0);
    var_23 = ((/* implicit */signed char) var_0);
}
