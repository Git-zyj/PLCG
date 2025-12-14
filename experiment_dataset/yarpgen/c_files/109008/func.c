/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109008
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
    var_12 = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (-286506464))))));
    var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_11))) ? (max((((var_4) << (((286506463) - (286506403))))), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((_Bool) -286506464)) ? (((((/* implicit */_Bool) -592117380)) ? (((/* implicit */int) var_8)) : (-460635032))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) 460635031);
                        arr_8 [i_1] [(_Bool)1] [i_2 + 3] [i_3] &= ((/* implicit */unsigned char) arr_2 [11] [i_0]);
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 21221098)) ? (((/* implicit */int) (unsigned short)61440)) : (460635010)));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -732493334)) ? (((/* implicit */int) (unsigned short)54823)) : (((/* implicit */int) (unsigned char)47))));
                        var_17 = ((/* implicit */signed char) arr_5 [14LL] [i_1] [i_2] [i_0 + 1]);
                    }
                } 
            } 
        } 
        arr_9 [(_Bool)1] [(short)10] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(_Bool)1] [(short)4] [i_0 + 1]))) * (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) : (983495638U)))));
        arr_10 [i_0] [i_0 + 1] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0]);
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0] [14] [i_0])) * (((/* implicit */int) var_3))))) ? (4294967295U) : (((/* implicit */unsigned int) ((int) (unsigned short)40595)))));
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2]))));
    }
    var_20 = ((/* implicit */unsigned char) (~((~(var_7)))));
}
