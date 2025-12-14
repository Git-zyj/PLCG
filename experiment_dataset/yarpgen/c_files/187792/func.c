/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187792
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) - (((((/* implicit */long long int) 609914311U)) | (9223372036854775807LL)))))) ? ((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) (~(-9223372036854775800LL)))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) var_7))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((((/* implicit */_Bool) -9223372036854775800LL)) ? (3685052993U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))));
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
            {
                var_15 += ((/* implicit */short) (~(((/* implicit */int) (unsigned short)19892))));
                var_16 = ((((arr_3 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (((/* implicit */long long int) (+(var_3)))));
                /* LoopSeq 4 */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19887)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2 - 1]))) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)8154)) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (1273090375U)))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) 67108863LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(3685052984U)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) >= (((/* implicit */int) var_1))))) : (((/* implicit */int) var_5)))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17118))) : (arr_2 [i_1] [i_0])))) || (((/* implicit */_Bool) ((0U) << (((/* implicit */int) (unsigned short)2))))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) ((var_12) + (((/* implicit */long long int) 962663407U))));
                    var_21 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_4] [i_4])))))));
                    var_22 ^= ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */long long int) 566735229U)) : (15LL));
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    arr_20 [i_0] [i_1] [i_5] [i_1] [i_5] [i_1] = (-(arr_16 [i_2 - 1] [i_1] [i_2 + 1] [i_5] [i_5]));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (2017753492U)))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_2 - 1] [i_5])) ? (7194840113569982793LL) : (((/* implicit */long long int) arr_9 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 609914285U)) == (-9223372036854775804LL)))))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] &= ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) | (((9223372036854775804LL) ^ (((/* implicit */long long int) var_9)))));
                }
                for (short i_6 = 1; i_6 < 7; i_6 += 4) 
                {
                    arr_25 [i_0] [i_0] [i_1] [i_2 - 1] [i_6 + 2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_0] [i_6 + 1] [i_0] [i_6 + 3]))));
                    var_24 = ((/* implicit */long long int) max((var_24), ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12)))))));
                }
                arr_26 [i_0] [i_0] [i_2 + 1] &= ((0LL) + (((/* implicit */long long int) ((/* implicit */int) var_5))));
            }
            for (short i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
            {
                arr_29 [i_0] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (var_10) : (arr_1 [i_0] [i_7 + 1])))));
                var_25 = ((/* implicit */long long int) min((var_25), ((+(-67108836LL)))));
                var_26 = ((arr_1 [i_7 - 1] [i_7 - 1]) & (((((/* implicit */_Bool) -2111580043525995475LL)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1]))))));
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) var_4)))))));
            }
        }
        var_28 = ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (-2125257989431716041LL))), (min((((/* implicit */long long int) var_6)), (-67108817LL)))))) ? (min((2125257989431716040LL), (((/* implicit */long long int) 3426584484U)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36950))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_32 [i_8])) ^ (7194840113569982793LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8]))) >= (arr_30 [i_8])))))));
        arr_34 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_31 [i_8]))))) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_3) - (3420298436U)))))) ? ((~(-67108836LL))) : (((((/* implicit */_Bool) arr_31 [i_8])) ? (-9223372036854775804LL) : (((/* implicit */long long int) var_10))))));
        var_31 ^= ((/* implicit */long long int) (+(arr_33 [i_8])));
    }
    var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-7780239759951125528LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (34359738367LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)42648))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (2125257989431716040LL))) : ((+((-9223372036854775807LL - 1LL))))))));
}
