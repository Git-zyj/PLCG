/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12935
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */unsigned int) (unsigned short)18261);
                arr_5 [i_0] [(short)5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + ((+(var_1)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (_Bool)0)), (var_13))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (min((530281941), (((/* implicit */int) var_0)))) : (((/* implicit */int) var_5)))))));
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */_Bool) var_1);
    var_22 = ((/* implicit */unsigned int) var_18);
}
