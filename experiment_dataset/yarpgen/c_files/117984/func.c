/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117984
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
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (short)32384;
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_16), (var_15)))) ? (((/* implicit */int) ((-546691437) >= (-913632439)))) : (((/* implicit */int) var_18)))), (((/* implicit */int) var_3)))))));
                var_20 = ((/* implicit */short) -1998170070);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] |= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 4 */
                        for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            arr_17 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = var_9;
                            var_21 = ((/* implicit */int) max((var_21), ((+(((/* implicit */int) ((_Bool) (short)-32385)))))));
                            arr_18 [i_4] [i_3 + 2] [i_2] [i_1] [(short)7] [11] [i_0] = ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)-4162)) ? (((/* implicit */int) (short)27375)) : (((/* implicit */int) (short)4161)))));
                            var_22 = ((/* implicit */int) ((_Bool) (~(17533944))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_0] [(short)3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((int) arr_10 [i_0] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_0 + 1]))));
                            arr_23 [i_0] [(short)16] [i_3 + 2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_0 + 2] [i_3 + 2] [i_3 - 1]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0 + 1]))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_30 [i_7] [(signed char)21] [i_0] [6] [i_1] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)4171)) ? (((/* implicit */int) (signed char)35)) : (1811155087)))));
                            arr_31 [i_2] [i_3] &= ((/* implicit */short) ((((((/* implicit */int) var_16)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-11226)) : (((/* implicit */int) var_4))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (-1116650204) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_3])) : (((/* implicit */int) (short)-15204))));
                        }
                    }
                    var_26 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_17)))));
                    var_27 = ((/* implicit */short) arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
                for (int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_42 [i_1] [i_1] [i_8 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_11)), (-1550636443))) + (((/* implicit */int) (_Bool)1))))) ? ((~(-913632413))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) var_3)) : (-408950374)))) ? (arr_39 [i_0 + 2] [i_0 + 1] [i_0 + 2]) : (((/* implicit */int) ((signed char) var_18)))))));
                                arr_43 [i_9] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_8 + 3] [i_10])) ? (-1761312097) : (-1748464280)))) ? (max((var_9), (((/* implicit */int) arr_13 [(signed char)3] [(signed char)3] [i_8 - 1] [i_8 + 2] [i_8])))) : ((+(((/* implicit */int) arr_6 [i_1] [i_8 + 3] [i_9]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) max((var_28), (((int) ((((/* implicit */_Bool) 931402516)) ? (((int) arr_29 [i_0] [i_8] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_1] [i_1])))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) -1099674468);
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (short i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            {
                arr_48 [i_12] [i_12] [i_11] = (((_Bool)1) || ((_Bool)1));
                var_30 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1234568682)) ? (1935749558) : (((/* implicit */int) (short)-21912))))) ? ((+(((/* implicit */int) var_10)))) : (-1003905411))))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) 1282923063);
}
