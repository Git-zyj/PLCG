/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165993
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
    var_12 |= ((unsigned char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */short) var_2);
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(arr_0 [i_1 - 1]))))));
            arr_4 [4ULL] [i_1] [i_0] = ((/* implicit */unsigned int) var_0);
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned short) arr_0 [(short)1])))));
        }
        for (short i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_9 [i_2] [(unsigned char)8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 2]))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((short) var_7)))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_18 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [(unsigned char)8] [i_2 + 1] [i_4] [i_2 + 1]))));
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [(short)8] [11U] [i_2]))));
                        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [(unsigned short)2]))));
                        arr_16 [i_2] [i_2] [i_0] [5ULL] [i_3] [(unsigned char)3] = ((/* implicit */unsigned short) arr_6 [i_0] [5ULL]);
                    }
                } 
            } 
            var_21 |= ((/* implicit */unsigned char) var_9);
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [(short)8] [i_2]))));
        }
        arr_17 [10ULL] [i_0] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_18 [i_5] [i_5]))));
        var_24 = ((unsigned char) var_10);
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                var_26 = ((/* implicit */unsigned int) min((var_26), (((unsigned int) var_10))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    arr_29 [i_6 + 1] [i_7] [i_7] [i_7] = ((unsigned long long int) arr_25 [i_6 + 1] [i_6] [18LL]);
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned char) arr_28 [i_6] [i_6 - 1] [(signed char)18] [i_6 + 1])))));
                    arr_30 [18U] [i_8] [(unsigned char)2] |= ((/* implicit */unsigned char) var_7);
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    arr_34 [i_6] [i_7] [(unsigned char)13] = ((/* implicit */signed char) arr_24 [3U] [(unsigned short)4] [(unsigned short)19]);
                    arr_35 [i_7] [i_7] [i_7] = ((/* implicit */int) arr_27 [i_6] [19U] [i_6 + 1]);
                    var_29 = ((/* implicit */short) min((var_29), (((short) arr_24 [i_6 - 1] [i_6 + 1] [i_6 + 1]))));
                    var_30 += ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)45238))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_22 [i_6 + 1]))));
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_9))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */signed char) var_4);
                    var_34 = ((/* implicit */unsigned long long int) ((unsigned char) var_1));
                    arr_45 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_39 [i_7] [i_6 + 1] [i_7] [(unsigned short)7]))));
                }
                for (unsigned short i_13 = 2; i_13 < 21; i_13 += 3) /* same iter space */
                {
                    arr_48 [17] [i_7] [9U] = ((/* implicit */unsigned short) ((signed char) ((signed char) var_6)));
                    arr_49 [i_7] = ((signed char) ((long long int) (-(((/* implicit */int) arr_31 [i_7])))));
                }
                /* vectorizable */
                for (unsigned short i_14 = 2; i_14 < 21; i_14 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                    arr_54 [i_7] [(unsigned char)0] [i_7] = ((/* implicit */unsigned char) arr_32 [i_6 - 1] [7U] [20ULL] [i_14 + 2]);
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            {
                                var_36 = ((unsigned char) arr_28 [i_6 + 1] [i_15] [(_Bool)1] [4U]);
                                var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)8605))));
                                var_38 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_26 [i_6] [i_7])))));
                                var_39 = ((/* implicit */long long int) arr_52 [(unsigned short)6] [i_7] [(unsigned char)1] [(short)0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        for (long long int i_18 = 3; i_18 < 23; i_18 += 4) 
                        {
                            {
                                arr_67 [2U] [8ULL] [4ULL] [i_17] [i_18] [6LL] [(short)10] |= ((/* implicit */unsigned char) var_6);
                                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((unsigned char) arr_28 [i_6 + 1] [i_6 - 1] [(short)0] [12LL])))));
                                var_41 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_59 [i_6 + 1] [9U] [22LL] [i_17] [i_18]))));
                                var_42 = ((/* implicit */unsigned int) ((long long int) arr_59 [(short)2] [17ULL] [(short)14] [i_17] [(unsigned char)3]));
                                var_43 = ((/* implicit */unsigned long long int) arr_44 [i_7] [i_7] [i_17] [(unsigned char)14]);
                            }
                        } 
                    } 
                }
                var_44 = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
    var_45 = ((/* implicit */short) var_8);
    var_46 = var_6;
}
