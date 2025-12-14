/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154893
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
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_2] [i_1 + 2] [i_1] [i_1 - 1] [i_1]))) ? (arr_11 [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 2] [i_0 - 4] [(unsigned char)7]))))))));
                        var_11 = ((/* implicit */signed char) var_5);
                        arr_12 [i_3] [i_2] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((19LL), (((/* implicit */long long int) 3022712192U)))), (((/* implicit */long long int) arr_0 [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)9]))) : (-20LL)));
                    }
                } 
            } 
        } 
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (~(13062713438654482700ULL))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 4] [i_0 - 4] [i_0 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_1 [(unsigned short)9])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0]))))))));
        arr_13 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0 + 1]))), ((~(13062713438654482721ULL)))));
        /* LoopSeq 3 */
        for (unsigned short i_4 = 1; i_4 < 6; i_4 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                var_13 = ((((/* implicit */_Bool) arr_5 [i_5 + 2] [6])) ? ((-(arr_17 [i_0 + 1] [i_4] [i_5 - 1] [i_5 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_4] [i_4] [i_0] [i_5]))));
                arr_19 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_5 - 1])) ? (arr_3 [i_0] [i_5 + 1]) : (arr_3 [i_5] [i_5 + 2])));
            }
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_14 &= ((/* implicit */int) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_4] [i_4]))))) ? (max((((/* implicit */unsigned long long int) arr_21 [(unsigned short)2] [1] [i_0] [i_0])), (4397979402240ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_25 [i_7])), (arr_17 [i_0] [i_4] [i_6] [i_7])))))));
                    var_16 = ((/* implicit */unsigned long long int) (unsigned short)65527);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_26 [i_0] [i_7]))))))));
                }
                var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_4 + 4] [5U])) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_4] [i_0] [(unsigned char)4])))));
                var_19 &= ((/* implicit */int) arr_1 [i_0]);
            }
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */short) (+(arr_2 [(_Bool)1])));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_0 [i_10]);
                            arr_35 [i_0] [i_0 + 1] [i_0 + 1] [4ULL] [i_0 + 1] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) (+(arr_11 [i_0] [(_Bool)1])));
            }
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) -128775654)) / (1073741823U)));
                arr_38 [(_Bool)1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) var_8)), ((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (+(arr_33 [i_0 - 3] [i_0 - 3] [i_0 - 3] [(short)1] [9]))))) || (((/* implicit */_Bool) ((unsigned short) (~(arr_3 [i_4 + 3] [0U])))))));
            }
            arr_39 [i_0] = ((/* implicit */unsigned short) var_8);
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_25 = (+(((((/* implicit */_Bool) arr_42 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_13])) ? (arr_16 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 4]) : (((/* implicit */unsigned long long int) arr_26 [i_4] [i_4 - 1])))));
                            arr_49 [i_13] [i_13] [i_12] [i_4] [i_13] = ((/* implicit */unsigned short) arr_22 [i_0] [i_4 + 3] [i_0 - 4]);
                            arr_50 [5U] [i_4] [i_12] [i_13] [i_13] = (!(((/* implicit */_Bool) ((signed char) ((unsigned short) arr_21 [i_0] [i_4] [i_12] [i_13])))));
                        }
                    } 
                } 
            } 
            var_26 = min((arr_44 [i_0 - 3] [i_0 + 1] [i_4 + 2] [i_4 + 1]), (((arr_44 [i_0 - 1] [i_0 + 1] [i_4 + 4] [i_4 + 4]) ^ (((/* implicit */int) (_Bool)1)))));
            var_27 = ((/* implicit */unsigned long long int) (_Bool)0);
        }
        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 1; i_16 < 8; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    {
                        var_28 |= ((/* implicit */short) arr_30 [i_17] [i_15]);
                        arr_57 [i_0] [(unsigned short)3] [i_16] [i_16] [i_17] = ((/* implicit */_Bool) ((signed char) var_4));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                for (unsigned int i_19 = 2; i_19 < 9; i_19 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) min(((+(0))), ((+(((/* implicit */int) var_7))))));
                        arr_64 [i_0] [i_18] [i_18] [4LL] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_18])) / (((/* implicit */int) arr_7 [(_Bool)1] [i_15] [(_Bool)1] [i_19]))))) ? (((/* implicit */int) ((short) arr_27 [i_0 - 3] [i_15] [i_15]))) : (((/* implicit */int) arr_58 [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_19 - 1] [i_19 - 2] [i_19 - 2])) ? (3221225471U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_18])))))));
                        var_30 &= (!(max((arr_6 [i_19 - 2] [i_19] [1ULL] [(_Bool)1]), (arr_6 [i_19 + 1] [i_19] [5] [i_19]))));
                    }
                } 
            } 
        }
        for (long long int i_20 = 2; i_20 < 7; i_20 += 4) 
        {
            var_31 = ((/* implicit */_Bool) -1638598177);
            var_32 = var_7;
            var_33 = ((/* implicit */short) arr_30 [(_Bool)1] [i_20 + 1]);
        }
        var_34 = ((/* implicit */int) min(((short)10652), ((short)5384)));
    }
    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
    {
        var_35 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
        /* LoopNest 2 */
        for (unsigned short i_22 = 0; i_22 < 23; i_22 += 1) 
        {
            for (long long int i_23 = 2; i_23 < 20; i_23 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (unsigned int i_25 = 2; i_25 < 22; i_25 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [i_23 - 1] [i_22] [i_21])))))))));
                                var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(0)))) - (var_2)));
                                var_38 = ((/* implicit */int) 13062713438654482724ULL);
                                var_39 = ((/* implicit */unsigned long long int) max((((long long int) arr_75 [i_21] [i_21])), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) arr_80 [i_23 + 2] [i_22] [i_22] [(unsigned short)22])))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (+(min((7LL), (((/* implicit */long long int) arr_76 [i_21] [(signed char)4] [i_21 - 1] [i_21])))))))));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */int) var_0);
    var_42 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) var_1))));
    var_43 = ((/* implicit */_Bool) max(((-(512835059))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_6)))));
}
