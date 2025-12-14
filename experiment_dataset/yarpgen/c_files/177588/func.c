/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177588
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
    var_17 = ((/* implicit */long long int) (~(min(((+(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) 33554304ULL)) ? (var_13) : (((/* implicit */int) (unsigned char)19))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_18 = ((max((arr_4 [i_0 + 2] [i_1 - 3] [i_1 + 1] [i_1 - 3]), (((/* implicit */long long int) (signed char)121)))) - (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 - 2] [i_1] [i_1 - 2])) ? (3848379760021900611LL) : (arr_4 [i_0 + 2] [i_1 - 1] [1LL] [i_1 - 2]))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) arr_1 [i_0]);
                            arr_11 [i_2] [i_3] [i_2] [i_2] [i_1 - 3] [i_2] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_0 [i_0 + 2])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min(((signed char)-122), (((/* implicit */signed char) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (-2147483645) : (((/* implicit */int) var_16))))) : ((~(var_11))))) >= (((/* implicit */long long int) (-(((/* implicit */int) ((var_0) > (var_12)))))))));
                var_20 ^= ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
}
