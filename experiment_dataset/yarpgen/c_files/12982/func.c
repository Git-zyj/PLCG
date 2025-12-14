/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12982
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]);
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_6 [i_0]))));
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */long long int) arr_8 [i_0] [i_3] [13]);
                            var_21 = arr_6 [i_0];
                            var_22 = ((/* implicit */long long int) arr_3 [i_0]);
                            arr_14 [i_4] [i_0] [i_3] [0LL] [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_1 [i_0])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_23 = arr_4 [i_0] [i_0] [i_0];
                    var_24 += ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_5] [i_5]);
                    var_25 -= arr_17 [i_0] [i_1] [i_2] [i_5] [i_5];
                }
            }
        }
        for (int i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 4; i_9 < 19; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_18 [i_0]);
                        var_27 = -1925283616685019967LL;
                        var_28 ^= ((/* implicit */int) (-((-(-1925283616685019963LL)))));
                        var_29 = 1925283616685019989LL;
                    }
                    arr_27 [i_0] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */int) arr_24 [i_0] [i_0] [i_7] [i_7] [i_7] [i_6]);
                    var_30 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                    var_31 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [0]);
                }
                for (long long int i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    var_32 = arr_1 [(unsigned char)18];
                    arr_30 [i_0] [i_6] [i_6] [i_7] [i_0] = ((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_10]);
                    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)65))));
                }
                arr_31 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [(unsigned char)5]);
            }
            /* LoopNest 3 */
            for (unsigned char i_11 = 2; i_11 < 19; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    for (int i_13 = 4; i_13 < 16; i_13 += 2) 
                    {
                        {
                            arr_40 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)101))));
                            arr_41 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_0] [i_6 + 3] [i_0] [i_11] [i_12] [i_13]))));
                            var_34 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_35 = ((/* implicit */unsigned char) arr_19 [i_0] [i_6]);
                /* LoopSeq 1 */
                for (long long int i_15 = 3; i_15 < 17; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (unsigned char)255))));
                        var_37 = ((/* implicit */unsigned char) 1813859222);
                        var_38 = ((/* implicit */unsigned char) arr_47 [i_0] [i_6] [i_6] [i_15 - 3]);
                        var_39 = ((/* implicit */long long int) arr_34 [i_0]);
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 619049168);
                    }
                    for (unsigned char i_17 = 1; i_17 < 19; i_17 += 4) 
                    {
                        var_40 |= (-(arr_18 [i_14]));
                        arr_56 [i_0] = ((/* implicit */unsigned char) 5U);
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        var_41 -= (~((~(((/* implicit */int) (unsigned char)235)))));
                        var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_0] [i_6]))));
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_15] [i_15] [i_14] [i_0] [i_0])))))));
                        var_44 = ((/* implicit */long long int) arr_18 [i_0]);
                    }
                    for (unsigned int i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        var_45 = arr_38 [i_19 + 1] [i_19] [i_15] [i_14] [i_14] [i_6] [i_0];
                        var_46 = ((/* implicit */long long int) (unsigned char)19);
                    }
                    for (unsigned int i_20 = 4; i_20 < 18; i_20 += 4) 
                    {
                        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) (unsigned char)4))));
                        var_48 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_49 [i_0] [i_6]))));
                    }
                    arr_63 [i_14] [i_0] [i_14] [i_6] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                    var_49 = ((/* implicit */unsigned char) min((var_49), ((unsigned char)28)));
                }
            }
        }
        for (int i_21 = 2; i_21 < 19; i_21 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 20; i_22 += 3) 
            {
                var_50 = ((/* implicit */long long int) arr_26 [i_0] [i_21]);
                var_51 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_21] [i_22]);
            }
            var_52 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_21] [i_21]))));
            var_53 = arr_53 [i_21] [i_21] [i_0] [i_0] [i_0];
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_24 = 1; i_24 < 17; i_24 += 4) 
                {
                    for (int i_25 = 2; i_25 < 17; i_25 += 2) 
                    {
                        {
                            arr_77 [i_0] [i_0] [i_23] [i_24] [i_25] = ((/* implicit */unsigned char) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_78 [i_0] = ((/* implicit */unsigned int) arr_50 [17LL]);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_26 = 0; i_26 < 20; i_26 += 1) 
                {
                    var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) arr_16 [i_0] [i_21] [i_23] [i_26]))));
                    var_55 &= ((/* implicit */unsigned char) (-((-(arr_37 [i_0])))));
                    var_56 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2430583834U))));
                    /* LoopSeq 1 */
                    for (unsigned char i_27 = 0; i_27 < 20; i_27 += 4) 
                    {
                        arr_83 [i_0] [i_0] [i_0] [i_26] [i_27] [i_26] [i_21] = (~((~(-1925283616685019998LL))));
                        arr_84 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -548282369);
                    }
                }
                for (int i_28 = 0; i_28 < 20; i_28 += 1) 
                {
                    arr_89 [i_0] = ((/* implicit */unsigned char) -1925283616685019983LL);
                    /* LoopSeq 1 */
                    for (int i_29 = 1; i_29 < 19; i_29 += 4) 
                    {
                        var_57 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)126))));
                        var_58 = arr_24 [5U] [i_21] [(unsigned char)0] [i_23] [i_28] [i_29];
                    }
                    var_59 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_0] [i_21] [i_23] [i_23] [i_28]))));
                }
                for (unsigned char i_30 = 3; i_30 < 18; i_30 += 4) /* same iter space */
                {
                    var_60 -= ((/* implicit */unsigned int) arr_69 [i_0] [i_21] [i_23] [i_21]);
                    /* LoopSeq 2 */
                    for (long long int i_31 = 0; i_31 < 20; i_31 += 4) 
                    {
                        var_61 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)2))));
                        var_62 = ((/* implicit */unsigned int) arr_67 [i_0] [i_21] [i_23]);
                    }
                    for (unsigned char i_32 = 3; i_32 < 17; i_32 += 2) 
                    {
                        var_63 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-7935139511268468647LL))))));
                        var_64 = ((/* implicit */unsigned char) min((var_64), (((/* implicit */unsigned char) (+(arr_34 [i_0]))))));
                    }
                    arr_100 [i_0] [i_21] [i_23] [i_23] [i_30] [i_0] = ((/* implicit */int) -360510461630483922LL);
                }
                for (unsigned char i_33 = 3; i_33 < 18; i_33 += 4) /* same iter space */
                {
                    var_65 = ((/* implicit */unsigned int) arr_60 [i_23] [i_0]);
                    var_66 += arr_4 [i_0] [i_21] [i_23];
                    arr_104 [i_0] [i_0] = ((/* implicit */long long int) (+((+(arr_22 [i_33])))));
                    var_67 += ((/* implicit */unsigned char) arr_1 [i_0]);
                }
            }
            /* LoopNest 3 */
            for (unsigned int i_34 = 1; i_34 < 18; i_34 += 1) 
            {
                for (int i_35 = 2; i_35 < 18; i_35 += 3) 
                {
                    for (unsigned char i_36 = 0; i_36 < 20; i_36 += 1) 
                    {
                        {
                            var_68 += ((/* implicit */unsigned char) -1115926110);
                            var_69 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_86 [i_0] [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
        }
        var_70 = ((/* implicit */long long int) max((var_70), (((/* implicit */long long int) arr_61 [(unsigned char)8] [i_0] [i_0] [i_0] [(unsigned char)8] [i_0]))));
        var_71 = ((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_0] [i_0]);
        var_72 = (unsigned char)213;
    }
    /* LoopSeq 1 */
    for (unsigned char i_37 = 0; i_37 < 13; i_37 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_38 = 0; i_38 < 13; i_38 += 3) 
        {
            for (unsigned char i_39 = 3; i_39 < 11; i_39 += 3) 
            {
                {
                    var_73 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_51 [i_39] [i_39] [i_38] [i_38] [i_37] [i_37]))));
                    var_74 &= ((/* implicit */long long int) (~(arr_18 [i_37])));
                    var_75 = ((/* implicit */long long int) arr_24 [i_37] [6U] [i_38] [i_38] [i_39 + 2] [i_38]);
                    arr_123 [i_37] [i_38] = ((/* implicit */unsigned int) arr_10 [i_37] [i_37]);
                }
            } 
        } 
        var_76 += (~(((/* implicit */int) arr_90 [i_37] [i_37] [i_37] [i_37])));
        var_77 += ((/* implicit */int) -5LL);
    }
}
