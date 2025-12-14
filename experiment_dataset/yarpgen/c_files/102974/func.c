/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102974
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 1) 
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) ((short) arr_4 [i_2 - 1] [i_2] [i_2 - 3]));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (-(-1742767117)))) ? (-1742767126) : (((/* implicit */int) ((_Bool) (short)32767))))))));
                    var_17 = (+((+(-1742767086))));
                }
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1742767117)))))))), (((/* implicit */unsigned long long int) (((+(753211939))) != (((((/* implicit */int) arr_6 [(short)15])) + (((/* implicit */int) (unsigned short)53725))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) ((-753211938) & (((/* implicit */int) (short)30405)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1742767116)) ? (((/* implicit */int) (unsigned short)49744)) : (-1742767146)))) ? ((+(-1742767117))) : (max((1742767090), (753211938))))))))));
}
