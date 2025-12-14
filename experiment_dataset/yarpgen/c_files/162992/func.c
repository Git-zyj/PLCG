/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162992
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
    var_18 = ((/* implicit */unsigned int) min((var_0), (var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) 0LL);
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) var_15)))) == ((+(((/* implicit */int) var_9))))));
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    var_19 -= (_Bool)1;
                    arr_11 [i_0] [i_0] = ((/* implicit */long long int) (~((~(var_1)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] = (!(((/* implicit */_Bool) 549621596160LL)));
                        arr_15 [i_0] = ((((/* implicit */_Bool) 1401685411438942472LL)) ? (881265351260750010LL) : (-881265351260750011LL));
                    }
                }
                var_20 = ((/* implicit */long long int) var_10);
                var_21 -= (!(((/* implicit */_Bool) (((_Bool)0) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_22 = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_23 -= var_1;
}
