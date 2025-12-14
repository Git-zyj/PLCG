/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174895
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) var_5);
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)46283))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-2021101669)));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)46460))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_7)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) arr_2 [i_1] [i_1])), ((short)19))))))) : ((+(var_11)))));
        arr_7 [i_1] [(unsigned short)5] = min((((/* implicit */unsigned short) var_14)), (arr_6 [i_1] [i_1]));
        arr_8 [i_1] = (-(var_7));
        var_21 = ((/* implicit */unsigned short) 14427205709749405013ULL);
        var_22 = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) var_16)))))), ((~(((/* implicit */int) ((unsigned short) var_13)))))));
    }
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_13))));
}
