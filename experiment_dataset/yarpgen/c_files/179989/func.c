/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179989
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)5345), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-51)))))))) ? (((/* implicit */int) var_10)) : (max((min((var_3), (((/* implicit */int) var_14)))), (((/* implicit */int) var_18))))));
    var_20 = var_5;
    var_21 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))) % (((/* implicit */int) var_2)))) > (min((((/* implicit */int) ((signed char) (signed char)51))), (min((var_5), (((/* implicit */int) (signed char)-39))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */int) ((short) var_2))) == (((int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (var_1)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_1] [(signed char)2])) : (2107008260)));
                arr_7 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) < ((-(((/* implicit */int) (signed char)51))))));
            }
        } 
    } 
}
