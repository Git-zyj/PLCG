/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135729
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_18;
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (unsigned char)59)))))) ? (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) max(((unsigned short)53947), (((/* implicit */unsigned short) var_12))))) : (((((/* implicit */int) (unsigned char)98)) | (((/* implicit */int) (unsigned short)51988)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_17) || (var_13)))) : (((/* implicit */int) var_7))))));
    /* LoopSeq 2 */
    for (short i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        arr_11 [i_2 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_9 [(unsigned char)4] [i_2])) != (((/* implicit */int) var_11))))) >> (((((/* implicit */int) min((arr_3 [(signed char)15]), (arr_3 [i_2 + 4])))) + (21591)))))) ? (((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) arr_0 [i_2 - 3])) : (((/* implicit */int) max(((unsigned short)0), ((unsigned short)6090)))))) : (min((((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_2)))), ((-(((/* implicit */int) var_1))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2 + 1]))))) ? (((((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */unsigned short) var_18))))) >> (((/* implicit */int) ((_Bool) (unsigned short)3283))))) : (((/* implicit */int) var_18))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_19 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 - 2])) + (((/* implicit */int) max(((unsigned short)48020), (((/* implicit */unsigned short) var_0)))))))) ? (((/* implicit */int) max((((signed char) arr_13 [i_2] [i_3] [(_Bool)1])), (((/* implicit */signed char) arr_13 [i_3] [i_3] [i_3]))))) : ((((-(((/* implicit */int) arr_0 [i_3])))) / ((+(((/* implicit */int) var_3))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        arr_24 [i_2] [(unsigned char)6] [i_4 + 1] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_22 [i_2]))));
                        arr_25 [i_2] [i_3] [i_4] [i_5 + 2] = ((/* implicit */unsigned char) arr_5 [i_4 + 1]);
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 15; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) arr_9 [i_2] [i_2]);
                        arr_28 [i_2 + 3] [i_2] [i_4 + 2] [i_4] [i_6] [i_3] = arr_2 [i_2];
                        var_22 = ((/* implicit */unsigned short) arr_1 [i_3] [i_4]);
                    }
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2 + 2]))))) ? ((-(((/* implicit */int) arr_0 [i_2 + 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 + 2])) >= (((/* implicit */int) arr_0 [i_2 + 2])))))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_31 [i_7] = (_Bool)1;
        var_24 = ((/* implicit */unsigned char) arr_0 [i_7]);
    }
    var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)158)), ((unsigned short)51988)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_18)))) : (((/* implicit */int) (unsigned char)114))))) ? (((/* implicit */int) max((max((var_15), (((/* implicit */unsigned char) var_0)))), (var_9)))) : (((/* implicit */int) (signed char)-99))));
}
