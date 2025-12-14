/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103514
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
    var_19 *= ((/* implicit */short) min((max(((-(4142957883U))), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_1 + 3] [i_1 + 4]))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) | ((-(152009412U)))))) || (((/* implicit */_Bool) (-(1375224121U))))));
        }
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (4142957883U)));
        arr_6 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    var_22 = (((((+(var_8))) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned int) (((_Bool)1) ? ((+(869485337))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
}
