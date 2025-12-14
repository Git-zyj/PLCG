/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175852
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) var_2);
            arr_5 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                arr_10 [i_0] = ((/* implicit */int) var_12);
                var_16 ^= var_9;
                arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))), (var_13)));
                arr_12 [i_0] [5ULL] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_9))))))), (max((2836532088048345893ULL), (244968572415178755ULL)))));
                arr_13 [i_2] [i_1] [(unsigned char)2] = ((/* implicit */int) min((max((max((var_12), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) var_6))));
            }
            for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_17 = ((/* implicit */_Bool) var_2);
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_6))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_8)), (var_12)))))));
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(var_5))))))));
                var_21 = ((/* implicit */unsigned long long int) var_10);
            }
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_21 [i_0] [i_5] = ((/* implicit */int) var_1);
            /* LoopSeq 2 */
            for (unsigned int i_6 = 4; i_6 < 17; i_6 += 1) 
            {
                arr_26 [i_0] [i_0] [i_0] [(signed char)6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), ((~(25ULL)))));
                arr_27 [i_5] [i_5] [i_5] = ((/* implicit */short) min((var_0), (var_0)));
                arr_28 [i_0] [i_5] &= ((/* implicit */unsigned int) var_8);
            }
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                var_22 = ((/* implicit */_Bool) var_5);
                var_23 = ((/* implicit */_Bool) var_11);
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_24 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))), (var_12));
                            var_25 = ((/* implicit */long long int) (+(var_10)));
                            arr_38 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
            var_27 |= ((/* implicit */unsigned int) (-((~(max((((/* implicit */int) var_9)), (var_10)))))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(var_11))))));
            arr_41 [i_0] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10))))))), (min((var_11), ((-(var_11)))))));
        }
        arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (var_8))))));
        /* LoopSeq 2 */
        for (int i_11 = 1; i_11 < 18; i_11 += 1) 
        {
            var_29 = var_7;
            arr_46 [i_11] [i_11 - 1] [i_11 - 1] = var_13;
        }
        for (short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        {
                            arr_59 [i_0] [i_12] [i_12] [i_14] [i_15] = ((/* implicit */long long int) min(((+(var_11))), ((+(((/* implicit */int) var_8))))));
                            var_30 *= ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */int) min((var_31), (var_11)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                arr_62 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_10))))));
                var_32 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
            }
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_10))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    var_34 = ((/* implicit */_Bool) var_4);
                    var_35 = (-(((/* implicit */int) var_6)));
                }
            }
            for (unsigned short i_19 = 0; i_19 < 19; i_19 += 1) 
            {
                var_36 = ((/* implicit */long long int) (-((~(min((((/* implicit */unsigned int) var_0)), (var_1)))))));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 16; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 19; i_21 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)244))))));
                            arr_74 [i_0] [i_0] [i_12] [i_20 - 1] [i_21] = ((/* implicit */unsigned int) max((max(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_8)))))), (min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                arr_75 [i_12] = ((/* implicit */short) (!((!((!(var_0)))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_22 = 1; i_22 < 18; i_22 += 3) 
            {
                var_38 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_13))));
                arr_78 [i_12] = ((/* implicit */int) var_9);
                var_39 = ((/* implicit */unsigned short) var_8);
                var_40 -= (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_4))))))));
            }
        }
        arr_79 [i_0] [i_0] |= ((/* implicit */short) var_6);
    }
    for (unsigned short i_23 = 0; i_23 < 19; i_23 += 1) /* same iter space */
    {
        var_41 &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (long long int i_24 = 0; i_24 < 19; i_24 += 1) 
        {
            var_42 = ((/* implicit */int) var_1);
            var_43 = ((/* implicit */unsigned short) var_5);
            var_44 += ((/* implicit */unsigned char) min((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
    }
    for (int i_25 = 0; i_25 < 23; i_25 += 1) 
    {
        arr_89 [(unsigned short)6] [10] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-((~(var_10)))))), (max((max((((/* implicit */long long int) var_10)), (var_5))), (((/* implicit */long long int) var_7))))));
        arr_90 [i_25] [i_25] = ((/* implicit */int) (!(var_7)));
    }
    for (unsigned long long int i_26 = 1; i_26 < 7; i_26 += 1) 
    {
        var_45 = ((/* implicit */short) max((((/* implicit */unsigned int) var_13)), (var_4)));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 10; i_27 += 1) 
        {
            for (int i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                {
                    var_46 &= ((/* implicit */_Bool) min((max((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))))), ((~(var_4)))));
                    var_47 = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 3) 
                    {
                        arr_103 [i_27] [i_28] = ((/* implicit */unsigned char) var_13);
                        /* LoopSeq 1 */
                        for (unsigned char i_30 = 0; i_30 < 10; i_30 += 2) 
                        {
                            var_48 = ((/* implicit */_Bool) (~(var_1)));
                            var_49 = (+(((/* implicit */int) var_3)));
                        }
                        var_50 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) max((var_6), (var_7))))))), (min((((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_3))))), (var_4)))));
                    }
                }
            } 
        } 
        var_51 -= ((/* implicit */long long int) max((((/* implicit */int) var_8)), ((-(var_2)))));
    }
    var_52 = var_10;
    /* LoopSeq 3 */
    for (unsigned short i_31 = 0; i_31 < 25; i_31 += 1) 
    {
        var_53 &= ((/* implicit */long long int) var_7);
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 25; i_32 += 2) 
        {
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                {
                    arr_117 [i_32] [i_32] [i_32] [i_32] &= max((((/* implicit */unsigned int) max((var_2), (((/* implicit */int) (!(var_0))))))), (max((((/* implicit */unsigned int) (!(var_7)))), (var_1))));
                    var_54 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                    var_55 = ((/* implicit */short) var_2);
                    var_56 = ((/* implicit */short) (-((-((~(((/* implicit */int) var_6))))))));
                    var_57 += ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_7)))), (max(((+(((/* implicit */int) var_9)))), (var_11)))));
                }
            } 
        } 
    }
    for (signed char i_34 = 2; i_34 < 23; i_34 += 1) 
    {
        var_58 *= ((/* implicit */unsigned int) var_5);
        /* LoopNest 3 */
        for (short i_35 = 0; i_35 < 24; i_35 += 1) 
        {
            for (unsigned long long int i_36 = 0; i_36 < 24; i_36 += 4) 
            {
                for (int i_37 = 0; i_37 < 24; i_37 += 4) 
                {
                    {
                        arr_130 [i_34] [i_34] [i_34] = ((/* implicit */unsigned int) var_10);
                        arr_131 [i_34] [i_34] [8U] [i_37] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                        arr_132 [i_34] = ((/* implicit */short) var_10);
                        var_59 = ((/* implicit */int) var_5);
                    }
                } 
            } 
        } 
        var_60 &= (~((~((~(((/* implicit */int) var_0)))))));
        arr_133 [i_34] [i_34] = ((/* implicit */unsigned int) (~(var_11)));
    }
    for (int i_38 = 0; i_38 < 13; i_38 += 3) 
    {
        arr_136 [6U] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
        var_61 = ((/* implicit */int) max(((-(var_12))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_5))))));
        /* LoopNest 2 */
        for (int i_39 = 2; i_39 < 9; i_39 += 2) 
        {
            for (unsigned short i_40 = 0; i_40 < 13; i_40 += 3) 
            {
                {
                    var_62 = var_11;
                    var_63 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                }
            } 
        } 
        arr_141 [i_38] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    }
    /* LoopNest 2 */
    for (long long int i_41 = 3; i_41 < 17; i_41 += 2) 
    {
        for (unsigned short i_42 = 0; i_42 < 19; i_42 += 2) 
        {
            {
                var_64 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)29))));
                /* LoopNest 2 */
                for (unsigned short i_43 = 0; i_43 < 19; i_43 += 4) 
                {
                    for (int i_44 = 3; i_44 < 15; i_44 += 2) 
                    {
                        {
                            arr_155 [i_41] [i_41] [i_44] [i_44] [i_44 + 3] = ((/* implicit */short) var_10);
                            var_65 *= var_7;
                        }
                    } 
                } 
            }
        } 
    } 
}
