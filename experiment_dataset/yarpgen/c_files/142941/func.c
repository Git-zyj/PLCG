/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142941
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
    var_16 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 753808704)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4)) != (((/* implicit */int) var_6)))))) : (max((((/* implicit */unsigned int) 753808704)), (var_5)))))));
    var_17 = ((/* implicit */long long int) max((var_17), (min((((/* implicit */long long int) var_6)), (var_3)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 *= ((/* implicit */int) ((unsigned int) min((((/* implicit */int) arr_1 [i_0] [i_2])), (753808684))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [(unsigned short)16] [i_2 - 3] [i_2 - 3])) || (((arr_5 [i_0] [i_2 + 2] [i_2 - 1]) < (var_2))))))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [(_Bool)1]))) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0 - 1])))))) : (arr_0 [i_0]))), (((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_0 [(unsigned char)7])), (arr_5 [15] [i_2] [15]))))))))));
                    arr_6 [5] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < ((+(arr_3 [(unsigned char)0]))))))) | (min((arr_0 [i_2 - 2]), (((/* implicit */unsigned int) 753808700))))));
                }
            } 
        } 
    } 
}
