/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179923
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) var_3);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_21 += ((/* implicit */_Bool) var_16);
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_0))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_16))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */int) var_15);
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        var_24 = ((/* implicit */long long int) var_11);
                        arr_23 [i_4] [i_6] [i_5] [i_4] = var_5;
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_26 [i_7] [i_4] [i_6 + 2] [i_4] [i_4] = ((/* implicit */long long int) var_8);
                            var_25 &= ((/* implicit */unsigned short) var_13);
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) var_17);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_18))));
                            arr_28 [i_4] [(short)10] [i_6] [16U] [i_4] [i_8] [i_6] = ((/* implicit */unsigned int) var_13);
                        }
                        for (short i_9 = 1; i_9 < 18; i_9 += 3) 
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] [3U] [i_4] = ((/* implicit */unsigned int) var_18);
                            arr_32 [i_4] [i_4] [i_5] [i_4] [(signed char)4] [10LL] [(unsigned short)12] = var_6;
                        }
                        var_27 = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_36 [i_4] [i_10] [i_10] = ((/* implicit */long long int) var_15);
            arr_37 [i_4] [i_4] = ((/* implicit */short) var_6);
            /* LoopSeq 4 */
            for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    arr_46 [(unsigned short)12] [i_4] = ((/* implicit */_Bool) var_7);
                    var_28 += ((/* implicit */signed char) var_11);
                    arr_47 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_15);
                    arr_48 [i_4] [i_11 + 2] [i_12] [i_12] [i_4] = ((/* implicit */long long int) var_6);
                }
                var_29 &= ((/* implicit */long long int) var_3);
                var_30 += ((/* implicit */int) var_18);
                var_31 += ((/* implicit */int) var_13);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    arr_51 [(unsigned char)18] &= ((/* implicit */unsigned short) var_17);
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        var_32 += ((/* implicit */short) var_16);
                        arr_54 [i_13] [i_10] [i_11] [i_13] [i_4] = ((/* implicit */long long int) var_6);
                    }
                    for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_18))));
                        var_34 += ((/* implicit */unsigned short) var_9);
                        arr_59 [i_4] [i_10] [i_4] [i_10] [i_15] [i_4] = ((/* implicit */unsigned char) var_4);
                    }
                    for (short i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_35 += ((/* implicit */unsigned long long int) var_6);
                        arr_63 [(short)1] [(short)1] [i_10] [i_4] [(short)1] [i_13] [i_16] = ((/* implicit */short) var_15);
                        arr_64 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_7);
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) var_14))));
                        arr_65 [i_4] [(signed char)16] = ((/* implicit */_Bool) var_17);
                    }
                    arr_66 [i_4] [i_10] [i_4] [i_13] = ((/* implicit */unsigned int) var_12);
                    var_37 += ((/* implicit */unsigned long long int) var_9);
                    arr_67 [i_4] = var_15;
                }
            }
            /* vectorizable */
            for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 3) /* same iter space */
            {
                arr_70 [i_4] [i_4] [i_17] [i_17] = ((/* implicit */_Bool) var_11);
                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) var_10))));
            }
            /* vectorizable */
            for (signed char i_18 = 0; i_18 < 19; i_18 += 4) 
            {
                var_39 = ((/* implicit */unsigned int) var_4);
                arr_74 [i_4] [i_18] [i_4] [i_4] = ((/* implicit */unsigned short) var_3);
                var_40 = ((/* implicit */unsigned char) var_1);
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    arr_77 [i_4] [i_10] [i_18] [i_19] &= ((/* implicit */long long int) var_5);
                    var_41 += ((/* implicit */unsigned int) var_17);
                }
            }
            for (unsigned char i_20 = 1; i_20 < 15; i_20 += 2) 
            {
                arr_81 [6ULL] [i_10] [6ULL] &= ((/* implicit */int) var_6);
                var_42 += ((/* implicit */long long int) var_2);
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) var_19))));
                /* LoopSeq 2 */
                for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) /* same iter space */
                {
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) var_9))));
                    arr_86 [i_4] [i_20] [i_21] = ((/* implicit */_Bool) var_13);
                }
                for (unsigned short i_22 = 0; i_22 < 19; i_22 += 4) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned short) var_10);
                    arr_89 [i_4] [i_10] [i_10] [i_20] [i_4] = ((/* implicit */unsigned short) var_1);
                }
                var_46 = ((/* implicit */int) var_15);
            }
            arr_90 [i_4] = ((/* implicit */short) var_17);
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 19; i_23 += 2) 
        {
            for (short i_24 = 0; i_24 < 19; i_24 += 4) 
            {
                {
                    var_47 = ((/* implicit */int) var_15);
                    var_48 += ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_25 = 0; i_25 < 19; i_25 += 2) /* same iter space */
        {
            var_49 += var_8;
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                var_50 = ((/* implicit */long long int) var_4);
                arr_101 [i_4] [i_4] [(_Bool)1] [i_26] = ((/* implicit */short) var_13);
            }
            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) var_0))));
        }
        for (int i_27 = 0; i_27 < 19; i_27 += 2) /* same iter space */
        {
            var_52 += ((/* implicit */unsigned short) var_12);
            arr_106 [i_4] [i_27] = ((/* implicit */unsigned char) var_4);
            var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) var_18))));
            var_54 += ((/* implicit */long long int) var_0);
            var_55 += ((/* implicit */unsigned long long int) var_19);
        }
        /* LoopNest 2 */
        for (signed char i_28 = 0; i_28 < 19; i_28 += 4) 
        {
            for (long long int i_29 = 0; i_29 < 19; i_29 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_30 = 0; i_30 < 19; i_30 += 4) 
                    {
                        for (unsigned short i_31 = 0; i_31 < 19; i_31 += 3) 
                        {
                            {
                                var_56 += ((/* implicit */unsigned int) var_1);
                                var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) var_8))));
                                var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) var_9))));
                                var_59 += ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    arr_118 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_17);
                    var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) var_19))));
                }
            } 
        } 
        arr_119 [i_4] = ((/* implicit */unsigned short) var_2);
    }
    for (unsigned long long int i_32 = 0; i_32 < 16; i_32 += 4) /* same iter space */
    {
        arr_122 [(short)5] = ((/* implicit */signed char) var_10);
        /* LoopSeq 2 */
        for (unsigned char i_33 = 1; i_33 < 14; i_33 += 2) 
        {
            var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) var_10))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_34 = 0; i_34 < 16; i_34 += 4) 
            {
                var_62 += ((/* implicit */unsigned short) var_17);
                arr_129 [i_33] [i_33 - 1] [i_33] = ((/* implicit */unsigned int) var_1);
            }
        }
        for (unsigned long long int i_35 = 3; i_35 < 15; i_35 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_36 = 0; i_36 < 16; i_36 += 3) 
            {
                var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) var_6))));
                var_64 = ((/* implicit */unsigned long long int) max((var_64), (((/* implicit */unsigned long long int) var_11))));
            }
            /* vectorizable */
            for (long long int i_37 = 0; i_37 < 16; i_37 += 2) 
            {
                /* LoopNest 2 */
                for (short i_38 = 0; i_38 < 16; i_38 += 1) 
                {
                    for (long long int i_39 = 0; i_39 < 16; i_39 += 4) 
                    {
                        {
                            var_65 = ((/* implicit */unsigned long long int) var_7);
                            var_66 += var_4;
                            var_67 += ((/* implicit */unsigned int) var_1);
                            var_68 = ((/* implicit */unsigned int) max((var_68), (var_5)));
                            arr_143 [i_39] &= var_11;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_40 = 1; i_40 < 13; i_40 += 3) 
                {
                    for (unsigned char i_41 = 0; i_41 < 16; i_41 += 2) 
                    {
                        {
                            arr_148 [i_32] [i_32] [i_35] [i_32] [i_32] = ((/* implicit */short) var_13);
                            var_69 += ((/* implicit */short) var_2);
                        }
                    } 
                } 
                var_70 = ((/* implicit */unsigned short) max((var_70), (((/* implicit */unsigned short) var_13))));
                var_71 = ((/* implicit */unsigned int) max((var_71), (((/* implicit */unsigned int) var_6))));
                arr_149 [i_35] [i_35] [i_35] = ((/* implicit */unsigned long long int) var_9);
            }
            arr_150 [i_35] [i_35] = ((/* implicit */unsigned long long int) var_5);
            var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) var_16))));
        }
        arr_151 [i_32] &= ((/* implicit */signed char) var_14);
        arr_152 [i_32] = ((/* implicit */_Bool) var_17);
    }
    for (unsigned long long int i_42 = 0; i_42 < 16; i_42 += 4) /* same iter space */
    {
        var_73 += ((/* implicit */unsigned short) var_0);
        arr_156 [i_42] &= ((/* implicit */int) var_14);
    }
    var_74 += ((/* implicit */int) var_19);
    /* LoopSeq 2 */
    for (short i_43 = 0; i_43 < 19; i_43 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_44 = 0; i_44 < 19; i_44 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_45 = 2; i_45 < 16; i_45 += 2) 
            {
                for (short i_46 = 1; i_46 < 18; i_46 += 2) 
                {
                    for (unsigned long long int i_47 = 0; i_47 < 19; i_47 += 1) 
                    {
                        {
                            arr_171 [14U] [i_45] [i_45] [i_43] = ((/* implicit */unsigned long long int) var_16);
                            var_75 = ((/* implicit */short) var_10);
                        }
                    } 
                } 
            } 
            var_76 = ((/* implicit */int) max((var_76), (((/* implicit */int) var_6))));
            arr_172 [i_44] [i_43] = ((/* implicit */signed char) var_4);
        }
        for (unsigned long long int i_48 = 0; i_48 < 19; i_48 += 2) /* same iter space */
        {
            arr_177 [i_43] [i_48] = ((/* implicit */unsigned char) var_2);
            var_77 += var_8;
        }
        var_78 = ((/* implicit */unsigned long long int) min((var_78), (var_4)));
    }
    for (short i_49 = 0; i_49 < 19; i_49 += 1) /* same iter space */
    {
        arr_180 [i_49] = var_4;
        arr_181 [i_49] [i_49] = ((/* implicit */unsigned int) var_0);
        arr_182 [i_49] [i_49] = ((/* implicit */short) var_18);
        /* LoopNest 3 */
        for (unsigned long long int i_50 = 1; i_50 < 17; i_50 += 4) 
        {
            for (unsigned short i_51 = 0; i_51 < 19; i_51 += 3) 
            {
                for (long long int i_52 = 0; i_52 < 19; i_52 += 2) 
                {
                    {
                        arr_190 [i_49] [(short)16] [i_49] [(short)16] [i_49] [i_49] = var_14;
                        var_79 = ((/* implicit */int) var_17);
                        arr_191 [i_49] [i_49] [i_52] = ((/* implicit */short) var_1);
                        arr_192 [i_49] [i_49] [i_49] = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        } 
        var_80 += ((/* implicit */long long int) var_19);
    }
}
