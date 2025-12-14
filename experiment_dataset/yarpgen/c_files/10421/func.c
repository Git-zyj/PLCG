/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10421
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
    var_14 *= ((/* implicit */signed char) -701164221284518884LL);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((((701164221284518881LL) / (17592177655808LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0])))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_2 [i_0])), (17592177655808LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -701164221284518899LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)103))))) : (max((-701164221284518884LL), (var_7))))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_9 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned short) var_12)), (var_2))));
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_2] &= ((/* implicit */_Bool) max((6597131813602113232ULL), (((/* implicit */unsigned long long int) (unsigned char)122))));
                        var_18 = ((/* implicit */unsigned char) var_2);
                        var_19 += ((/* implicit */int) arr_6 [i_4]);
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 17592177655780LL)) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-127)) * (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_13 [i_6])) ? (1989666753U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [(unsigned short)1] [i_1] [i_1])))))));
                var_22 = ((unsigned long long int) arr_14 [i_1] [i_5] [i_6] [i_6]);
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_24 = ((/* implicit */unsigned char) ((min((2783356980U), (var_9))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17002273930457880542ULL))))))));
                    var_25 = ((/* implicit */short) var_8);
                    arr_25 [i_1] [i_6] [i_5] [i_1] = ((/* implicit */signed char) max((-701164221284518872LL), (((/* implicit */long long int) (signed char)24))));
                }
            }
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? ((~(701164221284518890LL))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (min((((/* implicit */long long int) (unsigned char)128)), (17592177655791LL)))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_33 [i_1] [i_5] [i_1] [i_9] = ((/* implicit */unsigned char) (signed char)119);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 3) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */long long int) var_0);
                            arr_36 [i_1] [i_1] [i_1] [i_1] = arr_29 [i_1] [i_5];
                            var_28 += ((/* implicit */short) ((unsigned short) (unsigned char)23));
                            arr_37 [i_1] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 22; i_11 += 3) /* same iter space */
                        {
                            arr_40 [i_1] [i_5] [i_8] [i_9] [i_1] = ((/* implicit */unsigned int) 7778262483163521270LL);
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) -701164221284518884LL)) ? (701164221284518890LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))) > (((/* implicit */long long int) (+(-259171901)))))))) <= (((((/* implicit */_Bool) arr_15 [i_1] [i_5] [i_8] [i_9] [i_11])) ? ((+(1989666753U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_11]))))))))));
                            arr_41 [14U] [i_9] [i_8] [14U] |= max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_8] [i_11 - 1])) + (((/* implicit */int) var_4))))) - (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5)))))) & (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 3) 
                        {
                            arr_44 [i_12] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned short) max(((unsigned char)192), ((unsigned char)153)));
                            arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)119);
                            arr_46 [i_1] [i_1] [i_1] [16LL] [i_1] |= ((((/* implicit */int) var_12)) >> (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) -2138463211))))));
                        }
                        for (signed char i_13 = 2; i_13 < 21; i_13 += 1) 
                        {
                            arr_50 [(unsigned char)18] [i_5] |= ((/* implicit */short) 1178635366);
                            var_30 = ((/* implicit */unsigned char) var_12);
                        }
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */int) var_12);
        arr_51 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) -701164221284518884LL)))))));
    }
    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        arr_55 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26359)))))) * (((arr_31 [i_14] [i_14]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-3269)))))))) + (((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((((/* implicit */_Bool) (short)32738)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) : (-2020607776643162245LL)))))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            {
                                arr_66 [i_18] [i_17] [i_16] [i_17] [i_14] = ((/* implicit */int) ((((/* implicit */int) ((short) var_1))) != ((+(((/* implicit */int) var_2))))));
                                var_32 -= ((/* implicit */_Bool) ((min((var_7), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)232))))))) & (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    arr_67 [i_14] = ((/* implicit */long long int) 18446744073709551595ULL);
                    arr_68 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_4))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) 2975097783U))));
                        var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18062)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39186)))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_20 = 0; i_20 < 11; i_20 += 3) 
    {
        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            for (unsigned short i_22 = 1; i_22 < 10; i_22 += 3) 
            {
                {
                    arr_78 [i_22] [i_21] [i_21] [i_20] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % ((+(var_9)))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26322)) << (((288230376151709696LL) - (288230376151709692LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (var_8)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_23 = 0; i_23 < 12; i_23 += 3) 
    {
        for (signed char i_24 = 2; i_24 < 11; i_24 += 1) 
        {
            {
                var_36 ^= ((/* implicit */_Bool) var_1);
                var_37 = ((/* implicit */unsigned short) (+(-2138463198)));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)162))));
}
