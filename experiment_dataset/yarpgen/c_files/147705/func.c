/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147705
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
    var_20 = ((/* implicit */short) var_13);
    var_21 = ((/* implicit */unsigned short) ((-4712069309449370983LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12300)))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            arr_5 [4U] [i_1] |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) -835951945)) && (((/* implicit */_Bool) (unsigned char)141)))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-15))));
                        arr_14 [i_1] [i_0] [i_2] [(unsigned short)9] = ((/* implicit */unsigned char) (unsigned short)47976);
                        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)0] [i_3 - 2]))) & (var_18)));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_14)) >> (((arr_7 [i_0 - 4] [i_0 + 1] [i_5 - 1] [i_5]) - (505878668)))));
                arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])) / (((/* implicit */int) var_5)))) : (((/* implicit */int) (short)-6919))));
                arr_22 [i_5] [i_0] [i_0] [(unsigned short)5] = ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_0 - 1] [i_5 - 1] [(short)2] [i_0 - 1]))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_24 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) arr_27 [6U] [i_5 - 1] [i_5 - 1] [i_4] [6U]))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_13))));
                            arr_29 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))) < (((/* implicit */int) (unsigned short)18574))));
                            var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (((long long int) var_6))));
                            arr_30 [i_4] [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -287723649532150777LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))) : (var_19)))) ? ((~(((/* implicit */int) (unsigned short)50664)))) : ((~(((/* implicit */int) (unsigned char)124))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_28 [i_0])))) || (((((/* implicit */_Bool) (unsigned char)141)) && (((/* implicit */_Bool) (short)-29592))))))))))));
                var_28 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                arr_35 [i_8] |= ((/* implicit */int) ((((((/* implicit */long long int) min((arr_9 [i_0] [i_4] [i_8]), (((/* implicit */int) var_2))))) < (min((((/* implicit */long long int) 596987382U)), (-1029165313744441779LL))))) ? (((/* implicit */unsigned int) 835951925)) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18726)) || (((/* implicit */_Bool) -4712069309449370983LL))))), (1947847302U)))));
                arr_36 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((arr_9 [i_0 - 3] [i_4] [i_8]) > (((/* implicit */int) (short)-1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_19), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0 + 1])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_0] [i_4] [i_4] [i_8]))))))) : (min((((/* implicit */long long int) var_0)), (arr_4 [i_4])))));
                /* LoopSeq 3 */
                for (short i_9 = 1; i_9 < 9; i_9 += 2) 
                {
                    arr_39 [i_0 + 2] [i_4] [i_0] [(unsigned char)2] [i_9] = ((/* implicit */int) ((short) ((1947847302U) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                    var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((_Bool) var_6)) && (((/* implicit */_Bool) arr_18 [(unsigned short)1] [i_0 + 1] [(unsigned short)1] [(unsigned short)2])))))) >= ((+(((((/* implicit */_Bool) 1947847302U)) ? (-1764146383097781262LL) : (arr_34 [i_9 + 1] [i_0] [i_9])))))));
                    var_30 = ((/* implicit */_Bool) (~(((((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-2587)))) / (((/* implicit */int) arr_11 [i_0] [i_9] [i_9] [i_9]))))));
                }
                /* vectorizable */
                for (signed char i_10 = 4; i_10 < 10; i_10 += 2) 
                {
                    arr_43 [i_0] [i_0] [i_4] [i_8] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_37 [2LL] [i_8] [i_4] [i_0]))));
                    var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15707)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned int i_11 = 3; i_11 < 10; i_11 += 1) 
                {
                    arr_46 [i_0] [i_0] [i_8] [i_8] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)7]))) - (4466948056391162697LL))))), (min((((1796834044U) >> (((var_0) - (131561952))))), (((/* implicit */unsigned int) min((var_9), (var_9))))))));
                    var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) 3856204580280650845LL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (unsigned short)28647))))));
                }
            }
            var_33 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_25 [i_0] [i_0 - 4] [i_0 + 1] [i_0])), (min((4466948056391162697LL), (-4712069309449371000LL)))));
        }
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            var_34 -= 4483014463476341422LL;
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [1U] [(short)2] [i_0] [i_0] [i_12 + 1] [i_12])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)4)) || (((/* implicit */_Bool) 835951916))))) : (((/* implicit */int) ((short) (-(((/* implicit */int) (short)-12212))))))));
            var_36 = ((/* implicit */unsigned int) ((arr_9 [i_0 - 2] [i_0 - 2] [i_12]) - (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (_Bool)1))))));
            arr_51 [i_0] = ((/* implicit */unsigned char) 3529434267U);
        }
        /* LoopSeq 3 */
        for (long long int i_13 = 2; i_13 < 9; i_13 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) max((var_37), ((unsigned char)166)));
            arr_56 [(unsigned char)4] [i_13] |= min((((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-28508)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) max(((short)14969), (((/* implicit */short) (unsigned char)141)))))))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(unsigned char)10] [i_0] [i_0])) | (((/* implicit */int) (short)128))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (var_19) : (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_13] [i_13])))))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (2812254360U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_41 [i_0 + 2] [i_0 - 2])))))))) ? ((-(((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_13 - 2] [i_0]))))) > (min((arr_45 [i_13] [i_0] [i_0] [5LL]), (((/* implicit */int) arr_49 [i_0] [i_13] [i_0])))))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (short)2572)) : (((/* implicit */int) (short)-14969)))))));
            arr_60 [i_0] [i_0] [i_14] = ((/* implicit */unsigned char) ((-151166440) >= (((/* implicit */int) (short)-14965))));
            arr_61 [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_14]), (((/* implicit */long long int) arr_47 [i_0] [i_0]))))) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_58 [i_0]))))))) << (((var_15) - (1241247794U))));
        }
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            arr_65 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_58 [i_0])) && (((/* implicit */_Bool) var_19)))) || ((!(((/* implicit */_Bool) arr_55 [i_15])))))))) / (min((((/* implicit */long long int) (unsigned short)65515)), (min((((/* implicit */long long int) arr_23 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])), (-4712069309449370983LL)))))));
            var_40 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(arr_34 [(_Bool)0] [(unsigned short)10] [(signed char)6])))) ? (min((arr_17 [(_Bool)1] [i_15]), (arr_40 [i_0] [i_15] [i_15] [(short)7] [i_15] [i_15]))) : (-8489102398048672411LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2355652164844217573LL)) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_15])) : (((/* implicit */int) (unsigned char)252))))))))));
            arr_66 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_6 [i_0 - 3] [(unsigned char)7] [i_15] [i_15])) + (((/* implicit */int) arr_6 [i_0 - 3] [i_15] [i_15] [i_15])))));
            var_41 = ((((/* implicit */_Bool) ((((1011812064168438248LL) + (var_18))) - (min((-4712069309449370979LL), (((/* implicit */long long int) var_2))))))) ? (((/* implicit */long long int) max((1052542288), (((((/* implicit */int) (unsigned short)59545)) & (((/* implicit */int) (_Bool)1))))))) : (((long long int) min(((short)7978), (arr_49 [i_0] [i_0] [i_0])))));
            arr_67 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)31)), ((short)20338))))) / (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)54555))))) + (arr_58 [i_0])))));
        }
        arr_68 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))) >= (143847325U)))) <= (((/* implicit */int) ((((/* implicit */int) ((arr_58 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)41)))))) > (((/* implicit */int) ((((/* implicit */int) arr_32 [i_0] [i_0])) < (((/* implicit */int) var_6))))))))));
    }
    for (short i_16 = 3; i_16 < 19; i_16 += 1) 
    {
        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_69 [i_16 - 2]))))) ? (min((((/* implicit */int) (unsigned short)59539)), (1784941790))) : (-2058472789))))));
        var_43 ^= ((/* implicit */unsigned short) ((var_0) & (((/* implicit */int) ((((/* implicit */_Bool) arr_69 [i_16 - 1])) || (((/* implicit */_Bool) arr_69 [i_16 - 1])))))));
        arr_71 [i_16] = max(((-(((var_8) / (((/* implicit */int) var_17)))))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((arr_69 [i_16]), ((unsigned short)6001)))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_44 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_10)))));
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            arr_77 [i_17] [i_17] [4] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)59566)) >= (((/* implicit */int) (unsigned char)219))))))))));
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), ((unsigned short)59559)))) ? (((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [0U] [i_18] [(short)2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)59576)))))))) ? (((((/* implicit */_Bool) ((arr_7 [i_17] [i_17] [i_17] [i_17]) - (((/* implicit */int) var_2))))) ? (arr_28 [i_18]) : (arr_28 [i_17]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_17] [i_18])) + (((((/* implicit */_Bool) arr_27 [(unsigned short)8] [(short)10] [i_18] [(_Bool)1] [6LL])) ? (-1) : (((/* implicit */int) var_12)))))))));
            /* LoopNest 3 */
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_85 [i_21] [i_21] [i_19] [i_21] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) -8489102398048672411LL)) ? (((/* implicit */int) (unsigned short)59577)) : (((/* implicit */int) (unsigned short)59569))));
                            var_46 = ((/* implicit */short) (+(((/* implicit */int) (((~(((/* implicit */int) (unsigned char)225)))) >= (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) arr_47 [i_21] [i_20]))))))))));
                        }
                    } 
                } 
            } 
            arr_86 [i_18] [i_17] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_80 [i_17] [i_18])))))));
            var_47 = ((/* implicit */short) arr_15 [i_17] [i_18]);
        }
        for (int i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            var_48 = ((/* implicit */int) min((min((((/* implicit */unsigned int) arr_42 [(signed char)2] [i_22] [i_22])), (((((/* implicit */_Bool) -8489102398048672417LL)) ? (arr_23 [i_17] [i_17] [i_17] [i_22] [i_22] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) arr_79 [i_17] [i_22] [i_22] [i_22]))));
            arr_90 [i_22] [i_22] [i_22] = min((((((/* implicit */_Bool) (unsigned short)5959)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) != (var_8)))) : (((/* implicit */int) (unsigned char)239)))), (((/* implicit */int) ((unsigned short) min((((/* implicit */int) (unsigned short)53201)), (arr_89 [i_22]))))));
            var_49 = ((/* implicit */short) (unsigned short)65515);
            arr_91 [i_17] [i_22] [i_22] = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) ((((/* implicit */int) arr_75 [(unsigned short)2])) != (arr_33 [i_17] [i_17] [i_22]))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)23853)) : (((/* implicit */int) (unsigned short)65490))))));
            /* LoopNest 2 */
            for (unsigned char i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_50 = ((/* implicit */unsigned char) (unsigned short)30717);
                        arr_97 [i_23] [i_22] [i_22] = ((/* implicit */long long int) max((min((-1784941790), (((((/* implicit */_Bool) (unsigned char)198)) ? (2058472791) : (-2058472789))))), (((((((/* implicit */_Bool) arr_88 [i_22] [i_22])) ? (((/* implicit */int) (short)-13218)) : (((/* implicit */int) arr_15 [i_23] [i_23])))) / (((/* implicit */int) arr_6 [i_22] [i_24 - 1] [i_24 - 1] [i_24 - 1]))))));
                        arr_98 [i_22] [i_23] [i_23] [i_22] [9] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_22])) ? (((/* implicit */long long int) arr_87 [i_24 - 1] [i_22])) : (arr_34 [i_17] [i_22] [i_23])))) ? (min((arr_4 [i_17]), (((/* implicit */long long int) arr_87 [i_17] [i_22])))) : (((((/* implicit */_Bool) (short)-1)) ? (arr_34 [i_24 - 1] [i_22] [i_17]) : (arr_34 [i_17] [i_22] [i_23])))));
                        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (~(min((((/* implicit */long long int) arr_73 [i_24 - 1])), (((((/* implicit */long long int) 3223586228U)) - (2355652164844217590LL))))))))));
                    }
                } 
            } 
        }
    }
}
