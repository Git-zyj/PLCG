/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120341
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-((-(var_13)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((/* implicit */long long int) (unsigned short)7);
            var_19 = ((/* implicit */unsigned int) arr_3 [i_1] [i_0]);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (unsigned char)35);
                        arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) max(((unsigned short)0), (((unsigned short) arr_9 [i_0] [i_1]))));
                        arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])) : (18446744073709551603ULL))), (((/* implicit */unsigned long long int) 7700078639449911641LL))));
                    }
                } 
            } 
        }
        var_21 ^= ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((7342947499266322613LL), (((/* implicit */long long int) (unsigned short)65529)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) (signed char)-124);
                    arr_22 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) (((((+(arr_21 [i_4] [i_5] [i_6]))) & (((/* implicit */int) var_6)))) ^ (((/* implicit */int) arr_20 [i_4] [i_5]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned int) (+(((var_5) << (((((((/* implicit */_Bool) arr_23 [i_8])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7]))))) - (6687519336448916433ULL)))))));
                var_25 *= ((/* implicit */unsigned short) var_12);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    arr_31 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
                    var_26 = ((/* implicit */signed char) 295530270U);
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            {
                                arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2559081334U)) / (((11166130215338873044ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_7] [i_9] [i_9] [i_10] [i_11] [i_9])))))));
                                arr_38 [i_11] [i_8] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_30 [i_7] [i_8] [i_9]))) ? (arr_30 [i_8] [i_10 + 1] [i_11]) : (arr_26 [i_10] [i_10])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_12 = 4; i_12 < 8; i_12 += 4) 
    {
        var_27 = ((/* implicit */long long int) max(((~(max((var_12), (((/* implicit */unsigned long long int) (unsigned short)65535)))))), (((((/* implicit */unsigned long long int) arr_26 [i_12] [i_12])) - (min((((/* implicit */unsigned long long int) var_9)), (4746752238000317810ULL)))))));
        /* LoopNest 3 */
        for (long long int i_13 = 3; i_13 < 10; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 2; i_15 < 8; i_15 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) (-(2809099701093014225LL)));
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            arr_50 [i_15] [i_13] [i_14] [i_15] = ((/* implicit */unsigned short) arr_0 [i_13]);
                            var_29 |= ((/* implicit */unsigned int) (~((-(arr_10 [i_15] [i_12] [i_13] [i_13 - 3] [i_12] [i_12 - 2])))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) (unsigned short)45882)))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_15 + 1] [i_15 + 3])) ? (min((((/* implicit */unsigned int) arr_16 [i_15 + 1] [i_15 + 1])), (1735885962U))) : (((/* implicit */unsigned int) max((arr_16 [i_15 + 2] [i_15 + 3]), (arr_16 [i_15 - 1] [i_15 + 2]))))));
                        }
                        var_32 ^= ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_54 [i_12] = ((/* implicit */short) arr_47 [i_12] [i_12] [i_12] [i_12]);
        var_33 -= ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) (_Bool)1)));
    }
    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 3) 
    {
        var_34 *= ((/* implicit */unsigned long long int) max(((-(arr_30 [i_18] [i_18] [i_18]))), (((/* implicit */int) (signed char)-61))));
        var_35 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_15 [i_18])))) ? ((+(((/* implicit */int) arr_55 [i_18] [i_18])))) : ((~(((/* implicit */int) var_2)))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 4) 
        {
            for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
            {
                for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (arr_69 [i_19] [i_20] [i_19] [i_22] [i_19]) : (8534699618399464921ULL))), (((/* implicit */unsigned long long int) (~((~(3511187731U))))))));
                        arr_71 [i_19] = ((/* implicit */short) var_12);
                        arr_72 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_68 [i_22]) < (arr_65 [i_20]))))) <= (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)6999)), (var_16)))), (min((((/* implicit */unsigned long long int) arr_59 [i_19])), (arr_68 [i_19])))))));
                        var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_65 [i_19])) && (((/* implicit */_Bool) arr_65 [i_20])))) ? (max((2980754836359334187LL), (2809099701093014204LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_19]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_23 = 0; i_23 < 25; i_23 += 1) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                for (long long int i_25 = 0; i_25 < 25; i_25 += 1) 
                {
                    {
                        var_38 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_76 [i_25] [i_24] [i_23] [i_19])) ? (arr_76 [i_19] [i_23] [i_25] [i_25]) : (arr_66 [i_19] [i_23] [i_24] [i_25])))));
                        var_39 += (short)-7000;
                        var_40 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) 127))));
                    }
                } 
            } 
        } 
    }
}
