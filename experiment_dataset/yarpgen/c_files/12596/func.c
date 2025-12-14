/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12596
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
    var_14 = ((/* implicit */signed char) var_10);
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned short)37765)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((((/* implicit */int) (short)0)) * (((/* implicit */int) ((((/* implicit */int) (signed char)74)) < (((/* implicit */int) (short)0)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (short)29710))));
            var_17 = ((/* implicit */short) (signed char)-74);
            var_18 = ((/* implicit */unsigned short) (short)0);
        }
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            arr_11 [i_2] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))));
            var_19 = ((/* implicit */unsigned short) (signed char)-11);
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) arr_1 [i_3] [i_4]);
                        arr_18 [i_0] [i_4] [(short)5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-89)) - ((-(((/* implicit */int) arr_6 [i_2] [i_3] [i_4]))))))) ? (((/* implicit */int) arr_2 [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(unsigned short)4] [i_4] [i_4] [(unsigned short)4])) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) (signed char)-112)) : ((+(((/* implicit */int) (signed char)10))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((var_21), (var_13)));
            arr_19 [i_0] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? ((~(((/* implicit */int) (unsigned short)25)))) : ((-(((/* implicit */int) (signed char)-79))))))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)0)))), ((+(((/* implicit */int) var_7)))))) : (((((/* implicit */int) (short)-15104)) & (((/* implicit */int) ((((/* implicit */int) (signed char)97)) <= (((/* implicit */int) arr_17 [i_2] [(signed char)2] [i_2])))))))));
        }
        var_22 = ((/* implicit */short) (unsigned short)0);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)0)))))))))));
        var_24 = ((/* implicit */short) (signed char)-75);
    }
}
