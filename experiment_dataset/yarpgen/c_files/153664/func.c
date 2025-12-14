/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153664
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)8912)) ? (2908420633U) : (4090224353U)))))) ? (((/* implicit */int) min((((/* implicit */short) ((signed char) (unsigned short)53360))), (arr_1 [i_0 - 1] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    arr_8 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) 204742970U);
                    var_21 = ((/* implicit */short) var_18);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8912)) ? (((-5935345136077738181LL) - (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (+(3580643082U))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0 - 1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (signed char)-115))) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))))) : ((-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [10U])) ? (5935345136077738181LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1])))))))));
        arr_9 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_11))))));
        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((signed char) 5935345136077738196LL))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((arr_2 [i_0] [6U]) ? (var_15) : (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) (unsigned short)56604)) : (((/* implicit */int) arr_1 [(_Bool)0] [(_Bool)0])))))))));
    }
    var_25 &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
}
