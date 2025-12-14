/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167634
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((var_10) + (((/* implicit */unsigned long long int) min((2984668023U), (((/* implicit */unsigned int) -1779800937))))))), (min((((/* implicit */unsigned long long int) min((645951824U), (((/* implicit */unsigned int) var_0))))), (max((((/* implicit */unsigned long long int) 617878076U)), (var_13))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_0])) ? (2693047168301500570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7826))))), (((/* implicit */unsigned long long int) ((unsigned int) 0LL)))));
                var_22 = ((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_0] [i_1]);
                var_23 = arr_5 [i_0] [(unsigned char)7] [i_0];
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) 13090179353615664542ULL));
                    var_25 = ((/* implicit */long long int) ((unsigned int) 7971342264098190841ULL));
                    var_26 = ((/* implicit */unsigned long long int) ((int) 2693047168301500564ULL));
                    var_27 = ((unsigned long long int) ((((/* implicit */_Bool) 2693047168301500570ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [(unsigned char)19] [i_2 + 1])) : (15753696905408051046ULL)));
                    var_28 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                }
            }
        } 
    } 
}
