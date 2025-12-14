/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164243
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
    var_18 &= var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [(signed char)12] &= ((/* implicit */short) arr_0 [i_0 + 1]);
        var_19 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((var_10) ? (arr_0 [i_0]) : (-639992382))));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)2349))));
            var_20 = ((/* implicit */short) (signed char)64);
            var_21 = ((((/* implicit */_Bool) 639992374)) ? (((((/* implicit */int) (signed char)81)) + (945011410))) : (((((/* implicit */int) (_Bool)0)) + (-1409152630))));
        }
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            var_22 = ((/* implicit */int) ((_Bool) (short)-12861));
            var_23 = (!(((/* implicit */_Bool) (signed char)-107)));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_0] [i_4] [i_4] [11U] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (-8138586245549902754LL)));
                            arr_19 [i_2] [i_2] [(short)2] |= ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (signed char)-105)))));
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_3 - 1] [5] [i_5]))));
                            var_25 = ((/* implicit */_Bool) ((unsigned int) arr_5 [i_0 + 2] [i_3] [i_5]));
                            var_26 = ((((/* implicit */_Bool) -298175858)) ? (((/* implicit */int) arr_8 [i_4])) : (117440512));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_2] [8U] [8U] [i_0] = ((/* implicit */signed char) (-((+(288230375077969920ULL)))));
                            arr_24 [i_0] [i_6] = ((/* implicit */_Bool) 98304);
                            arr_25 [i_0] [i_2] [i_6] [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(11306412954540305724ULL)))) ? (((/* implicit */int) (short)-12861)) : (((/* implicit */int) ((((/* implicit */unsigned int) 639992366)) > (3355981965U))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (signed char)-64))));
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_28 [i_0] [9U] [i_0] [9] [i_7] = ((/* implicit */signed char) ((unsigned int) var_17));
                            arr_29 [i_2] [i_3] [i_0] [(unsigned char)12] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 8388607)))) + (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-8678787747173212867LL) : (((/* implicit */long long int) var_16)))));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (9223372036854775807LL))))));
                            var_29 -= ((/* implicit */int) (short)510);
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31))) : (arr_17 [i_3 - 1] [i_7] [i_3 - 1] [i_7] [i_7])));
                        }
                        arr_30 [i_2] [i_0] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-511)))))));
                        var_31 = arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0];
                    }
                } 
            } 
            arr_31 [i_0] [6] [i_0 + 2] = (((_Bool)1) ? (((/* implicit */int) (signed char)85)) : (-1026523791));
        }
    }
    var_32 = ((/* implicit */unsigned short) var_9);
}
