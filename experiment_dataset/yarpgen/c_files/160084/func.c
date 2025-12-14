/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160084
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_19);
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) max((((int) var_3)), (((var_14) - (((/* implicit */int) (short)-18406))))))) : (((((long long int) arr_1 [i_1])) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_21 = ((short) (~(arr_1 [i_2])));
            var_22 = ((signed char) ((((/* implicit */_Bool) 1328154476U)) ? (arr_0 [i_2]) : (((/* implicit */long long int) min((1328154476U), (((/* implicit */unsigned int) var_11)))))));
            arr_10 [i_2] = ((/* implicit */int) var_17);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_23 = min((((/* implicit */int) var_6)), (((var_4) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (1023881925) : (arr_7 [i_1] [i_1]))) : (((/* implicit */int) var_11)))));
            var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2966812837U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)14445)))), ((-(((/* implicit */int) (!(var_4))))))));
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) var_13);
        }
        var_25 = (+(((/* implicit */int) (unsigned short)36283)));
        arr_14 [i_1] = ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [i_1] [(unsigned char)4]) : (var_15)))))));
    }
    var_26 = ((/* implicit */int) 1328154476U);
}
