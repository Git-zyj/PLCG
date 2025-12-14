/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127822
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_1 [i_0]));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_12 = ((/* implicit */int) (-(var_1)));
                arr_9 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (~(var_0)));
                arr_10 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned long long int) 1874868550);
                arr_11 [5LL] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)38)) : (arr_0 [i_1 - 2]))) : (((/* implicit */int) ((-1874868551) != (((/* implicit */int) arr_5 [i_0] [i_0] [3ULL])))))));
            }
            arr_12 [i_1 + 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_11)))))), (var_5)));
            var_13 = ((/* implicit */unsigned char) var_4);
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_15 [i_3] = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_0))));
            var_14 = ((/* implicit */short) arr_4 [i_0]);
            arr_16 [i_0] [i_3] [i_0] = ((/* implicit */short) (+(1874868555)));
            var_15 = ((/* implicit */unsigned char) arr_14 [i_3] [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_16 = ((/* implicit */_Bool) arr_4 [i_4]);
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 6LL))) != (((/* implicit */int) arr_8 [i_0])))))));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) arr_14 [i_0] [i_4]);
                arr_23 [(signed char)11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0]))));
            }
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            arr_31 [i_0] [i_0] [i_7] [i_0] [14ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)43677)) : (((/* implicit */int) arr_17 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_4] [i_6]))) : (((long long int) var_1))));
                            arr_32 [(signed char)8] [i_7] [i_7] [i_6] [i_7] [0ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                            var_19 = ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_25 [i_0] [(short)0] [i_0]))));
                    var_21 = ((/* implicit */signed char) ((_Bool) 1874868560));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_39 [i_0] [i_10] [i_0] [10U] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0]))));
                        arr_40 [i_0] [i_4] [i_6] [i_10] [i_10] = ((/* implicit */short) var_5);
                        var_22 = ((/* implicit */unsigned long long int) (~(var_4)));
                    }
                    for (unsigned short i_12 = 1; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) arr_29 [i_12] [i_12] [i_10] [i_10] [i_10] [i_6]);
                        arr_43 [i_0] [i_10] [i_0] [(short)10] [i_0] [i_10] [5LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1874868560)) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) 1874868550))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_4] [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [i_0] [i_4] [i_6] [i_13 - 1] [i_13] [i_6]))));
                        var_24 = ((/* implicit */_Bool) (~(arr_30 [i_0] [i_4] [i_4] [i_6] [i_4] [i_13 + 2])));
                        var_25 += ((((/* implicit */_Bool) arr_5 [i_13 + 1] [i_13] [i_13 - 1])) ? (((/* implicit */unsigned long long int) (-(1874868560)))) : (var_5));
                        arr_47 [i_6] [i_6] &= ((/* implicit */unsigned int) (~(var_4)));
                    }
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) arr_4 [i_10])))))));
                    var_27 &= ((/* implicit */unsigned short) var_10);
                    var_28 = ((/* implicit */unsigned char) var_0);
                }
                /* LoopSeq 2 */
                for (short i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) ((18446744073709551593ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96)))));
                    var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_4]))));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        var_31 = ((/* implicit */signed char) 22ULL);
                        var_32 = ((/* implicit */_Bool) arr_20 [i_0]);
                        var_33 = arr_22 [14] [i_6] [i_6] [i_4];
                    }
                    for (int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        arr_56 [i_0] [i_4] [(unsigned short)9] [i_6] [i_6] [i_14] [i_16] &= ((/* implicit */unsigned long long int) ((int) var_5));
                        arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                        arr_58 [i_14] [i_14] = ((/* implicit */short) ((var_4) > (((/* implicit */int) (!(((/* implicit */_Bool) 30ULL)))))));
                        var_34 = var_2;
                    }
                    var_35 += ((/* implicit */unsigned char) var_11);
                }
                for (unsigned short i_17 = 4; i_17 < 17; i_17 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) arr_59 [i_17 + 1] [i_17] [i_17] [i_17 - 1]);
                    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((unsigned long long int) arr_18 [i_17 + 3])))));
                    var_38 = ((/* implicit */int) 18446744073709551586ULL);
                }
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_0))));
            }
            arr_61 [i_4] [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_7)))));
            var_40 = ((/* implicit */unsigned char) arr_28 [i_0] [i_0] [i_4] [i_4] [i_0] [(_Bool)1] [(_Bool)1]);
        }
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((arr_21 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_8)) : (-1874868561)))))) : (((unsigned long long int) -686198050))));
    }
    for (unsigned short i_18 = 0; i_18 < 10; i_18 += 1) 
    {
        arr_65 [i_18] = ((/* implicit */unsigned int) max((var_3), ((+(((((/* implicit */int) arr_6 [i_18])) + (((/* implicit */int) arr_60 [i_18] [i_18] [i_18] [i_18]))))))));
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            var_42 = ((/* implicit */short) ((int) (unsigned short)18));
            arr_69 [i_19] &= ((/* implicit */signed char) (~(((arr_67 [i_19] [i_19] [i_19]) | (((/* implicit */long long int) -1874868547))))));
            arr_70 [i_18] = ((/* implicit */unsigned long long int) ((_Bool) 18446744073709551575ULL));
        }
        arr_71 [i_18] = (((-(max((var_11), (((/* implicit */unsigned int) var_10)))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */int) (unsigned char)100))))) ? (((/* implicit */int) arr_17 [i_18])) : (((/* implicit */int) arr_68 [i_18] [i_18]))))));
        var_43 = ((short) ((((/* implicit */_Bool) 18446744073709551586ULL)) ? (-1874868556) : (((/* implicit */int) (unsigned short)28625))));
    }
    for (unsigned short i_20 = 0; i_20 < 20; i_20 += 1) 
    {
        var_44 += arr_2 [i_20];
        arr_76 [i_20] [i_20] = ((((/* implicit */int) ((unsigned short) var_3))) != (((((/* implicit */int) arr_51 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) ^ (((/* implicit */int) arr_51 [(short)8] [i_20] [i_20] [i_20] [(short)8] [i_20])))));
    }
    var_45 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_8)) ? (18446744073709551581ULL) : (((/* implicit */unsigned long long int) var_4)))) : ((~(6755399441055744ULL)))))));
}
