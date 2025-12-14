/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175330
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_0))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_12))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (var_0)));
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0 - 1] [i_0]) || (arr_2 [i_0 - 1] [i_0 + 1]))))) : (min((1281338279U), (((/* implicit */unsigned int) (unsigned char)135)))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_1])) ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (arr_3 [i_0] [i_0 - 1] [i_0])))))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_8 [i_2] = var_7;
            /* LoopSeq 3 */
            for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((_Bool) 3436906129U)))))) == (arr_6 [i_0] [i_3])));
                var_19 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3436906129U))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_7)))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [i_2] [i_4]))))), (((/* implicit */int) ((_Bool) arr_7 [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) * (max((var_7), (((/* implicit */unsigned int) arr_10 [i_6] [i_6] [i_6] [i_6])))))));
                            arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) min((var_2), (((/* implicit */unsigned int) var_1)))))) | ((~(((/* implicit */int) var_10))))));
                            var_22 = (((!(((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) var_1)) - (113)))))))) ? (((unsigned int) ((0U) << (((var_8) - (2197359310U)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((arr_14 [i_0] [i_5] [i_4] [i_5] [2U] [i_4]), (arr_17 [i_4])))) < (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                var_23 = max((3444040976U), (min((1181658206U), (max((4294967284U), (2U))))));
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((4294967279U), (3436906144U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_7 - 1] [i_7])) ? (arr_13 [i_2] [i_7] [i_0 + 1] [i_0 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))) <= (var_2)));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        var_24 = ((unsigned int) ((arr_22 [i_9] [i_9] [i_9 - 1] [i_9]) != (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (arr_7 [i_8])))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2] [i_2])) * (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_30 [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((var_1), (var_5))), (((/* implicit */unsigned char) max((var_12), (var_4)))))))) / (arr_24 [i_0] [i_2] [i_0])));
                        var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)75)) || (((/* implicit */_Bool) 4158367855U))))), (((((var_7) >> (((((/* implicit */int) var_10)) - (58))))) >> (((arr_7 [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    }
                    arr_31 [i_0] [i_8] [i_7] [i_8 + 1] = min((((((((/* implicit */_Bool) 858061151U)) || (var_12))) && (((_Bool) var_12)))), (((_Bool) ((unsigned int) arr_6 [i_0] [i_0]))));
                }
                for (unsigned char i_11 = 2; i_11 < 19; i_11 += 3) /* same iter space */
                {
                    arr_35 [i_11] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1]))) | (min((arr_6 [i_2] [i_11]), (((/* implicit */unsigned int) var_3)))))) ^ ((((~(var_2))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 858061150U))))))));
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_0] [i_0 + 1] [i_2])))) - (((((/* implicit */_Bool) var_2)) ? (arr_32 [i_2]) : (var_8)))))) ? (var_8) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1034385457U)) && (((/* implicit */_Bool) 35U))))), (3223515955U))));
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_39 [i_12] [i_2] [(_Bool)1] [i_7] [2U] [i_11] [2U] = ((/* implicit */_Bool) var_0);
                        arr_40 [11U] [i_12] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 3436906165U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_13))))) : (((arr_32 [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2647059600U) << (((/* implicit */int) arr_25 [i_0] [i_2] [(unsigned char)9]))))) && (((/* implicit */_Bool) arr_34 [(_Bool)1] [i_7 + 1] [i_11] [i_12])))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_7] [i_7] [i_2] [i_7])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7]))) * (arr_32 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9))))))) ? (max((min((var_7), (var_9))), (((/* implicit */unsigned int) min((var_5), (arr_12 [i_7])))))) : (min((var_9), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))))))));
                        arr_43 [i_11] [i_13] [i_11] = ((/* implicit */_Bool) max((max((((var_8) * (var_8))), (((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned char) var_11))))))), (((/* implicit */unsigned int) var_13))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)0)), (1071451346U)))) || (((/* implicit */_Bool) min((var_2), (arr_24 [i_0 + 1] [i_0 + 1] [i_7]))))))), (min((((/* implicit */unsigned int) ((unsigned char) 2860975637U))), (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                    }
                    for (unsigned int i_14 = 4; i_14 < 16; i_14 += 2) 
                    {
                        arr_47 [i_11 + 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2647059591U)) ? (2230760105U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))))), (((/* implicit */unsigned int) var_12))));
                        arr_48 [i_0 - 1] [i_2] [i_2] [i_11 + 1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [13U] [13U] [13U] [13U])) && (((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) var_12)), (arr_28 [i_14] [i_14 - 3] [i_11 - 2] [i_11] [i_7] [i_2] [i_14])))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        arr_52 [i_0] [i_2] [i_2] [i_2] = (~(4294967276U));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((_Bool) arr_41 [i_0] [i_2] [i_0] [(_Bool)1] [i_15])))));
                        var_31 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) var_12))), (((((/* implicit */int) arr_11 [i_0] [i_0] [i_2])) % (((/* implicit */int) arr_11 [i_7 + 1] [i_7 - 1] [i_7 - 1]))))));
                    }
                }
                arr_53 [i_0 - 1] [i_0 - 1] [14U] = (((+(3436906145U))) << (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_4))))));
            }
        }
        arr_54 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) ((unsigned int) var_1)))), (max((((/* implicit */unsigned int) arr_17 [i_0 + 1])), (var_7)))));
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    for (unsigned char i_19 = 1; i_19 < 19; i_19 += 1) 
                    {
                        {
                            arr_67 [i_0] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) | (((/* implicit */int) arr_55 [i_19]))));
                            arr_68 [i_16] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_13)) | (((/* implicit */int) max((arr_45 [i_0] [i_16] [i_16] [(_Bool)1] [i_18] [i_19] [18U]), (var_4))))))));
                            arr_69 [i_16] [i_16] = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
            } 
            arr_70 [i_0] [i_0] [(_Bool)0] |= ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (_Bool)0)))))) > (2U))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_10 [i_0] [7U] [i_16] [18U])) + (((/* implicit */int) arr_66 [i_0] [i_0] [i_0 - 1] [i_16] [i_16] [i_16])))), (((/* implicit */int) max(((unsigned char)214), ((unsigned char)132))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_62 [4U] [4U] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (min((((/* implicit */unsigned int) var_4)), (var_0))))));
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_32 = ((/* implicit */_Bool) var_6);
                arr_73 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_44 [i_0] [i_16] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_13))))) && (((var_4) && (((/* implicit */_Bool) arr_38 [i_16] [i_20] [i_20] [i_20]))))))));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_11))));
            }
        }
    }
    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_22 = 0; i_22 < 16; i_22 += 2) 
        {
            for (unsigned int i_23 = 4; i_23 < 12; i_23 += 1) 
            {
                for (unsigned char i_24 = 1; i_24 < 15; i_24 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_42 [i_24 + 1] [i_23] [i_23] [i_21])) ? (arr_37 [i_21] [i_22] [i_23 - 1] [i_23 - 1] [i_24]) : (arr_37 [i_21] [i_21] [i_22] [i_23 + 2] [i_21]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                        var_35 |= ((unsigned char) ((((3223515941U) << (((var_9) - (1816755765U))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (arr_12 [12U])))))));
                        var_36 = ((/* implicit */unsigned char) 858061151U);
                    }
                } 
            } 
        } 
        arr_85 [i_21] = ((/* implicit */_Bool) ((unsigned char) max((((unsigned int) arr_5 [i_21] [i_21] [i_21])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_21] [i_21] [(_Bool)1]))))))));
    }
    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 3) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned int) max((var_37), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) : (((var_12) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), (var_2)))));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (1848821271U)))) ? (((var_9) >> (((/* implicit */int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned char)120)))))))) && (((_Bool) arr_60 [i_25]))));
        var_39 = ((var_12) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_19 [i_25] [i_25] [0U])))));
    }
    var_40 = ((/* implicit */unsigned char) ((858061152U) ^ (858061150U)));
}
