/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162048
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) var_17);
                            var_20 = ((/* implicit */unsigned char) var_17);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)188))));
        var_21 = ((/* implicit */short) (((+(((/* implicit */int) var_9)))) + (((/* implicit */int) var_3))));
        arr_16 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_0)))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) * ((+(((/* implicit */int) var_7))))));
    }
    for (unsigned char i_6 = 3; i_6 < 18; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (unsigned char i_9 = 1; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_24 += ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_3))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_11)) <= ((+(((/* implicit */int) var_4))))))) + ((-(((/* implicit */int) var_4))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 1; i_13 < 19; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
                            var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                        }
                        var_28 = ((/* implicit */unsigned long long int) var_6);
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_15)));
                        var_30 ^= ((/* implicit */short) (~(var_16)));
                    }
                    var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (var_16));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_5))))));
    }
    /* LoopNest 3 */
    for (short i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        for (short i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            {
                                var_34 &= ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_14))))));
                                var_35 = ((/* implicit */short) var_16);
                                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(((/* implicit */int) var_3)))))));
                                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-(((((/* implicit */int) var_3)) / ((+(((/* implicit */int) var_8)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_19 = 2; i_19 < 22; i_19 += 2) 
    {
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) >> (((/* implicit */int) (((+(var_15))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))));
        arr_59 [i_19 - 2] = var_2;
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_17)))))) > ((+(var_16)))))))))));
        var_41 = ((/* implicit */unsigned char) var_16);
        var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    }
    for (short i_20 = 0; i_20 < 24; i_20 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 1) 
        {
            var_43 = ((/* implicit */short) var_12);
            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (~(((/* implicit */int) var_14)))))));
            /* LoopSeq 2 */
            for (short i_22 = 1; i_22 < 22; i_22 += 4) 
            {
                var_45 = ((/* implicit */unsigned char) (+((~(var_15)))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 1; i_23 < 23; i_23 += 1) 
                {
                    for (short i_24 = 2; i_24 < 22; i_24 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */short) var_4);
                            var_47 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_15))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_11)))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                    } 
                } 
                arr_75 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_10))))) && (((((/* implicit */int) var_1)) <= (((/* implicit */int) var_0))))));
            }
            for (unsigned char i_25 = 0; i_25 < 24; i_25 += 4) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_26 = 0; i_26 < 24; i_26 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_27 = 1; i_27 < 22; i_27 += 1) 
                    {
                        arr_84 [i_21] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)-16244)))))));
                    }
                    var_49 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                    /* LoopSeq 2 */
                    for (short i_28 = 0; i_28 < 24; i_28 += 1) 
                    {
                        var_50 = var_14;
                        var_51 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 2) 
                    {
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (var_12)));
                        var_53 = ((/* implicit */unsigned char) var_17);
                    }
                }
                for (unsigned char i_30 = 0; i_30 < 24; i_30 += 3) 
                {
                    var_54 -= ((/* implicit */unsigned char) (!(((((/* implicit */int) var_4)) <= (((/* implicit */int) var_10))))));
                    var_55 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
                    /* LoopSeq 2 */
                    for (unsigned char i_31 = 0; i_31 < 24; i_31 += 3) 
                    {
                        var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) (((-(((/* implicit */int) var_11)))) <= (((/* implicit */int) var_4)))))));
                        var_57 = ((/* implicit */unsigned char) var_16);
                    }
                    for (short i_32 = 0; i_32 < 24; i_32 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_59 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14))))))))));
                    }
                }
                for (unsigned char i_33 = 1; i_33 < 22; i_33 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 2; i_34 < 21; i_34 += 2) 
                    {
                        var_60 = ((/* implicit */short) var_5);
                        var_61 ^= ((/* implicit */unsigned char) var_17);
                        var_62 = ((/* implicit */unsigned char) var_17);
                    }
                    var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) ((var_12) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ ((~(var_12))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_35 = 0; i_35 < 24; i_35 += 2) 
                    {
                        var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_7))));
                        var_65 = ((/* implicit */unsigned char) (+((~(var_12)))));
                    }
                }
                for (unsigned char i_36 = 0; i_36 < 24; i_36 += 3) 
                {
                    var_66 = var_11;
                    var_67 = var_16;
                }
                /* LoopSeq 3 */
                for (unsigned char i_37 = 1; i_37 < 22; i_37 += 4) 
                {
                    var_68 -= var_16;
                    var_69 = ((/* implicit */short) min((var_69), (var_8)));
                }
                for (unsigned char i_38 = 0; i_38 < 24; i_38 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_39 = 0; i_39 < 24; i_39 += 1) /* same iter space */
                    {
                        var_70 = ((/* implicit */short) var_11);
                        var_71 = var_13;
                        var_72 ^= ((/* implicit */short) ((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))))));
                        var_73 = ((/* implicit */unsigned char) min((var_73), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_17))) && (((/* implicit */_Bool) ((var_17) * (var_15)))))))));
                        var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))))))));
                    }
                    for (short i_40 = 0; i_40 < 24; i_40 += 1) /* same iter space */
                    {
                        var_75 = var_4;
                        var_76 = ((/* implicit */unsigned long long int) var_5);
                        var_77 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                        var_78 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_5)) / (((/* implicit */int) var_7))))));
                    }
                    /* vectorizable */
                    for (short i_41 = 0; i_41 < 24; i_41 += 1) /* same iter space */
                    {
                        var_79 = ((/* implicit */unsigned char) min((var_79), (((/* implicit */unsigned char) ((17493231531709217501ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)13927)))))))))));
                        var_80 = ((/* implicit */unsigned char) max((var_80), (((/* implicit */unsigned char) ((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                        var_81 = ((/* implicit */short) ((((/* implicit */int) (short)13927)) < (((/* implicit */int) (unsigned char)14))));
                    }
                    var_82 = ((/* implicit */unsigned long long int) min((var_82), (((/* implicit */unsigned long long int) var_2))));
                }
                for (unsigned char i_42 = 0; i_42 < 24; i_42 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_43 = 0; i_43 < 24; i_43 += 2) 
                    {
                        var_83 = ((/* implicit */short) var_13);
                        var_84 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                        var_85 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_6))))));
                    }
                    var_86 = ((/* implicit */short) max((var_86), (((/* implicit */short) ((var_17) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))))));
                    var_87 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_6)))))));
                    var_88 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_8)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95)))))));
                }
            }
            var_89 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
            var_90 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_10)))))));
        }
        var_91 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)162)) * (((/* implicit */int) (unsigned char)162)))) % (((((/* implicit */int) (short)8107)) + (((/* implicit */int) (unsigned char)41))))));
    }
}
