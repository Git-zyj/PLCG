/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168485
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
    var_10 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2506951254U)) ? (var_9) : (max((4248820391U), (1073741824U)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [2U] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3208108649U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) : (4248820391U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (4294967275U))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)102)), (4294967268U)));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)222))));
                            var_13 = 22U;
                            var_14 = max((max(((~(arr_6 [i_0] [i_3] [22U]))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_2])))), (((/* implicit */unsigned int) (unsigned char)3)));
                            arr_15 [i_0] [i_0] [i_0] [(unsigned char)11] [i_0] [14U] = max((4248820391U), (((/* implicit */unsigned int) (unsigned char)238)));
                            var_15 = max((min((max((2155500126U), (2391161373U))), (2215215545U))), (arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1]));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) max((4294967292U), (0U)));
            }
        }
        for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_22 [i_0] [i_0] [i_5] [i_0] = (+(4248820391U));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 131071U)) ? (2147483640U) : (1147025735U)));
                arr_23 [i_0] [i_0] = (~(1147025729U));
            }
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
            {
                arr_26 [i_0] [i_0] [i_0] = (+(arr_0 [i_7]));
                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_0] [i_5] [i_0] [i_5]))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(arr_2 [i_5 - 2] [i_5 + 1]))))));
                var_20 = ((/* implicit */unsigned char) (~(arr_6 [i_5 + 1] [i_5] [i_5 - 1])));
                var_21 = (-(arr_27 [i_5] [13U] [(unsigned char)9]));
            }
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                arr_34 [i_0] [i_0] [i_0] [12U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 1] [19U] [i_5] [i_5 - 2] [i_5] [19U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) : (448U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5 + 1] [(unsigned char)14] [i_5 + 1] [i_5 - 2] [16U] [i_5 - 2]))))) : (((((/* implicit */_Bool) arr_12 [i_5 + 1] [(unsigned char)16] [i_5 + 1] [i_5 - 2] [i_9] [i_5 + 1])) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 1]))))));
                arr_35 [i_0] [i_9] [i_5] [i_0] = (-(((((/* implicit */_Bool) arr_33 [i_5])) ? (max((arr_5 [(unsigned char)14] [(unsigned char)14] [i_9]), (arr_0 [i_5]))) : (1987502095U))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    arr_38 [i_0] [(unsigned char)5] [i_9] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_1 [i_10 - 1])), (arr_30 [i_10 - 1] [i_5 + 1] [i_0]))) >> ((((+(((((/* implicit */_Bool) 46146921U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (439042923U))))) - (122U)))));
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)252)), (max((max((4294967288U), (((/* implicit */unsigned int) (unsigned char)224)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))))));
                    var_23 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (arr_16 [i_0] [i_9] [i_10]))))))), ((+(arr_30 [i_10] [i_10 - 1] [i_5 - 1])))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_29 [0U] [0U] [0U] [0U]))))))) : (((/* implicit */int) (unsigned char)161)))))));
                }
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    arr_41 [i_0] [i_0] [20U] [i_9] [(unsigned char)7] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)18)) | (((/* implicit */int) (unsigned char)146))))));
                    var_25 = ((((/* implicit */_Bool) (unsigned char)21)) ? (max((1643613275U), (3147941566U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) 120901156U)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3460028392U)) ? (((/* implicit */int) arr_33 [i_0])) : (((/* implicit */int) (unsigned char)161))))) * ((+(3157165411U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)247), ((unsigned char)252)))) ? (((/* implicit */int) max((arr_36 [i_0] [i_0] [i_0] [6U]), ((unsigned char)129)))) : (((/* implicit */int) arr_33 [i_0])))))))));
                }
            }
            arr_42 [i_0] [i_5] = ((((/* implicit */_Bool) 2047U)) ? ((+(4294965249U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))));
        }
        for (unsigned int i_12 = 2; i_12 < 22; i_12 += 2) /* same iter space */
        {
            arr_47 [(unsigned char)5] [i_12] [i_12] = ((/* implicit */unsigned char) arr_0 [i_0]);
            /* LoopSeq 2 */
            for (unsigned char i_13 = 2; i_13 < 19; i_13 += 1) 
            {
                arr_50 [i_12] = ((/* implicit */unsigned char) max((min((4294965258U), (((/* implicit */unsigned int) (unsigned char)31)))), (max((max((arr_7 [i_12]), (2651354042U))), (((/* implicit */unsigned int) (unsigned char)241))))));
                arr_51 [i_12] [i_12] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (arr_24 [i_0]))), (((/* implicit */unsigned int) min(((unsigned char)224), ((unsigned char)224)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (arr_17 [i_12] [i_12])))));
            }
            for (unsigned int i_14 = 1; i_14 < 21; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_15 = 1; i_15 < 22; i_15 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)192))));
                    var_28 = (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 20U))))), (min((1815871518U), (1124830767U))))));
                    var_29 = max((max(((+(255U))), (3880210878U))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((2027U) > (1452925091U))))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_16 = 4; i_16 < 20; i_16 += 2) 
                {
                    var_30 = arr_40 [i_16 + 1] [i_14] [i_12 - 2];
                    var_31 += (-(4294967295U));
                }
            }
        }
        arr_60 [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_39 [i_0] [10U] [i_0] [i_0])))), ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) > (939524096U))))))));
    }
    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */_Bool) (unsigned char)155)) ? (4294967295U) : (4294967295U)))));
        var_33 -= min((2216331832U), (2181931704U));
    }
    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
    {
        arr_65 [i_18] [i_18] = (-(((min((((/* implicit */unsigned int) arr_54 [i_18])), (18U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_18] [i_18] [i_18] [i_18]))))));
        /* LoopNest 3 */
        for (unsigned int i_19 = 1; i_19 < 11; i_19 += 2) 
        {
            for (unsigned int i_20 = 1; i_20 < 11; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) arr_30 [i_20] [(unsigned char)8] [i_18]);
                        arr_74 [i_19] [i_21] = ((/* implicit */unsigned char) (~(max((max((((/* implicit */unsigned int) (unsigned char)242)), (arr_13 [i_18] [(unsigned char)8] [20U] [20U] [i_18] [i_18]))), ((-(4294967295U)))))));
                        arr_75 [i_21] [i_19] [i_20] [i_19] [i_18] = max((arr_73 [i_19] [i_20 + 1] [i_20 + 1] [i_19 + 1] [11U] [i_19]), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)129)), (14U)))) ? (max((arr_68 [(unsigned char)10]), (1884294059U))) : (arr_61 [i_18]))));
                    }
                } 
            } 
        } 
        var_35 += ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1169120505U)) ? (1U) : (32640U))), (4294967282U)))) ? (4294967286U) : (((((/* implicit */_Bool) (unsigned char)116)) ? ((-(255U))) : (max((4055136226U), (4294967286U))))));
    }
    var_36 = ((((/* implicit */_Bool) (-(var_7)))) ? (min((max((3180229238U), (369226985U))), (max((726853138U), (13U))))) : (min(((+(2311773583U))), (min((((/* implicit */unsigned int) (unsigned char)0)), (var_1))))));
    var_37 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) var_2))))) ? (max((4194048U), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)17)) == (((/* implicit */int) (unsigned char)183)))))))), (min((max((var_9), (((/* implicit */unsigned int) var_4)))), (((((/* implicit */_Bool) var_0)) ? (var_7) : (3568114174U)))))));
    /* LoopSeq 1 */
    for (unsigned char i_22 = 1; i_22 < 8; i_22 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 11; i_23 += 1) 
        {
            for (unsigned int i_24 = 3; i_24 < 9; i_24 += 1) 
            {
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (arr_63 [i_24])));
                    arr_83 [i_22] [i_24] [i_22] [i_24 + 1] = ((/* implicit */unsigned char) max((3148750095U), (((/* implicit */unsigned int) (unsigned char)170))));
                    arr_84 [i_22] [i_24] = arr_48 [i_22] [i_22] [i_22] [i_22 + 3];
                }
            } 
        } 
        arr_85 [3U] = 4055136226U;
        arr_86 [i_22] [i_22] = ((/* implicit */unsigned char) (+(arr_37 [i_22] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11])));
        var_39 = ((/* implicit */unsigned int) min((var_39), (2311773601U)));
    }
}
