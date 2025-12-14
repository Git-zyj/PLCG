/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134382
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
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 353358598)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38335))) : (4294967295U))))))), ((~(-1506714191)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 2305843009213693888LL)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) 5211754974463971609LL);
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(max((((/* implicit */long long int) (_Bool)0)), (-6280371561814098159LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_7);
}
