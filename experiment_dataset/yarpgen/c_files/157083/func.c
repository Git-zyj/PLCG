/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157083
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 565365751)) && (((/* implicit */_Bool) (short)32767))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) ((2607339902U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1])))));
                    arr_7 [i_0] [(unsigned short)18] [(unsigned char)19] = ((/* implicit */_Bool) ((short) 2147483647));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((((/* implicit */_Bool) 2156077560U)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_21 -= ((short) arr_4 [i_0] [i_0]);
    }
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)11259)));
    var_23 = min((var_16), (var_16));
    var_24 = ((/* implicit */unsigned short) var_4);
}
