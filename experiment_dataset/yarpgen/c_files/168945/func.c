/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168945
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2104418287412317592ULL)) && (((/* implicit */_Bool) 7843578119424316574ULL))))), (max((((/* implicit */unsigned long long int) (-(-953250726)))), (8177187173599747905ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_5)) : (18446744073709551615ULL))) << (((unsigned long long int) 31ULL)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_8)));
                var_21 = ((/* implicit */unsigned long long int) var_17);
            }
            var_22 = ((/* implicit */int) (+((((-(var_3))) - (((/* implicit */unsigned long long int) (+(var_15))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) -191800689)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551609ULL)) && (((/* implicit */_Bool) 1946742570)))))) : (var_13)));
            var_24 = ((/* implicit */int) ((arr_4 [i_0] [8] [i_3] [i_3]) + ((+(2439334365446649377ULL)))));
        }
        var_25 = ((/* implicit */int) arr_0 [i_0]);
    }
}
