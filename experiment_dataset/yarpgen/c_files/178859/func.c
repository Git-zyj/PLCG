/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178859
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [(signed char)18] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) <= (((/* implicit */int) (short)25395)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (((1857278607U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75)))))));
            arr_7 [(short)10] [(short)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-75))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (unsigned short)62250)) : (((/* implicit */int) (signed char)-100)))))));
        }
        arr_8 [(_Bool)1] [i_0 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) (short)25395)) | (((/* implicit */int) (short)25395)))) | (((/* implicit */int) var_4))));
    }
    var_10 = ((/* implicit */_Bool) var_4);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) ((signed char) (signed char)-61)))))) : (((((/* implicit */int) (short)-25395)) / (((/* implicit */int) var_5))))));
    var_12 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)30332)) >= (((/* implicit */int) var_1)))))));
}
