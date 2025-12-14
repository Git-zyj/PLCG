/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179610
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_12 [i_2] [i_3] [i_4])))) : (var_11)));
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_3] [6U] = ((((/* implicit */_Bool) 4294967295U)) ? (4948517353315460118ULL) : (13498226720394091493ULL));
                            }
                        } 
                    } 
                    var_13 -= ((/* implicit */_Bool) ((signed char) ((unsigned short) (-(var_0)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    var_14 ^= ((unsigned long long int) ((unsigned char) (-(var_5))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                arr_31 [i_5] [3ULL] [i_6] [i_7] [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned long long int) (+(902779321)));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) arr_18 [i_5] [i_5]))))) && (((/* implicit */_Bool) var_5)))))) > (((max((((/* implicit */unsigned long long int) arr_2 [i_6] [i_5])), (4948517353315460124ULL))) >> (((((/* implicit */int) arr_6 [i_6])) + (134)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) max((var_16), (((((((/* implicit */_Bool) 4294967295U)) ? (arr_8 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))))) != ((+(arr_8 [i_7])))))));
                    var_17 = ((/* implicit */signed char) ((3226318914232109593ULL) <= (max((18446744073709551596ULL), (13498226720394091493ULL)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */int) var_5);
            /* LoopSeq 1 */
            for (signed char i_11 = 3; i_11 < 10; i_11 += 2) 
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_9 [i_10] [i_10]))));
                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_11 - 3] [i_11] [i_11 - 2]))));
            }
            arr_36 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)241))))) ? (((4948517353315460118ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)0)))));
            arr_37 [i_5] [i_5] = arr_29 [i_5] [i_5] [i_10] [i_5] [3ULL];
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 9; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            arr_47 [i_5] [i_5] [i_5] [i_5] [(signed char)9] [2U] [i_5] = (!(((/* implicit */_Bool) (unsigned char)255)));
                            var_21 = var_3;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    arr_51 [i_5] [i_12] [i_10] [i_5] = ((/* implicit */signed char) (_Bool)1);
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)59079))));
                    arr_52 [2ULL] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-17))));
                    arr_53 [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 8375132415615293385ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_5]))))));
                    var_23 = var_0;
                }
                arr_54 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                arr_55 [i_5] [i_5] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_12 [i_5] [i_5] [i_12]))))));
                var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_12] [i_10] [i_10] [i_5])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_2))));
            }
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
        {
            var_25 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        {
                            var_26 = ((unsigned short) 6409767745470370948ULL);
                            var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 8845369019362103402ULL)) ? (((/* implicit */int) arr_59 [i_5] [i_17])) : (((/* implicit */int) arr_0 [i_5]))))));
                            arr_66 [i_5] [i_5] [i_5] [i_5] [i_18] [i_19] = (unsigned short)65535;
                            arr_67 [i_19] [i_5] [i_5] [i_17] [i_5] [(unsigned char)8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (arr_61 [i_5] [i_5]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_50 [(signed char)4] [i_5] [i_16] [i_16] [i_17]))));
                var_29 = var_10;
            }
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
            var_31 = (~(((/* implicit */int) arr_64 [i_5] [i_5] [i_16] [i_5] [i_16] [i_16])));
        }
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
    {
        var_32 = ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
        arr_70 [i_20] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
        var_33 = ((/* implicit */unsigned short) max((var_33), (((unsigned short) arr_69 [i_20]))));
        var_34 = (+(arr_68 [i_20]));
        arr_71 [i_20] = ((/* implicit */unsigned long long int) (!((!(var_4)))));
    }
    var_35 = ((/* implicit */unsigned int) var_4);
}
