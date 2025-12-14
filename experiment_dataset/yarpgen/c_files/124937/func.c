/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124937
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
    var_10 = ((/* implicit */unsigned char) (~((~(4029961497365436758LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_11 = ((/* implicit */_Bool) (unsigned char)101);
                    arr_10 [i_0] [4] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(4029961497365436761LL))), (min((((/* implicit */long long int) 2885031992U)), (-1471365441562237632LL)))))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)64))))), (arr_3 [9]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                    var_12 ^= (!(((/* implicit */_Bool) (+((-2147483647 - 1))))));
                }
                var_13 = ((/* implicit */unsigned char) (-(var_1)));
            }
        } 
    } 
}
