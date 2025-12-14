/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118524
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~((+(((/* implicit */int) var_1))))))) / (((((/* implicit */_Bool) var_8)) ? ((+(-1LL))) : ((+(var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_0 + 2] [i_1] [i_2] [i_0 + 2])) <= (((min((((/* implicit */long long int) arr_2 [i_3] [i_0])), (-1LL))) % (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) 15LL)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 2])) * ((+(((/* implicit */int) var_2))))))))))));
                            arr_11 [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((long long int) arr_8 [i_3] [i_2] [i_1]));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_0 + 1] [i_0 + 1])))))))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_16 ^= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_7)))))) != (((min((((/* implicit */long long int) arr_6 [5LL] [i_1] [i_4] [i_5 - 1])), (arr_9 [i_0] [i_0] [i_0] [13ULL]))) - (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(255U))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                var_18 *= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_4 [i_5 + 2] [14U] [i_0 + 2]), (((/* implicit */short) var_9))))), (min((((/* implicit */int) arr_4 [i_5 + 2] [i_1] [i_0 - 1])), (var_7)))));
                                arr_18 [i_0] [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) var_10);
                                arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_5] = ((/* implicit */short) arr_14 [i_1] [i_1]);
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_1 [i_0 - 2]))));
                                arr_22 [i_0 + 2] [i_5] [i_0 + 2] [i_0 + 2] [i_5] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(arr_7 [12U] [i_4])))), (arr_6 [2ULL] [i_1] [i_1] [i_1])));
                            }
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (min((((var_3) & (arr_20 [i_0] [i_0 + 2] [i_1] [i_4] [i_5] [i_5]))), (var_3)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((max(((~(var_4))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) 18446744073709551615ULL))), (var_3))))));
    /* LoopSeq 3 */
    for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_23 [i_8 - 1]))) && (((/* implicit */_Bool) min((arr_23 [i_8]), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((3ULL) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((7U), (((/* implicit */unsigned int) (short)1006))))), (arr_23 [i_8 + 1])))))))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (+(var_8)))), (((16421626116125239792ULL) + (((/* implicit */unsigned long long int) arr_25 [i_8])))))) < (((/* implicit */unsigned long long int) (+(arr_25 [i_8])))))))));
    }
    for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_10 = 2; i_10 < 19; i_10 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_24 [i_9 + 4] [i_9 + 2])), (arr_25 [i_9 + 4]))), ((~(arr_25 [i_9 + 4])))));
            var_28 = (-(arr_25 [i_10]));
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) min((6322488676445435229LL), (((/* implicit */long long int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 1; i_13 < 19; i_13 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) max((arr_23 [i_9 + 1]), (((((/* implicit */long long int) 1681720242)) / (-5635668225652998119LL))))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((long long int) (-(arr_30 [i_9 + 4] [i_10 - 1] [i_13 + 3])))))));
                        }
                        for (long long int i_14 = 1; i_14 < 19; i_14 += 4) /* same iter space */
                        {
                            var_32 = var_5;
                            var_33 = ((/* implicit */unsigned int) ((long long int) arr_29 [i_14 + 1] [i_14 + 2] [i_14 + 1]));
                        }
                        var_34 |= ((/* implicit */unsigned int) arr_39 [i_9] [i_9 + 4] [i_10 - 1] [i_9 + 4] [i_10] [i_11] [i_9]);
                        var_35 = ((/* implicit */unsigned short) arr_43 [i_10 + 3] [i_10 - 1] [i_10 - 2] [i_10] [i_9 + 3] [i_9 + 2] [i_9]);
                    }
                } 
            } 
            var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (arr_32 [i_9 + 3] [i_9 + 3] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_10] [i_10] [i_10 - 2] [i_10] [i_10] [i_10] [i_9]))) : (9636702802955118755ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46257))))) * (((/* implicit */int) ((arr_32 [i_9] [i_9 - 1] [i_9]) > (arr_28 [i_9])))))))));
        }
        for (long long int i_15 = 2; i_15 < 19; i_15 += 1) /* same iter space */
        {
            var_37 = ((long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_9]))) > (620648895959203505ULL))))));
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    {
                        var_38 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_41 [i_17] [i_16] [14]))))) >= (arr_26 [i_9])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_6))));
                            var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                            var_41 = arr_28 [i_9 - 1];
                            var_42 ^= ((/* implicit */unsigned long long int) arr_28 [i_9]);
                            var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) (+(arr_29 [i_9 + 2] [i_15] [i_15 + 1]))))));
                        }
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) var_10))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_45 &= ((/* implicit */signed char) arr_53 [i_19]);
        var_46 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (arr_41 [i_19] [i_19] [i_19]))))) : (((unsigned int) var_1))))) - (min(((-(arr_31 [i_19] [i_19] [(_Bool)1]))), (((((/* implicit */unsigned long long int) 4294967291U)) | (arr_10 [i_19])))))));
        /* LoopNest 3 */
        for (long long int i_20 = 2; i_20 < 14; i_20 += 2) 
        {
            for (long long int i_21 = 1; i_21 < 13; i_21 += 4) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_23 = 0; i_23 < 15; i_23 += 1) 
                        {
                            arr_66 [13LL] [i_20 - 1] [13LL] [i_21 + 1] [i_22] [i_23] [i_23] = ((((/* implicit */long long int) var_7)) - (max((((/* implicit */long long int) arr_5 [i_20 - 2] [i_20 - 2] [i_22] [i_23])), (arr_0 [i_19]))));
                            var_47 += ((/* implicit */signed char) min(((+(min((((/* implicit */long long int) var_0)), (arr_46 [(unsigned short)4] [i_21] [i_22] [8ULL]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), (-1)))))))));
                            var_48 ^= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_47 [14LL] [i_20 - 1] [14LL] [i_22])) : (((/* implicit */int) arr_50 [i_19] [i_20 - 2] [i_21 + 1] [i_22] [i_20]))))));
                            var_49 = arr_65 [i_19];
                            arr_67 [i_22] [i_22] [i_22] [i_22] [i_23] = ((/* implicit */long long int) (~((((+(((/* implicit */int) var_9)))) + (((/* implicit */int) arr_41 [i_20 - 2] [i_22] [i_23]))))));
                        }
                        /* vectorizable */
                        for (long long int i_24 = 2; i_24 < 11; i_24 += 4) 
                        {
                            var_50 ^= ((/* implicit */_Bool) ((long long int) ((unsigned int) arr_12 [i_19] [i_19])));
                            var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) arr_13 [12U] [12U] [12U]))));
                            arr_71 [i_19] [i_20 - 1] [i_22] [i_22] [i_24 + 2] = ((/* implicit */unsigned int) arr_24 [i_20] [i_19]);
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 1) 
                        {
                            var_52 = ((/* implicit */long long int) var_7);
                            arr_75 [i_19] [i_20] [i_21] [i_22] [i_25] = ((/* implicit */_Bool) arr_59 [i_19] [i_20] [i_21] [10LL] [i_25]);
                            arr_76 [i_19] [i_20] [i_20] [i_22] [i_20] = ((/* implicit */unsigned int) var_3);
                        }
                        arr_77 [12LL] [i_22] [6LL] [i_22] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) min((var_7), (((/* implicit */int) (short)15008)))))) * (max((arr_31 [i_19] [2U] [i_22]), (((/* implicit */unsigned long long int) ((long long int) arr_58 [i_19] [i_20] [i_21] [i_19])))))));
                    }
                } 
            } 
        } 
    }
}
