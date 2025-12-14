/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152349
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
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 &= (short)-28708;
    var_17 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    arr_13 [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1]))));
                    arr_14 [i_0] [4U] [i_2 + 1] [i_3 - 2] = ((/* implicit */long long int) (~(1211192900U)));
                    var_18 = ((/* implicit */short) var_0);
                    var_19 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 5138487601787900544LL)))))));
                }
                for (unsigned short i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 3; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        arr_21 [i_5] [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                        var_20 = ((/* implicit */_Bool) 1805351452U);
                        arr_22 [16] &= var_11;
                    }
                    for (unsigned int i_6 = 3; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        var_21 = var_5;
                        var_22 = ((((/* implicit */_Bool) arr_8 [i_0 - 1] [12U] [i_2 - 1])) ? (2002075187U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        var_23 = var_0;
                    }
                    for (unsigned int i_7 = 3; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) var_13);
                        var_25 -= ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [8LL] [i_0 + 2] [i_0 + 2]);
                        var_26 = ((/* implicit */short) arr_10 [i_0] [i_2] [i_4 + 1] [5U]);
                    }
                    var_27 = ((/* implicit */short) var_4);
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_0] [6U] [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (-(((var_7) & (((/* implicit */long long int) (-2147483647 - 1))))))))));
                    }
                    for (long long int i_9 = 1; i_9 < 24; i_9 += 3) 
                    {
                        arr_37 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [7U] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) var_1)) : (arr_29 [i_0] [i_0] [i_2] [i_4 + 1] [i_2])));
                        var_29 += ((/* implicit */unsigned int) -6641724273352183327LL);
                    }
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) 3219114785U);
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6))))));
                        var_32 = (_Bool)0;
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_8)))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) ((unsigned int) (-2147483647 - 1)));
                        arr_42 [i_0] [23U] = ((/* implicit */long long int) (~(var_3)));
                        var_35 = ((/* implicit */unsigned int) (short)9074);
                    }
                    for (int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                    {
                        var_36 *= (-((+(var_0))));
                        arr_45 [i_0 + 2] [i_1] [i_0] [i_0] [i_12] [i_12] = ((/* implicit */long long int) -81242098);
                    }
                }
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    arr_48 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 4; i_14 < 21; i_14 += 3) 
                    {
                        var_38 += ((/* implicit */unsigned int) -1318253790);
                        var_39 *= ((/* implicit */short) ((_Bool) arr_8 [i_0] [i_1] [i_2]));
                        arr_52 [10LL] [i_1 - 1] [i_0] [i_13] [i_13] [i_14 - 4] [i_14] = ((/* implicit */_Bool) ((short) var_5));
                        arr_53 [i_0] [i_0] [i_13] [i_13] = ((/* implicit */unsigned int) var_10);
                    }
                }
                var_40 -= var_5;
            }
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                var_41 = ((/* implicit */unsigned int) ((long long int) var_5));
                arr_57 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(1211192900U)));
            }
            for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                var_42 *= ((/* implicit */unsigned char) ((int) var_7));
                arr_61 [i_0] [i_0] [i_16] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
            }
            for (unsigned short i_17 = 1; i_17 < 24; i_17 += 3) 
            {
                var_43 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (571957152676052992LL) : (((/* implicit */long long int) var_3)))))));
                var_44 = ((/* implicit */unsigned int) var_7);
            }
            arr_64 [0LL] &= ((/* implicit */long long int) var_3);
            arr_65 [i_0] = (~(arr_63 [i_0 + 1] [i_0] [i_0]));
        }
        /* vectorizable */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)101))));
            /* LoopSeq 2 */
            for (unsigned char i_19 = 2; i_19 < 23; i_19 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    arr_72 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                    var_46 = ((/* implicit */unsigned int) 2306330921466294041LL);
                }
                for (int i_21 = 1; i_21 < 23; i_21 += 3) 
                {
                    var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 268427264LL))));
                    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */long long int) arr_54 [i_21] [i_21 + 1] [i_21] [i_21])) != (var_10))))));
                    arr_76 [i_0] [i_19] = ((/* implicit */unsigned int) arr_39 [i_0 + 2] [i_0 - 1] [i_18 - 1] [i_19 - 2] [i_19 + 1]);
                    var_49 = ((/* implicit */long long int) min((var_49), (var_0)));
                    var_50 -= ((/* implicit */_Bool) (~(1588192717U)));
                }
                for (long long int i_22 = 2; i_22 < 24; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        var_51 = (!(((/* implicit */_Bool) -5077685372362138418LL)));
                        var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) (-(var_13))))));
                    }
                    var_53 &= ((/* implicit */unsigned int) (short)-9074);
                    var_54 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                    var_55 = ((/* implicit */unsigned short) 117440512U);
                    var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) (-(((/* implicit */int) (short)15872)))))));
                }
                arr_84 [i_0] [i_0] [i_19] = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
                var_57 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                var_58 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_24 [i_18 - 1]))));
            }
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                var_59 &= ((/* implicit */long long int) ((var_11) && (((/* implicit */_Bool) -6641724273352183331LL))));
                arr_89 [i_0 + 2] [(_Bool)1] [i_18] [i_0] = var_5;
            }
        }
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
        {
            arr_93 [i_0] = arr_27 [i_0] [i_0] [(_Bool)1] [i_25 - 1] [i_25] [i_0] [i_25];
            var_60 ^= ((/* implicit */long long int) var_4);
            var_61 = min((((long long int) arr_66 [i_25 - 1] [i_25])), (((var_5) + (((/* implicit */long long int) arr_77 [i_0] [i_0 + 2] [4LL] [i_25 - 1])))));
        }
        var_62 = ((/* implicit */unsigned int) var_7);
        /* LoopSeq 2 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            arr_96 [i_0] [(_Bool)1] &= max(((~(var_6))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_11))))) ? (-8945313298082047429LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
            arr_97 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), ((-(((((/* implicit */_Bool) arr_38 [i_26] [i_26] [i_26] [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
            var_63 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_28 = 0; i_28 < 25; i_28 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_66 [i_0] [11U])), (-1LL))) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((-(var_12))) : (min((((/* implicit */long long int) min((30U), (((/* implicit */unsigned int) var_14))))), (8601168428967581819LL)))));
                    var_65 = ((/* implicit */unsigned int) (_Bool)0);
                    arr_104 [i_0] [i_28] [i_27] [i_0] = ((/* implicit */unsigned short) min(((~(8601168428967581819LL))), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) -282399197))))), (((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) (unsigned short)65535)) : (-1318253790))))))));
                }
                for (long long int i_30 = 0; i_30 < 25; i_30 += 4) 
                {
                    var_66 += ((/* implicit */_Bool) var_0);
                    /* LoopSeq 1 */
                    for (long long int i_31 = 0; i_31 < 25; i_31 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned int) max((var_67), (((((/* implicit */unsigned int) (~(var_3)))) ^ (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                        var_68 = ((/* implicit */unsigned char) min(((~(var_0))), (((((/* implicit */_Bool) -282399211)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (9223372036854775807LL)))));
                        arr_109 [i_0] = ((/* implicit */short) ((min((((/* implicit */long long int) arr_77 [19U] [19U] [i_28] [i_28])), ((-(9223372036854775807LL))))) & (((((/* implicit */_Bool) (short)-26752)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */short) var_4)))))) : (var_0)))));
                        var_69 = ((/* implicit */unsigned short) (-((~((~(var_7)))))));
                    }
                }
                var_70 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) (unsigned short)13984)), (var_13)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (1721276849U)))) : (min((((/* implicit */long long int) 746703666U)), (arr_31 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))));
                var_71 = ((/* implicit */long long int) max((var_71), (min((((/* implicit */long long int) var_2)), (max((((/* implicit */long long int) var_1)), (min((1228332792669672315LL), (-1228332792669672322LL)))))))));
            }
            /* vectorizable */
            for (short i_32 = 0; i_32 < 25; i_32 += 1) /* same iter space */
            {
                var_72 &= (~(var_10));
                arr_112 [i_0] [i_0] [i_32] = ((long long int) arr_79 [i_0 + 1] [i_27] [19U] [i_0 + 3] [(_Bool)1]);
            }
            for (short i_33 = 0; i_33 < 25; i_33 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_34 = 0; i_34 < 25; i_34 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_35 = 1; i_35 < 23; i_35 += 4) 
                    {
                        var_73 = 2706774577U;
                        arr_122 [i_0] [i_27] [i_34] [i_35] = ((/* implicit */unsigned short) ((unsigned int) 0U));
                        var_74 = ((/* implicit */int) (_Bool)1);
                    }
                    var_75 ^= ((((/* implicit */_Bool) 2706774579U)) ? ((+(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                }
                for (long long int i_36 = 3; i_36 < 23; i_36 += 3) 
                {
                    var_76 = ((/* implicit */_Bool) var_10);
                    var_77 += ((/* implicit */unsigned int) min((((((((/* implicit */int) var_4)) < (((/* implicit */int) var_9)))) ? (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_11))))))), (((/* implicit */long long int) (~(min((1065387564U), (6144U))))))));
                }
                for (long long int i_37 = 3; i_37 < 22; i_37 += 3) 
                {
                    var_78 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (-1907394880))))));
                    arr_128 [i_0] [4LL] [i_0] [i_0] [i_0] [i_0 + 2] = ((((/* implicit */_Bool) -251675797)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6508))) : (-6LL));
                    var_79 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_80 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (3459871982U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_33] [i_33])))))) && (((/* implicit */_Bool) arr_81 [i_0 + 1] [i_27] [i_33] [i_0] [i_33] [i_37] [i_37])))))));
                }
                arr_129 [i_0 - 1] [i_27] [6] [i_27] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (unsigned short)64280))))) ? (((/* implicit */long long int) var_1)) : (var_13)))));
            }
            /* LoopNest 3 */
            for (unsigned int i_38 = 3; i_38 < 23; i_38 += 4) 
            {
                for (short i_39 = 1; i_39 < 22; i_39 += 1) 
                {
                    for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                    {
                        {
                            arr_137 [11U] [7LL] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_108 [i_40 - 1] [i_0] [i_27] [6LL] [i_27] [i_0] [i_0]);
                            arr_138 [i_0] [17LL] [i_38] [17LL] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)32767)), (3220487477U)))), (((((/* implicit */_Bool) -7469781480028504705LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_13)))));
                            var_81 = max((min((var_5), (arr_120 [i_0] [i_0]))), (max((var_10), (arr_120 [i_0] [i_0]))));
                            var_82 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            } 
        }
        var_83 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
    }
    for (long long int i_41 = 1; i_41 < 22; i_41 += 1) /* same iter space */
    {
        var_84 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
        var_85 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 9LL)) ? (((/* implicit */unsigned int) 628459708)) : (3229579731U)))))) ? (-4247009598547125960LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_9)))))));
        var_86 = (~(var_2));
    }
    var_87 = ((/* implicit */long long int) (_Bool)0);
}
