/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105013
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned short)8903)) ^ (478333055))) : (arr_1 [11U])))) : ((((!(((/* implicit */_Bool) -2147483633)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59818)) && (((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        arr_3 [i_0] [20U] = arr_0 [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) max((min((4169269762U), (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned int) var_8))));
        var_15 = ((((arr_0 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10938))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57417))) & (5U))));
        var_16 = ((/* implicit */int) var_0);
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((arr_4 [i_1] [i_1]) - (var_4))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16251)))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_17 = 2971662560U;
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (int i_6 = 3; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_18 = arr_18 [i_3];
                            arr_21 [i_2] [i_2] [i_2] [13] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_19 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6]) : (arr_19 [i_6] [i_6] [i_6] [i_6 + 1] [i_6] [i_6 - 3] [i_6])))) ? (arr_15 [(unsigned short)5] [i_6 - 3] [i_6 - 3] [i_6 - 1] [i_6]) : (((((/* implicit */_Bool) var_7)) ? (arr_15 [i_6] [i_6] [i_6] [i_6 - 3] [(unsigned short)21]) : (var_3))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
            var_20 = ((/* implicit */unsigned int) (~(arr_17 [i_2] [i_2] [i_2])));
        }
    }
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 3; i_9 < 17; i_9 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        {
                            arr_37 [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_9 + 4] [i_9 + 2])) ? (3383874246U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 2147483633)) < (arr_14 [i_7] [5U] [(unsigned short)2])))))));
                            var_21 = ((arr_14 [i_8] [i_9] [i_9 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9 + 3]))));
                            arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) var_7);
                            arr_39 [0U] [i_7] [i_9 + 4] [(unsigned short)18] [i_11] = arr_36 [i_7] [15U] [i_7] [i_10] [18U];
                        }
                    } 
                } 
                var_22 = var_14;
                var_23 = (-(var_1));
                var_24 = ((((/* implicit */int) var_6)) << (((((/* implicit */int) ((unsigned short) var_8))) - (35840))));
            }
            for (unsigned int i_12 = 3; i_12 < 17; i_12 += 3) /* same iter space */
            {
                var_25 = ((((((/* implicit */_Bool) arr_22 [15U])) && (((/* implicit */_Bool) 963956845U)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -2147483633)) : (arr_18 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_12 + 1]))));
                arr_44 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
            }
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    {
                        arr_50 [11U] [11U] [11U] [i_7] = (-(arr_42 [i_7] [i_7]));
                        arr_51 [i_7] [i_8] [20U] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_41 [i_7] [i_8] [2] [i_14])));
                    }
                } 
            } 
            arr_52 [i_7] = ((((/* implicit */int) var_6)) + (arr_33 [i_7] [i_7] [i_7] [i_7]));
            arr_53 [i_7] [i_8] [i_7] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 4294967289U)) ? (arr_23 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned int) (~(arr_28 [i_7] [i_8] [(unsigned short)8])))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) arr_27 [i_7] [i_7]))));
        }
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) ((unsigned short) var_0));
            var_28 = ((unsigned int) arr_40 [i_7]);
        }
        /* vectorizable */
        for (unsigned int i_16 = 1; i_16 < 19; i_16 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_7] [i_7] [i_16 + 2] [i_7] [1])) ? (arr_47 [(unsigned short)8] [i_7] [3] [i_17]) : (((/* implicit */unsigned int) arr_48 [i_7] [i_7] [17] [i_17] [11U]))));
                var_30 = ((/* implicit */int) var_12);
                arr_61 [i_7] [i_16] [13] = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4000740682U) : (276706480U));
                var_31 = arr_4 [i_16 + 1] [i_16];
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    for (int i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        {
                            arr_67 [7U] [i_16] [i_16] [i_7] [i_18] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)51878)) != (((/* implicit */int) (unsigned short)3)))) ? (arr_17 [i_7] [i_7] [i_7]) : (((/* implicit */int) arr_59 [i_16] [i_16] [(unsigned short)17] [i_7]))));
                            arr_68 [i_17] [i_7] [i_7] = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            }
            for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) 
            {
                arr_71 [i_20] [i_16 - 1] [i_20] [i_7] = ((/* implicit */unsigned int) 1159572721);
                arr_72 [i_7] = 625673118U;
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63488)))));
                arr_73 [6U] [i_7] [i_7] [i_7] = ((/* implicit */int) var_9);
                arr_74 [i_7] [10U] [0] [1] = arr_57 [i_7];
            }
            for (unsigned short i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2048))) : (4294967285U)))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_7] [i_7] [6U])) ? (((/* implicit */int) (unsigned short)1958)) : (((/* implicit */int) (unsigned short)56391))))));
                arr_78 [i_7] [i_7] = ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_16] [7U] [7U])) && (((/* implicit */_Bool) (unsigned short)63578))));
            }
            for (int i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                arr_82 [19U] [19U] [i_7] [i_7] = ((/* implicit */unsigned int) arr_29 [i_16]);
                var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_11))))));
            }
            var_35 = arr_30 [i_7] [i_7] [i_7] [(unsigned short)5] [i_7] [i_7];
        }
        for (int i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_24 = 1; i_24 < 20; i_24 += 1) 
            {
                for (int i_25 = 1; i_25 < 20; i_25 += 1) 
                {
                    {
                        arr_89 [i_7] = ((/* implicit */unsigned int) ((4294967295U) == (((/* implicit */unsigned int) -1831518058))));
                        var_36 = ((/* implicit */int) ((unsigned int) -1073016614));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned short) (~(((2147483633) >> (((max((arr_65 [i_23]), (2858311830U))) - (2858311806U)))))));
            var_38 = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) ((0U) != (3869707440U)))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_26 = 0; i_26 < 21; i_26 += 3) 
        {
            arr_92 [i_7] [i_26] [i_7] = ((((/* implicit */_Bool) arr_55 [i_7] [i_7] [i_7])) ? (3446194519U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_7] [i_26] [i_26]))));
            var_39 = var_1;
            var_40 = ((((((/* implicit */_Bool) arr_79 [i_7] [i_7])) || (((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7] [(unsigned short)18] [i_26] [i_26])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_7] [10U] [18U]))) : (261120U));
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 3729165040U))) ? (arr_64 [i_26]) : (arr_36 [i_26] [i_7] [i_7] [i_7] [i_7])));
            var_42 = ((/* implicit */unsigned short) arr_84 [i_26] [i_7] [i_7]);
        }
        /* vectorizable */
        for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
        {
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_13)) > (var_2)));
            arr_95 [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) 310474728)) : (var_4)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34986))) / (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_27] [i_27] [i_27]))));
        }
        for (unsigned short i_28 = 3; i_28 < 20; i_28 += 2) 
        {
            arr_99 [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_28 - 3])) - (arr_88 [i_7])))), (arr_34 [i_7])));
            arr_100 [i_7] [i_28] [i_7] = ((/* implicit */unsigned int) arr_86 [i_28 + 1] [i_28 + 1] [i_28 + 1] [i_28 - 2]);
        }
        arr_101 [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_28 [9U] [i_7] [i_7]))))));
    }
}
