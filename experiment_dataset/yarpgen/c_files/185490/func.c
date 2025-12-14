/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185490
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [10ULL] [(_Bool)0] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (((unsigned long long int) arr_0 [i_0] [(_Bool)1])))) > (((5428816398237820729ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)8] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_6)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (short)-32169)) ? (7438261788337087784LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
                        arr_14 [i_0] [i_0] [(signed char)13] [(signed char)13] [i_0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(unsigned char)18] [16U] [i_3 - 2] [i_2]))))) : (var_6));
                        var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_9 [i_1 + 2] [i_0])) | (((/* implicit */int) (unsigned char)144)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 4; i_5 < 17; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */unsigned int) var_8))));
            var_17 = ((/* implicit */short) ((unsigned long long int) var_8));
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2212262675U))));
        }
        arr_19 [i_4] = ((/* implicit */unsigned int) (((+((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_4])))))) % (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_1 [(unsigned char)14]) : (((/* implicit */unsigned long long int) 2212262675U)))) < (((/* implicit */unsigned long long int) (~(0LL)))))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (short i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) arr_5 [i_7 - 2] [i_7 - 2] [i_7]);
                        arr_28 [i_6] [i_4] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_4] [i_7 - 1] [i_6])) : (2056194604))))));
                        var_20 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */_Bool) 2212262682U)) || (((/* implicit */_Bool) arr_7 [i_4] [i_6] [(unsigned char)3] [(unsigned char)3]))))))), (((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) != (((/* implicit */int) ((((/* implicit */long long int) -1379816281)) < (-3575117367287076197LL)))))))));
                    }
                } 
            } 
        } 
        var_21 *= ((/* implicit */unsigned int) (_Bool)1);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((var_9) ? (((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_9] [(unsigned char)14])) : (((/* implicit */int) arr_29 [i_9] [i_9])))))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                {
                    arr_35 [i_11] [i_9] [(signed char)16] [(signed char)10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) var_0)) ? (((2212262675U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [(unsigned short)2] [i_9]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                                arr_40 [i_13] [i_13] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned char) arr_34 [i_9] [i_9] [(short)14] [i_9])), (((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [6] [i_9])) == (((/* implicit */int) (short)-12542)))))))) ? ((~(((/* implicit */int) arr_36 [i_9] [(short)14] [(_Bool)1] [i_11])))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) (short)-12542))))) ? (((/* implicit */int) (!(arr_6 [i_11] [(_Bool)1])))) : (((/* implicit */int) (signed char)30))))));
                                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_9] [(_Bool)1] [(unsigned char)12] [i_12] [i_11])))) / ((~(arr_11 [i_9])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_1 [i_10]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-101)))))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((/* implicit */int) (!(arr_31 [i_11])))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (var_0)));
        /* LoopSeq 3 */
        for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) var_10);
            var_29 = (~(29U));
        }
        for (int i_15 = 3; i_15 < 16; i_15 += 2) /* same iter space */
        {
            arr_46 [i_9] = ((/* implicit */unsigned char) ((10802756742031305276ULL) != (((/* implicit */unsigned long long int) 2212262675U))));
            var_30 = ((/* implicit */int) min((var_30), ((-(((/* implicit */int) arr_7 [i_9] [i_9] [i_9] [i_15 + 2]))))));
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 16; i_16 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_18 = 0; i_18 < 18; i_18 += 2) 
                {
                    arr_54 [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_42 [i_9] [i_9])) / (((/* implicit */int) var_5)))) ^ (((/* implicit */int) var_2))));
                    arr_55 [i_9] [i_16] [i_16] = ((/* implicit */int) ((_Bool) (unsigned short)44560));
                    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */long long int) -1334069585)) : (-7819606285670668612LL)));
                }
                for (short i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        var_32 -= ((/* implicit */signed char) (~(-1631382590)));
                        var_33 = ((/* implicit */short) (-(((unsigned int) arr_32 [i_9] [i_9] [i_17]))));
                        arr_60 [i_19] [i_19] [i_17] [i_19] [(unsigned short)4] &= ((/* implicit */unsigned int) (~(((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_17] [i_17] [(_Bool)1]))) : (var_0)))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_26 [i_9] [i_21] [i_9] [i_16 - 2] [i_9]))));
                        arr_64 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [(unsigned char)15] = ((/* implicit */unsigned int) (((((((_Bool)1) ? (((/* implicit */int) arr_42 [i_9] [i_9])) : (((/* implicit */int) arr_62 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) + (2147483647))) << (((var_13) - (4271663415U)))));
                        arr_65 [i_16] [i_16] [i_9] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_9] [i_16] [i_17]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [i_19])) : (((/* implicit */int) (unsigned short)7416)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7826406214156228266LL)))))));
                        arr_66 [i_16] [i_16] [i_9] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_16] [i_16 - 2] [i_16 + 1] [i_9])) ? (((/* implicit */int) arr_36 [i_16] [i_16 + 2] [i_16 + 2] [i_9])) : (((/* implicit */int) arr_36 [i_16] [i_16 + 2] [i_16 - 1] [i_9]))));
                    }
                    arr_67 [i_9] [(signed char)9] [(signed char)9] [i_9] [(_Bool)1] [(signed char)9] = ((/* implicit */long long int) var_10);
                }
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 587160962U)) ? (((/* implicit */int) (short)-20001)) : (((/* implicit */int) arr_2 [i_9]))));
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) 587160966U)))));
                            var_37 = ((((/* implicit */int) arr_5 [i_16 + 1] [3LL] [i_16])) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_4)))));
                            arr_73 [13ULL] [i_16] [i_17] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_16 - 1] [i_16 + 2] [i_16 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_18 [(signed char)3])))))) : (var_0)));
                            var_38 += ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_17]))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_12))));
            }
            for (unsigned int i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                {
                    var_40 = (~(((/* implicit */int) arr_48 [i_9])));
                    /* LoopSeq 2 */
                    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        arr_81 [i_9] [i_26] [3ULL] [(unsigned short)5] [(unsigned short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16] [i_16 + 1])))));
                        var_41 = ((/* implicit */long long int) (((+(var_12))) >> (((/* implicit */int) ((2212262690U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_9] [i_9] [i_9] [i_9]))))))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 18; i_27 += 1) 
                    {
                        arr_85 [i_9] [i_16] [i_24] [i_16] [i_25] [i_25] [i_27] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9] [(_Bool)1] [i_9] [i_16 - 3])) && (((/* implicit */_Bool) arr_49 [15LL] [15LL] [i_24]))));
                        var_42 += ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 2082704621U))) ? (arr_12 [i_16 + 2] [(unsigned char)16]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_53 [i_9] [6LL] [6LL] [i_25] [(unsigned short)4])))));
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_16] [8ULL] [i_16 - 2] [i_16 - 3])) ? (587160975U) : (3707806333U))))));
                    }
                }
                var_44 &= ((/* implicit */long long int) ((unsigned char) var_12));
            }
            var_45 ^= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) ? (2212262693U) : (587160962U))));
        }
    }
    var_46 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-109)))) : (((((/* implicit */_Bool) -1408041411)) ? (3449807363746802961LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))))))));
    var_47 = ((/* implicit */unsigned char) (((((_Bool)1) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) >= (((/* implicit */unsigned long long int) var_6))));
    var_48 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned long long int) var_13)) : (8555606690237563146ULL)))) ? (((587160965U) << (((2212262694U) - (2212262691U))))) : (19479676U));
}
