/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129296
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
    var_18 = (~(((var_0) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (var_5)))))));
    var_19 = min((((/* implicit */int) var_2)), (((int) ((((/* implicit */unsigned long long int) 2147483647)) - (var_14)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -2824033407451437914LL)))) ? (arr_5 [(unsigned short)7]) : (((int) var_7))));
                    arr_8 [21ULL] [i_1] [0LL] = ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_12 [i_1] [(short)20] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)29))));
                        var_20 = ((/* implicit */_Bool) ((arr_1 [i_3]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (18446744073709551598ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_21 &= var_2;
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) || (((/* implicit */_Bool) var_14))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) (unsigned char)52)) ? (8022088067875219893ULL) : (((/* implicit */unsigned long long int) arr_3 [16ULL] [(unsigned short)1] [i_2]))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0 + 3] [12] = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (var_4)))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((var_4) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65532)) << (((((/* implicit */int) var_15)) - (109)))))))))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) -2732618391895166428LL)) / (((6ULL) * (arr_2 [(short)7] [(unsigned short)19] [i_2]))))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] [6] [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)21140))));
                        var_26 = ((((/* implicit */int) (!(var_0)))) % (((/* implicit */int) (_Bool)1)));
                    }
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16422))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)62899)) ? (arr_5 [i_6]) : (((/* implicit */int) (unsigned char)19)))) : (((/* implicit */int) (_Bool)1))));
                        var_28 -= ((/* implicit */unsigned long long int) (-(var_6)));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_29 = ((/* implicit */int) ((((18446744073709551598ULL) * (((/* implicit */unsigned long long int) var_8)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_24 [i_0] [i_9])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                            var_31 -= ((/* implicit */int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1341824915))))))));
                            var_32 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2732618391895166428LL))));
                            arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_30 [i_0 + 1] [i_11 + 3]) - (393216)));
                            arr_39 [13] [i_9] [i_10] [i_10] [i_11 - 2] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2732618391895166428LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))) != (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_13 = 3; i_13 < 21; i_13 += 2) 
        {
            var_33 = ((/* implicit */unsigned long long int) var_3);
            /* LoopNest 2 */
            for (short i_14 = 1; i_14 < 21; i_14 += 2) 
            {
                for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    {
                        arr_48 [i_15] [i_14] [i_13 - 1] [4] = ((/* implicit */long long int) ((810509675) / (2147483625)));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65532)) ? (15745201318810848875ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746))))))));
                    }
                } 
            } 
            var_35 ^= ((/* implicit */long long int) var_5);
        }
        for (signed char i_16 = 1; i_16 < 19; i_16 += 2) 
        {
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551598ULL)) || (((/* implicit */_Bool) arr_6 [i_16 + 3] [i_16 + 2]))));
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        {
                            arr_61 [i_0 + 3] [i_16] [(_Bool)1] = ((/* implicit */_Bool) (-(var_9)));
                            arr_62 [i_16] [i_17] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_41 [i_0 + 2] [i_16 + 3] [i_17]) != (((/* implicit */int) (unsigned short)18)))))) : (arr_21 [i_16 + 1] [i_16] [i_0 + 3])));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_20 = 2; i_20 < 19; i_20 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((((-2147483647 - 1)) != (((/* implicit */int) (unsigned char)22))))))) % (((/* implicit */int) var_2))));
        var_39 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_12))))));
    }
    var_40 += ((/* implicit */unsigned short) var_9);
}
