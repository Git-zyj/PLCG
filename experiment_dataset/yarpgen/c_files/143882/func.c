/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143882
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
    var_20 -= var_10;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))), ((-(((/* implicit */int) ((short) var_17)))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_15)))))) ? (((((/* implicit */int) (short)5451)) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) - (150))))) : (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)26451)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) == (((((/* implicit */int) var_19)) >> (((((((/* implicit */int) var_15)) % (((/* implicit */int) (signed char)-99)))) - (88)))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), ((~(((/* implicit */int) (unsigned char)97))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_2)))), ((-(((/* implicit */int) (short)-11289))))));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_3])), ((~(((/* implicit */int) (short)0)))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) max((var_17), (((/* implicit */short) ((signed char) (short)387)))))) & ((+(((/* implicit */int) arr_14 [i_1] [(unsigned char)19] [i_1] [i_1] [i_1]))))));
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */int) (short)32766)) < ((~(((/* implicit */int) var_10))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_5] [i_6] [i_7] [i_8] [i_6])) >> (((((/* implicit */int) arr_0 [i_8] [i_7])) - (225)))));
                        var_27 = ((/* implicit */short) ((unsigned char) arr_25 [i_8] [i_6]));
                        arr_27 [i_5] [i_8] &= ((/* implicit */short) (+(((/* implicit */int) (signed char)-12))));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (short)-14476)))) : (((/* implicit */int) arr_6 [i_5]))));
        }
    }
    var_29 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_7))))), ((unsigned char)48)));
}
