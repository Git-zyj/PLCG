/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120206
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_15 -= ((/* implicit */short) ((unsigned char) ((signed char) var_6)));
        var_16 = ((/* implicit */unsigned char) var_3);
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_7 [i_0] [0U] [i_0 + 1]))))));
                    var_18 = ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0 + 1])));
                    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [(unsigned short)9])))) : (var_7)));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) arr_1 [i_0 - 1]);
    }
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) -1)), (var_14))))), (((((/* implicit */_Bool) 2324174168U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)144)))) : (((unsigned long long int) (short)(-32767 - 1)))))));
}
