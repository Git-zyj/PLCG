/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160198
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -940392944)) || ((!(var_4)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [10ULL] [i_2] [i_3] [i_0] [i_2] = max((min((((((/* implicit */_Bool) 1858394043886295224LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)11] [i_0]))) : (var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_3] [13U] [(unsigned char)0] [(unsigned char)0]))))))), (((/* implicit */unsigned long long int) -446469434)));
                            var_17 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_3);
}
