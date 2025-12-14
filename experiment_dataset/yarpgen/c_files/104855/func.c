/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104855
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
    var_11 = ((5763155904909864297ULL) + ((~(var_5))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(var_7)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) + (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])))) * (((/* implicit */int) ((short) arr_7 [i_0 - 1] [i_0 - 1])))));
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_4))))))))))));
                }
            } 
        } 
    } 
}
