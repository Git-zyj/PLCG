/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171836
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2402578737U)) ? (((/* implicit */int) (short)15553)) : (((/* implicit */int) (short)28))));
        var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) ((((/* implicit */_Bool) 2402578737U)) && (((/* implicit */_Bool) (signed char)121)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        var_15 -= ((17U) ^ (((((/* implicit */_Bool) 3017886643U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (arr_4 [i_0] [i_0] [i_0]))));
                        arr_12 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)25851)) ? (4127474149U) : (20910058U))) < (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */short) var_10)), (arr_3 [i_2] [i_2])))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_16 = (-(3U));
                            var_17 = var_9;
                        }
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_18 = min((var_8), (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) & (var_8))), (((/* implicit */unsigned int) max((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_7))))))));
                        var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((~(var_0))) << (((((/* implicit */int) max(((short)25862), (((/* implicit */short) (signed char)41))))) - (25857))))))));
                        arr_17 [i_0] [i_2] [i_2] = (-(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_6 [i_2]))), (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (short)25855)))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */short) var_10);
                        arr_22 [i_2] = ((/* implicit */signed char) min(((-(max((3232079856U), (1050225797U))))), (min((max((var_8), (var_4))), (2017418256U)))));
                        var_21 -= ((3232079831U) + (max((((/* implicit */unsigned int) (short)19178)), (1146608414U))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */short) 4006269470U);
                        var_23 -= ((((/* implicit */_Bool) max(((-(2064805586U))), (((/* implicit */unsigned int) (signed char)-83))))) ? (((unsigned int) ((short) var_3))) : (((unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1050225801U))))), (((((/* implicit */_Bool) 3722117353U)) ? (4294967290U) : (1062887429U)))))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (((arr_6 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 2; i_9 < 22; i_9 += 4) 
                        {
                            arr_34 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)2922)) != (((/* implicit */int) (short)25854)))))) & (((arr_23 [i_0] [i_0] [i_0] [i_0]) / (13U)))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] |= max((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30877))) : (var_5))) / (((unsigned int) var_0)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1]))))) ? (max((2277549028U), (arr_8 [i_1] [i_1] [i_1] [i_1]))) : (var_2))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned int) (signed char)97)), (1164038598U)))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) max((min((4064748793U), (((/* implicit */unsigned int) (signed char)-72)))), ((-(max((((/* implicit */unsigned int) (short)12382)), (3769502986U)))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
                            var_28 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_5)) ? (var_9) : (13U))), (min((1050225797U), (1050225809U))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)29113)))))));
                        }
                        for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            arr_48 [i_2] [i_2] [i_2] = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-5933)), (97861565U)))) ? (4294967285U) : (8U))));
                            var_29 -= ((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (2277549036U)))) >> (((((((/* implicit */_Bool) max((arr_38 [i_0] [i_0] [i_0] [i_0]), (var_8)))) ? (max((((/* implicit */unsigned int) (short)-29953)), (2971737705U))) : (((var_9) * (arr_7 [i_0]))))) - (4294937328U))));
                            var_30 = max((((/* implicit */unsigned int) ((1574908852U) < (2971737705U)))), (max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)12))))), (1012819664U))));
                        }
                        for (unsigned int i_14 = 1; i_14 < 21; i_14 += 4) 
                        {
                            arr_51 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((short) 1574908841U));
                            var_31 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_11)))));
                        }
                        arr_52 [i_2] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_20 [i_0] [i_2 - 1] [i_0] [i_1 + 1]))))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 2; i_15 < 22; i_15 += 4) 
                    {
                        arr_55 [i_0] [i_0] [i_2] [i_0] = var_5;
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 2])) & (((/* implicit */int) arr_32 [i_1] [i_1 - 2] [i_2] [i_2] [i_2] [i_2]))));
                        var_33 = (-((-(arr_16 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned int i_16 = 3; i_16 < 21; i_16 += 2) 
                    {
                        arr_59 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32240))) + (var_0)))) ? (min((var_9), (2277549050U))) : (((((/* implicit */_Bool) var_11)) ? (arr_19 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((892178314U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
                        {
                            var_34 = max((1546493251U), (((5U) * (min((2748474044U), (((/* implicit */unsigned int) var_6)))))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-16448)) / (((/* implicit */int) (short)-23415))));
                            var_36 = (-(((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-25050))))) : ((-(arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) /* same iter space */
                        {
                            arr_65 [i_0] [i_2] [i_2] [i_0] [i_0] = (-(max((4294967294U), (min((3722117358U), (var_0))))));
                            var_37 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_66 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned int) ((4294967295U) == (((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_39 [i_2] [i_2]) : (3340570617U))))))));
                            var_38 = ((arr_58 [i_0] [i_0] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_46 [i_1] [i_1] [i_1] [i_1 - 3] [i_2 - 1] [i_1 - 3] [i_1 - 3])))));
                        }
                    }
                    arr_67 [i_2] [i_2] [i_0] = ((2748474036U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))));
                    arr_68 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */short) min((2748474049U), (((max((var_1), (3722117360U))) << (((((((/* implicit */_Bool) arr_29 [i_2])) ? (var_1) : (arr_40 [i_0] [i_0] [i_0] [i_0]))) - (2969605321U)))))));
                }
            } 
        } 
        var_39 = ((/* implicit */signed char) 4294967295U);
    }
    var_40 = ((unsigned int) 0U);
}
