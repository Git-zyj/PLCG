/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148951
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
    var_12 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) min((min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_11)), (var_4)))), (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_8))))), (((/* implicit */long long int) (+(var_7))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(var_2))))));
                arr_7 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */short) (-(((/* implicit */int) var_10))));
                arr_8 [i_0] [i_1] [0] = (+(var_8));
            }
            for (int i_3 = 3; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    arr_13 [i_0] [i_3] [i_0] [i_4] = ((/* implicit */signed char) var_3);
                    arr_14 [i_3] [i_1] [i_1] [i_4] [(unsigned short)10] = ((/* implicit */unsigned short) var_8);
                    arr_15 [i_3] [i_4] [i_3 + 1] [i_4] = ((/* implicit */signed char) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    var_15 *= ((/* implicit */_Bool) ((var_1) << (((/* implicit */int) var_5))));
                    arr_18 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
                }
                for (signed char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_7))))));
                    arr_22 [i_1] [i_3] = ((/* implicit */unsigned char) (~(var_2)));
                    arr_23 [i_0] [i_1] [i_0] [(unsigned short)20] [(unsigned short)0] &= ((/* implicit */long long int) (~(var_7)));
                }
                var_17 += (~(((/* implicit */int) var_5)));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_18 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_2));
                    var_19 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_2));
                    arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_7)));
                }
                for (signed char i_9 = 2; i_9 < 19; i_9 += 4) /* same iter space */
                {
                    arr_34 [i_0] [i_0] [i_1] [i_7] [i_7] [i_9 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2))));
                    arr_35 [i_0] [i_0] [i_1] [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_0))));
                }
                for (signed char i_10 = 2; i_10 < 19; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_5))));
                        arr_41 [i_0] [i_1] [(signed char)8] [i_0] [i_1] [i_11] = ((/* implicit */unsigned short) (+(var_8)));
                        arr_42 [i_0] [i_1] [i_0] [i_10] [i_11] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                        var_22 = ((/* implicit */long long int) min((var_22), ((~(var_2)))));
                        arr_45 [(signed char)19] [i_1] [i_7] [(_Bool)1] [i_12] = ((/* implicit */signed char) var_11);
                    }
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                    arr_46 [i_0] [i_1] [i_1] [i_7] [i_0] = (-(((/* implicit */int) var_10)));
                    arr_47 [i_0] [i_0] [i_7] [i_1] [i_0] [(signed char)5] = (~(((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (signed char i_14 = 3; i_14 < 18; i_14 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(var_8))))));
                            arr_53 [i_7] [i_7] [i_7] [i_7] [i_1] |= ((/* implicit */signed char) (~(var_8)));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(var_8))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
            {
                arr_57 [i_0] [i_0] [(_Bool)1] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                var_26 -= ((/* implicit */unsigned short) var_0);
            }
        }
        for (signed char i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
        {
            arr_61 [i_16] [i_16] [i_0] = ((/* implicit */unsigned long long int) min(((~(var_1))), (((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) << (((var_8) + (1170410786215382376LL)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_64 [i_17] [i_17] = ((/* implicit */int) var_5);
                arr_65 [i_17] [i_16] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_8))))));
            }
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_4))));
                /* LoopSeq 1 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    arr_70 [i_0] [i_0] [i_0] [(signed char)20] [i_19] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))));
                }
            }
            var_30 = ((/* implicit */short) min((min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)36481))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_6)), (var_4))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_21 = 3; i_21 < 20; i_21 += 3) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_2))))));
            var_32 = ((/* implicit */signed char) (~(var_2)));
            var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
        }
        /* LoopSeq 1 */
        for (short i_22 = 0; i_22 < 21; i_22 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 3) 
            {
                arr_79 [i_23] [i_23] [i_23] [i_22] = ((/* implicit */unsigned short) var_11);
                arr_80 [i_23] [i_22] [i_22] [i_20] &= ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) & (((/* implicit */int) var_9))));
            }
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                for (int i_25 = 0; i_25 < 21; i_25 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                        {
                            var_34 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                            arr_88 [i_20] [i_22] [18ULL] [i_20] [i_20] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                        }
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2))))) / (((/* implicit */int) var_9))))));
                            var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                            arr_91 [(unsigned short)0] [i_24] = ((/* implicit */long long int) ((var_5) || (((/* implicit */_Bool) var_0))));
                        }
                        arr_92 [i_20] [i_20] [(unsigned char)14] [i_24] = ((/* implicit */int) var_5);
                    }
                } 
            } 
            arr_93 [(_Bool)1] [i_20] [i_20] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
            arr_94 [i_20] [i_22] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
        }
        arr_95 [i_20] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_6)) / (((/* implicit */int) var_0))))));
        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
    }
}
