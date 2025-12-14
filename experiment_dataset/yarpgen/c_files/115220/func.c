/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115220
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_2 [i_0]))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((var_14) ? (((/* implicit */int) arr_3 [i_0] [6U])) : (((/* implicit */int) (_Bool)0)))))), (arr_0 [i_0]))))));
                    arr_10 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) arr_3 [i_1] [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_15 [i_3] [i_1] [i_0] [i_2] [i_1] = ((/* implicit */int) var_7);
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -956856278)) ? (((var_11) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) -956856278))));
                    }
                }
                for (int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) || ((!(((/* implicit */_Bool) -956856278))))))), (var_1))))));
                    arr_18 [(_Bool)1] [i_1] [i_0] [(short)12] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (_Bool)1)) : (1796626232)))) ? (min((((/* implicit */int) arr_2 [i_0])), (var_8))) : (((/* implicit */int) (_Bool)1))))));
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) (~(2046414129)));
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (max((((((/* implicit */int) (unsigned char)230)) + (((/* implicit */int) (_Bool)1)))), (((2147483623) - (arr_8 [i_0] [i_1])))))));
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-16384)) + (16400))))) > (((/* implicit */int) (!(((/* implicit */_Bool) 563552576U)))))));
                        var_25 = ((/* implicit */short) max((((/* implicit */int) (short)-4709)), (-2147483634)));
                        var_26 ^= ((/* implicit */unsigned char) arr_20 [i_7]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_25 [i_0] [i_5] [i_5] [i_0])) ? (arr_25 [i_8] [i_5] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_25 [i_8] [i_5] [i_1] [i_0])) ? (arr_25 [i_1] [i_1] [(_Bool)1] [i_1]) : (3758096384U)))));
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))));
                        arr_30 [i_0] [i_1] [i_5] [i_8] = ((/* implicit */unsigned int) (+(((int) ((((/* implicit */unsigned int) arr_8 [i_0] [i_5])) + (3522441219U))))));
                    }
                    var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_0]))))) ? (((arr_7 [i_0] [i_1]) ? (var_8) : (((/* implicit */int) (unsigned char)8)))) : (var_9)))));
                }
                var_30 ^= ((((/* implicit */_Bool) var_2)) ? ((~(1184852783))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_10) ? (var_6) : (((/* implicit */int) (_Bool)1)))) : (((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_31 = (_Bool)0;
    var_32 = (+(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) -1985397566)) / (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_3))))))));
}
