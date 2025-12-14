/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110417
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_3 [i_0] [i_0] [i_1])))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) ((arr_2 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))) : (((/* implicit */int) (unsigned short)4092))))));
                var_14 = ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [(_Bool)1] [(_Bool)1]))) << (((((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0])) - (46421))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)9])) : (var_3))))) >> (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (0U)))), (arr_1 [i_0]))))));
            }
        } 
    } 
}
