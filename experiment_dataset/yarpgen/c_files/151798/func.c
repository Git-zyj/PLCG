/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151798
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = (~(((arr_0 [i_0] [i_0]) + (var_0))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) 6768498009005162393LL)) ? (-2986910529970625712LL) : (98723732151380356LL));
    }
    for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -98723732151380356LL))));
        arr_5 [6LL] = arr_3 [i_1];
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (+(var_12))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_22 = (~(var_9));
                var_23 = var_3;
            }
            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_19 [i_6] [i_5] [i_2] = ((/* implicit */long long int) ((arr_15 [i_2 + 2] [i_2 + 2] [i_3 - 1] [i_3 + 1]) != (arr_15 [i_2 + 2] [i_2 + 1] [i_3 + 1] [i_3 + 1])));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_22 [13LL] [13LL] [i_5] [13LL] [13LL] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_3 + 1] [i_2 + 1]))));
                        var_24 = ((-7760752461680662497LL) ^ (arr_11 [i_2 - 2] [i_2 - 1]));
                    }
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        arr_26 [i_2] = ((arr_11 [14LL] [i_2]) + (arr_8 [i_5] [i_5]));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) 98723732151380367LL)))))));
                        var_26 = ((long long int) ((long long int) arr_25 [i_2] [i_8]));
                        var_27 = 9223372036854775797LL;
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_9 = 2; i_9 < 16; i_9 += 4) 
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((long long int) var_7))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        var_29 = var_16;
                        var_30 = arr_32 [i_2 - 1] [i_3 - 1] [i_5] [i_9 + 3] [i_10];
                        arr_33 [i_10] [i_10] [i_5] [i_5] = ((long long int) arr_9 [i_10 - 1] [i_10] [i_10]);
                    }
                    var_31 ^= ((var_2) >> ((((~(arr_13 [i_2] [i_2] [i_2]))) + (5512444125631766937LL))));
                }
                for (long long int i_11 = 3; i_11 < 19; i_11 += 4) 
                {
                    var_32 = ((/* implicit */long long int) (~(((/* implicit */int) ((-11LL) < (281466386776064LL))))));
                    arr_37 [18LL] [i_3] [i_5] [i_11] [i_5] [1LL] = (~(arr_34 [i_11 + 1] [i_3] [i_3] [i_2]));
                }
            }
            for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    var_33 = (~(arr_23 [i_12] [i_2] [i_3 - 1] [i_13] [i_12]));
                    var_34 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_2 - 1] [i_3] [i_3])))))) != (var_8)));
                    var_35 = ((long long int) arr_41 [i_2] [i_3] [i_12]);
                }
                var_36 |= (-(((((/* implicit */_Bool) arr_27 [i_2] [i_12] [i_2])) ? (var_6) : (arr_7 [i_12]))));
            }
            arr_42 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_2 - 2])) && (((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2 + 2]))));
            var_37 = (~(713883715391963097LL));
            /* LoopSeq 1 */
            for (long long int i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                arr_46 [i_2] [i_3] [i_2] [i_3] = (~(arr_11 [i_2 + 1] [i_14 + 1]));
                var_38 = (-(var_3));
                var_39 = ((/* implicit */long long int) min((var_39), (-4352705331289921228LL)));
                var_40 = (+(-4352705331289921228LL));
            }
            var_41 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
        }
        for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            var_42 = ((/* implicit */long long int) min((var_42), (((((/* implicit */_Bool) arr_27 [i_2] [i_2 + 1] [i_2 + 1])) ? (var_10) : (arr_27 [i_2] [i_2 + 1] [i_2 + 1])))));
            var_43 = ((long long int) arr_10 [i_2] [i_2] [17LL] [i_2 + 1]);
        }
        arr_51 [i_2] = arr_35 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 + 2];
    }
    /* vectorizable */
    for (long long int i_16 = 2; i_16 < 18; i_16 += 4) 
    {
        var_44 = ((/* implicit */long long int) min((var_44), (arr_44 [i_16 + 1])));
        var_45 &= (~(var_8));
    }
    /* LoopSeq 3 */
    for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        arr_57 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_54 [i_17] [i_17]))) || (((/* implicit */_Bool) min((arr_54 [i_17] [i_17]), (arr_54 [i_17] [i_17]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_18 = 1; i_18 < 18; i_18 += 3) 
        {
            arr_60 [i_17] [14LL] [14LL] = ((long long int) arr_55 [i_18 + 2]);
            var_46 = (~(2986910529970625699LL));
        }
        arr_61 [i_17] = arr_58 [14LL] [i_17] [i_17];
    }
    for (long long int i_19 = 0; i_19 < 18; i_19 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_20 = 2; i_20 < 15; i_20 += 2) 
        {
            var_47 = min((min((arr_35 [i_20 + 3] [i_20 - 2] [i_20 + 3] [i_20 + 2] [i_20 - 1] [i_20 + 2]), (((((/* implicit */_Bool) arr_11 [i_19] [i_20])) ? (9223372036854775797LL) : (var_16))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_19] [i_19] [i_20 + 3])) || (((/* implicit */_Bool) arr_43 [i_20 - 1] [i_20] [4LL]))))));
            var_48 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_29 [i_20 - 1] [i_19] [i_20 + 2] [i_20] [i_19]), (arr_29 [i_20 + 2] [i_19] [i_20 + 2] [i_19] [3LL]))))));
            arr_68 [i_19] = ((arr_11 [i_19] [i_19]) / (((long long int) -9223372036854775807LL)));
        }
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_22 = 0; i_22 < 18; i_22 += 1) 
            {
                arr_73 [i_19] [i_21] [i_19] [i_19] = (~(arr_52 [i_19]));
                arr_74 [i_19] [i_19] [i_21] = ((/* implicit */long long int) ((arr_39 [i_22] [i_21] [i_19]) < (arr_39 [i_22] [i_21] [i_19])));
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 18; i_23 += 4) 
                {
                    for (long long int i_24 = 0; i_24 < 18; i_24 += 1) 
                    {
                        {
                            var_49 = ((arr_67 [i_19] [i_19] [i_19]) % (arr_67 [i_21] [i_21] [i_19]));
                            var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_32 [i_19] [i_22] [i_22] [i_19] [i_19]))));
                        }
                    } 
                } 
            }
            var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2602488213406498911LL)) && (((/* implicit */_Bool) 1393008965762040450LL))));
            var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_40 [i_19] [i_19] [i_21] [i_19] [i_19]))));
            /* LoopSeq 1 */
            for (long long int i_25 = 0; i_25 < 18; i_25 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 18; i_26 += 1) 
                {
                    for (long long int i_27 = 4; i_27 < 16; i_27 += 4) 
                    {
                        {
                            var_53 = -98723732151380368LL;
                            arr_85 [i_19] [i_19] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_82 [i_19] [i_27 - 1] [i_27] [i_27 - 1] [i_27 - 3] [i_19]))));
                            var_54 = var_17;
                        }
                    } 
                } 
                var_55 = ((/* implicit */long long int) ((var_6) >= (arr_10 [i_19] [i_19] [i_21] [i_25])));
                var_56 = var_10;
                arr_86 [i_19] [i_25] = ((/* implicit */long long int) ((arr_35 [i_19] [i_19] [i_21] [i_21] [i_19] [i_25]) != (arr_35 [i_25] [i_21] [i_21] [i_21] [i_19] [i_19])));
            }
        }
        /* LoopNest 2 */
        for (long long int i_28 = 3; i_28 < 17; i_28 += 4) 
        {
            for (long long int i_29 = 0; i_29 < 18; i_29 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_30 = 1; i_30 < 14; i_30 += 2) 
                    {
                        for (long long int i_31 = 0; i_31 < 18; i_31 += 4) 
                        {
                            {
                                var_57 = ((/* implicit */long long int) ((min((2986910529970625712LL), (-4352705331289921247LL))) == ((-(2197949513728LL)))));
                                var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) (!(((arr_45 [i_30 + 2] [i_28 - 2] [i_19]) < (var_5))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_32 = 3; i_32 < 16; i_32 += 1) 
                    {
                        for (long long int i_33 = 2; i_33 < 16; i_33 += 2) 
                        {
                            {
                                var_59 = min((((/* implicit */long long int) ((var_4) == (min((var_10), (var_13)))))), (98723732151380356LL));
                                var_60 = ((long long int) ((((/* implicit */_Bool) arr_90 [i_19] [i_29] [i_19])) ? (arr_82 [i_32 - 2] [i_33 + 1] [i_19] [i_32] [i_33 + 1] [i_19]) : ((~(arr_75 [i_33] [i_28] [0LL] [i_28])))));
                                var_61 = (~(((var_11) - (0LL))));
                                arr_102 [11LL] [i_28] [1LL] [i_29] [11LL] [i_19] [i_29] = ((((long long int) (!(((/* implicit */_Bool) 9223372036854775803LL))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_88 [i_28 - 3] [i_32 - 2])) && (((/* implicit */_Bool) ((long long int) arr_72 [i_19] [i_19] [i_19] [i_19]))))))));
                                var_62 -= ((((/* implicit */long long int) ((/* implicit */int) ((var_13) != (var_5))))) % (arr_34 [i_33] [i_28] [i_33] [i_28]));
                            }
                        } 
                    } 
                    var_63 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_90 [i_19] [i_28 - 1] [i_19]) >> ((((~(var_6))) - (3543956205019463592LL))))))));
                    /* LoopSeq 4 */
                    for (long long int i_34 = 1; i_34 < 17; i_34 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_35 = 4; i_35 < 16; i_35 += 2) 
                        {
                            var_64 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_19] [i_28] [i_29] [i_34] [i_34] [i_35])) ? (var_14) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_87 [i_19] [i_19] [i_19]) < (-98723732151380348LL))))) : (144115188075855744LL)));
                            var_65 = ((((/* implicit */_Bool) ((long long int) arr_100 [i_19] [16LL] [i_19] [i_34]))) ? (min(((~(arr_63 [i_19] [i_35]))), (arr_79 [i_19] [i_28] [i_29] [i_35]))) : (var_12));
                        }
                        var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_16), (9223372036854775807LL)))) || (((/* implicit */_Bool) arr_93 [i_28 - 3] [i_28 - 3] [i_28] [i_28 - 1]))));
                        var_67 = min((arr_9 [i_34] [i_29] [i_28]), (min((arr_75 [i_34 - 1] [i_34] [i_34 - 1] [i_28 - 1]), (var_4))));
                    }
                    for (long long int i_36 = 0; i_36 < 18; i_36 += 4) 
                    {
                        var_68 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_75 [i_19] [i_28] [i_19] [i_19]))));
                        var_69 = ((((-1LL) + (9223372036854775807LL))) >> (((-1574651781896379653LL) + (1574651781896379666LL))));
                    }
                    for (long long int i_37 = 2; i_37 < 17; i_37 += 4) 
                    {
                        arr_112 [i_19] [i_19] [i_28] [i_28] [i_29] [i_37] = min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_58 [i_19] [i_29] [10LL])) && (((var_14) >= (var_2)))))));
                        arr_113 [i_19] [i_37 - 2] [i_37] [i_37] [i_37 + 1] = ((/* implicit */long long int) ((min((arr_54 [i_28] [i_28]), (var_12))) <= (((var_13) / (arr_27 [i_28 - 3] [i_28 - 3] [i_19])))));
                        var_70 = arr_64 [12LL] [i_29];
                        arr_114 [i_19] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((((/* implicit */_Bool) -6303349746106472856LL)) && (((/* implicit */_Bool) var_1)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_38 = 0; i_38 < 18; i_38 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_39 = 0; i_39 < 18; i_39 += 1) 
                        {
                            arr_120 [i_19] [i_19] = arr_103 [i_19] [i_28 - 3] [i_19] [i_38] [i_19] [i_19];
                            var_71 = arr_21 [i_38] [i_29];
                        }
                        for (long long int i_40 = 2; i_40 < 16; i_40 += 1) 
                        {
                            var_72 = ((arr_63 [i_19] [i_19]) % (((((/* implicit */_Bool) var_4)) ? (arr_31 [i_19] [i_28]) : (-4685493042411835343LL))));
                            var_73 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_90 [i_19] [i_28] [i_19])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                            arr_123 [i_19] [i_28] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) ((arr_106 [i_40 + 1] [i_28 + 1]) <= (arr_65 [i_19] [i_19])));
                            var_74 = ((((/* implicit */_Bool) arr_89 [i_40 - 2] [i_28 - 2])) ? (arr_89 [i_40 - 2] [i_28 - 2]) : (arr_76 [i_40 - 2] [i_28 - 2] [i_29] [i_38]));
                        }
                        arr_124 [i_19] [i_28] [i_29] [i_28] = ((/* implicit */long long int) ((var_10) >= (arr_106 [i_19] [i_28])));
                    }
                }
            } 
        } 
    }
    for (long long int i_41 = 0; i_41 < 15; i_41 += 4) 
    {
        arr_128 [i_41] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_41] [i_41] [i_41] [i_41])) ? (var_17) : (var_16)))) ? (min((arr_52 [i_41]), (arr_17 [i_41]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -4014494774366703758LL)))))))))));
        arr_129 [i_41] = arr_21 [i_41] [i_41];
        var_75 = min((-191827103803901062LL), (744462213291461802LL));
        var_76 = arr_47 [i_41] [i_41] [i_41];
        /* LoopNest 2 */
        for (long long int i_42 = 2; i_42 < 12; i_42 += 3) 
        {
            for (long long int i_43 = 0; i_43 < 15; i_43 += 3) 
            {
                {
                    var_77 = min((((long long int) ((((/* implicit */_Bool) arr_23 [i_41] [i_41] [i_41] [i_41] [i_41])) && (((/* implicit */_Bool) arr_79 [i_43] [i_41] [i_42] [i_41]))))), ((+(var_11))));
                    var_78 = min((min((min((arr_90 [i_42] [i_42] [i_43]), (var_17))), (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_42] [i_42 - 1]))))));
                }
            } 
        } 
    }
    var_79 = min((((/* implicit */long long int) (~(((/* implicit */int) ((var_16) != (var_12))))))), (((var_14) / (((1574651781896379653LL) + (-9223372036854775801LL))))));
}
