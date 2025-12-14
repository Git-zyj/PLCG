/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117404
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
    var_10 = ((/* implicit */short) ((272122630) / (((/* implicit */int) var_2))));
    var_11 = ((/* implicit */short) ((((((/* implicit */int) var_8)) & (var_4))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-5))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */short) var_1);
                    arr_8 [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */int) (short)8571)) : (((/* implicit */int) (short)-8594))));
                    var_13 = ((/* implicit */_Bool) ((var_3) << (((((((/* implicit */int) var_8)) + (24))) - (1)))));
                    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)52))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(short)15] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (unsigned short)23791)) ? (((/* implicit */int) (short)-8599)) : (((/* implicit */int) (short)-8604)))), (((/* implicit */int) max((var_5), (arr_9 [i_0] [i_1] [i_2] [i_2])))))) | (((((/* implicit */_Bool) (short)4)) ? (var_3) : (((/* implicit */int) (unsigned short)2035))))));
                                var_15 = ((/* implicit */short) ((min((((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_14 [i_0] [i_1] [(short)22] [i_0] [i_3] [(unsigned short)9]))))), (min((((/* implicit */int) (short)7)), (var_7))))) % (((((/* implicit */int) (signed char)-117)) | (((/* implicit */int) (short)-10))))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */int) arr_4 [i_0] [i_2] [i_3])) != (((((((/* implicit */int) var_1)) + (649215478))) * (((/* implicit */int) arr_14 [i_4] [i_1] [i_2] [i_0] [i_2 + 1] [23])))));
                                arr_17 [(short)20] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(0)))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (4194272) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)22)) : (((/* implicit */int) (signed char)3)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (short)8571))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 *= ((((/* implicit */int) (short)8593)) > (((/* implicit */int) (short)-8584)));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) var_6);
        var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_5]))));
        arr_23 [i_5] = (short)-10;
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_26 [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((var_7) < (((/* implicit */int) var_9)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (286435963)))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) arr_1 [i_6]))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (short)-8571)))))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (short i_9 = 2; i_9 < 10; i_9 += 1) 
                    {
                        {
                            arr_34 [i_8] = ((int) (short)(-32767 - 1));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_9])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (signed char)-98)))) : (((/* implicit */int) (unsigned short)35942)))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)4096)) ? (var_6) : ((~(((/* implicit */int) (unsigned short)1023)))))) : ((+(((((/* implicit */int) (short)-8581)) / (var_3)))))));
        arr_37 [i_10] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_10])) != (var_4)))) >= (max((((/* implicit */int) min((arr_14 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), ((_Bool)1)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)0))))))));
    }
}
