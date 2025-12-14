/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152160
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
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 -= ((/* implicit */unsigned short) var_4);
    var_18 = ((/* implicit */unsigned long long int) ((max((2220087085U), (((/* implicit */unsigned int) (-(var_7)))))) > (var_9)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = (+((~(arr_3 [i_0]))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 783449322728106952ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)40)))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) max((min((((/* implicit */short) ((signed char) var_5))), (min(((short)16153), (var_15))))), (((/* implicit */short) (signed char)-43))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)6);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_21 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((((/* implicit */int) var_14)) & (((/* implicit */int) (unsigned char)40)))) - (32)))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2]))))) < (((/* implicit */int) ((unsigned short) var_14))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_2])))))));
                    var_24 = ((/* implicit */short) arr_16 [i_2] [i_3] [i_4]);
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */unsigned int) arr_15 [i_2])) : (var_9)));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)61))));
    }
}
