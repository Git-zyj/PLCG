/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138102
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_15 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(arr_4 [i_3] [i_0] [i_0]))))))));
                            var_13 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_1 + 1] [i_2] [0LL]) ^ (var_1))) * (((/* implicit */int) (short)0))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0]))))) ? ((+(arr_7 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [12ULL] [(short)10] [i_2] [i_3]), ((_Bool)0)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((_Bool) var_11));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) - (((/* implicit */int) ((short) var_2)))))) && (((/* implicit */_Bool) ((signed char) 17919464961308440470ULL))))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((1737589363U), (((/* implicit */unsigned int) (unsigned short)10738)))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */int) var_8);
}
