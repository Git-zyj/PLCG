/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110594
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
    var_20 = ((/* implicit */int) ((unsigned int) max((max((1048576U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = (+(5578517443398738877LL));
                var_22 = (-((-(-4652210293395740332LL))));
                var_23 = ((/* implicit */unsigned int) ((((5578517443398738884LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_16)) : (var_2)))))) && (((/* implicit */_Bool) 2334708197U))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) var_10)) : (5578517443398738880LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (var_6)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
                            var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(arr_9 [i_0] [i_0] [i_0])))) ? (min((-5578517443398738903LL), (((/* implicit */long long int) arr_4 [i_2])))) : (((/* implicit */long long int) (-(1618978233))))))));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (~(-60489261))))) ? (((((-6226216197430559338LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_4 [i_0])))) : (arr_2 [i_3]))) : (arr_1 [i_0])));
                        }
                    } 
                } 
                var_27 = var_9;
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_16)) : (4294967295U))) << ((((~(var_5))) - (394686657))))))));
}
