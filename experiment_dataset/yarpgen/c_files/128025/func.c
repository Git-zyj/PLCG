/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128025
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
    var_16 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) arr_0 [2U])))) - (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)243)), (2592997487U)))) < (min((4203759123777841441LL), ((-9223372036854775807LL - 1LL))))))) > (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 9223372036854775807LL))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (short)8826);
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])))));
                        arr_12 [i_1] [i_2] [i_3] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1 + 1])) <= (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2]))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) var_4);
                            var_21 ^= ((/* implicit */unsigned char) var_6);
                            arr_16 [i_5] [i_2] [i_1] [i_2] [i_1] [i_1] [i_1 + 2] = var_12;
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_1] = ((((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))))) - (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [13U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_11 [i_1]))));
                            arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 2] [(unsigned char)1] [i_1 - 1] [i_1] [(unsigned char)2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2] [i_2] [i_1 + 2]))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            arr_21 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */short) ((arr_13 [i_1 + 2] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            arr_22 [i_1] [i_3] [(unsigned char)0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */long long int) 3123844239U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) : (((((/* implicit */_Bool) arr_13 [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (936167013U)))));
                            var_22 = var_1;
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            var_23 *= var_7;
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_12))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(unsigned char)2] [i_7] [i_7] [i_1 - 1] [i_7])) + (((/* implicit */int) arr_4 [i_1] [i_7])))))));
            arr_25 [i_7] [i_7] &= ((/* implicit */unsigned char) var_4);
            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned char) 2018952900U));
        }
        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(var_1))))));
            /* LoopSeq 3 */
            for (short i_9 = 2; i_9 < 13; i_9 += 1) 
            {
                var_26 -= ((/* implicit */short) ((((1094866105U) >= (arr_29 [i_8] [i_8] [i_8]))) ? (((((/* implicit */_Bool) (short)32737)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) : (2276014395U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (1171123040U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
            }
            for (short i_10 = 1; i_10 < 13; i_10 += 4) 
            {
                var_28 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                arr_33 [i_8] [i_8] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))) < (var_4)));
                arr_34 [7U] [i_8] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) / (-4090936134944658052LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1 + 1])))));
            }
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                var_29 = ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_8 + 1])) ? (var_5) : (var_14));
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (unsigned char)255))))))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)175)) ? (-12LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            }
        }
        var_32 = ((/* implicit */unsigned int) ((long long int) var_3));
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_12]))) % (min((min((-4090936134944658052LL), (arr_39 [i_12]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (3928756940U))))))));
        var_34 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 3928756937U)) ? (arr_39 [(unsigned char)4]) : (3585413152641312453LL)))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            arr_44 [i_12] [i_13] [i_12] = ((/* implicit */unsigned char) 6LL);
            var_35 = ((/* implicit */long long int) var_7);
        }
    }
    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
    {
        arr_48 [i_14] [i_14] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) < (var_1))) ? ((+(2639150203U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)10759)))))));
        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_9))));
    }
}
