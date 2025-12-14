/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169672
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */_Bool) (-(((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 6715510260609044068ULL))))))));
                var_17 += ((/* implicit */unsigned long long int) var_9);
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (2047U)))))) ? (((((/* implicit */_Bool) (~(-132122629)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (var_9))))) : (((((/* implicit */_Bool) 15358514614593102208ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_1])))) : (4294967295U)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_19 ^= arr_2 [i_0];
                            arr_9 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((4294967295U), (((((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) arr_1 [(signed char)14] [12])) - (12288)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (max((((/* implicit */unsigned int) (signed char)-1)), (1254731903U)))))));
                            var_20 = ((/* implicit */long long int) var_11);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((signed char) (~(((/* implicit */int) var_11))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) (~(15358514614593102208ULL)));
            }
        } 
    } 
    var_23 &= ((/* implicit */long long int) var_0);
    var_24 = ((/* implicit */int) 0U);
}
