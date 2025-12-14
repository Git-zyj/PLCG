/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154408
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
    var_18 = ((((/* implicit */_Bool) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (signed char)0)))))))) ? (((/* implicit */int) var_16)) : (var_11));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */unsigned int) 6167766840603564068ULL);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) var_0);
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [(unsigned char)9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2128873480)) > (11ULL)));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((11ULL) + (((/* implicit */unsigned long long int) 0U)))) & (((((/* implicit */_Bool) ((((-1436137526) + (2147483647))) << (((9U) - (9U)))))) ? (((/* implicit */unsigned long long int) 0U)) : (11ULL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551604ULL)) && (((/* implicit */_Bool) var_1))));
}
