/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172628
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
    var_18 += (unsigned short)37290;
    var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483648U)) || (((/* implicit */_Bool) var_16))))), (min((var_10), (((/* implicit */unsigned int) (unsigned short)35997)))))), (((/* implicit */unsigned int) (unsigned short)4095))));
    var_20 = var_1;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((/* implicit */_Bool) 2147483622U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1844516605U));
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] = min((((/* implicit */unsigned int) (unsigned short)26)), (((1U) | (arr_1 [i_2 + 1]))));
                    }
                    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((0U), (1844516608U)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)65525))))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_2 + 1] [i_2 - 2]))) % (1013288081U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) ((unsigned short) var_12)))))) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) 656082930U)))) ? (((((/* implicit */_Bool) (unsigned short)38368)) ? (arr_6 [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2678090387U))))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44022)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_12 [i_5] [i_4] [i_1])))) ? (min((2450450691U), (arr_1 [i_1 + 1]))) : (((((/* implicit */_Bool) 4294967290U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47366)))))));
                        var_24 -= 2147483677U;
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 21U)) ? (arr_13 [i_5] [i_4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (unsigned short)65529)) : ((((-(((/* implicit */int) arr_3 [i_0] [i_0])))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) (unsigned short)18087)) : (((/* implicit */int) (unsigned short)1))))) ? (min((3106945968U), (2147483648U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2450450668U))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) >> (((((arr_12 [i_0] [i_1] [i_4]) >> (((/* implicit */int) (unsigned short)0)))) - (582597328U)))))) && (((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_0] [i_0])))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            arr_21 [i_4] &= arr_15 [i_7] [i_6] [i_6] [i_4] [i_1] [i_0];
                            arr_22 [i_6] [i_4] [i_1] [i_0] = arr_5 [i_0] [i_4] [i_6] [i_7];
                        }
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                        {
                            arr_25 [i_0] = ((/* implicit */unsigned short) ((unsigned int) var_7));
                            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33624)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63688))) : (min((4294967283U), (((/* implicit */unsigned int) (unsigned short)21587))))));
                        }
                        var_29 = ((unsigned short) var_1);
                        arr_26 [i_0] [i_1] [i_4] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)18)) * (((/* implicit */int) (unsigned short)8165))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_30 -= ((/* implicit */unsigned short) arr_12 [i_0] [i_4] [i_9]);
                        arr_29 [i_0] [i_4] [i_4] [i_0] [i_0] [i_4] = ((((/* implicit */_Bool) ((((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) ? (arr_13 [i_0] [i_1] [i_4]) : (min((((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_4] [i_9])), (var_5)))))) ? (min((min((((/* implicit */unsigned int) (unsigned short)65527)), (1772456605U))), (((((/* implicit */_Bool) (unsigned short)59351)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (268435456U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2450450660U)))))));
                    }
                    arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_23 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4] [i_0]), ((unsigned short)0)))) ? (((unsigned int) (unsigned short)13854)) : (((((/* implicit */_Bool) 4161346582U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_4]))) : (var_15))))) < (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [i_0])))) & (arr_7 [i_0] [i_0])))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1698125297U)) ? (2450450690U) : (arr_1 [i_0]))))) < (((/* implicit */int) ((((unsigned int) (unsigned short)0)) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                }
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    var_32 = arr_19 [i_10];
                    arr_34 [i_0] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)13657)), (3017508202U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned short)65514))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7326))) : (((min((((/* implicit */unsigned int) (unsigned short)27259)), (1844516626U))) >> (((/* implicit */int) (unsigned short)18))))));
                    arr_35 [i_0] [i_10] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65514)) || (((/* implicit */_Bool) (unsigned short)28))))), (((unsigned short) var_17))))) || ((!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            arr_42 [i_0] [i_0] [i_11] [i_12] = ((unsigned int) ((unsigned short) arr_32 [i_12] [i_1]));
                            arr_43 [i_1] = ((/* implicit */unsigned short) ((arr_18 [i_1 - 1] [i_1] [i_1 - 1]) >= (((arr_18 [i_1 + 1] [i_1] [i_1 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12023)))))));
                        }
                    } 
                } 
                var_33 = (unsigned short)54345;
            }
        } 
    } 
}
