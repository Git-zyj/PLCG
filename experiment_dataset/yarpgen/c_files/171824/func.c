/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171824
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) ((((/* implicit */int) ((_Bool) 5824684117602666526ULL))) <= (((/* implicit */int) var_8))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2])) & (max((var_6), (((/* implicit */int) (unsigned char)102))))))), (max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (2147483630))))))))));
                            arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) (unsigned char)118)) ? (0ULL) : (0ULL))) : (min((var_12), (((/* implicit */unsigned long long int) var_4))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)28672)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_12)))) ? (((var_1) + (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_9))))))));
    var_23 = ((((/* implicit */int) var_16)) != (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_9)), (var_12))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
}
