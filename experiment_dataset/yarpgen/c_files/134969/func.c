/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134969
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = (~((-(((/* implicit */int) var_1)))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_1 [2U]) >= (((/* implicit */int) arr_3 [i_0] [i_0])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max(((unsigned short)40795), (((/* implicit */unsigned short) (signed char)61))));
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((-2147483635) + (2147483647))) >> (((max((((/* implicit */unsigned int) (!(var_15)))), (arr_7 [i_0 + 1] [i_0 - 2] [i_0 - 1]))) - (2629742254U)))));
            var_19 += ((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_0 + 1])) - (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) arr_3 [(signed char)1] [i_2])), ((-(((/* implicit */int) (_Bool)1))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [(_Bool)1] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) 1048575);
            var_20 = (+(arr_4 [i_0]));
            var_21 = ((((arr_12 [i_3] [i_0] [i_0]) >> (((-1048546) + (1048567))))) == (((/* implicit */int) (!(((/* implicit */_Bool) 1048581))))));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_4] [i_3] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1])) < (((((/* implicit */_Bool) arr_15 [i_0] [6] [i_4])) ? (arr_1 [4]) : (-1048571)))));
                arr_17 [i_4] [i_3] = ((/* implicit */_Bool) ((1048546) >> (((1048544) - (1048523)))));
            }
            for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
            {
                arr_20 [i_5] [i_0 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_5 - 2]))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_28 [i_6] [(unsigned short)9] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1] [i_5 + 1] [i_7 + 1])) + (-1048583)));
                            arr_29 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_3] [i_0])) >> (((/* implicit */int) arr_24 [i_3] [i_3] [i_5 - 1] [i_5 - 1]))));
                        }
                    } 
                } 
                arr_30 [12U] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1048583)) || (arr_24 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_5 - 1])));
            }
            for (int i_8 = 3; i_8 < 22; i_8 += 2) 
            {
                arr_34 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1048566)) ? (1048568) : (arr_12 [i_0] [i_3] [i_8])))));
                var_22 = (!(((/* implicit */_Bool) ((-1048581) + (((/* implicit */int) var_4))))));
                var_23 = arr_0 [i_0 - 2];
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) 1048582);
                            var_25 = ((/* implicit */_Bool) (~(1048575)));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_42 [i_11] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 1048596))))));
            var_26 = -1048562;
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 1048575)) && (((/* implicit */_Bool) max((-1048539), (((/* implicit */int) arr_31 [i_11] [i_11] [i_0] [i_0])))))))) == (((/* implicit */int) ((((-1048568) == (-1048546))) || (((/* implicit */_Bool) max((((/* implicit */int) var_1)), (1048580)))))))));
        }
        for (int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_28 ^= ((/* implicit */unsigned short) 1048596);
            var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(arr_38 [i_0 - 1] [i_12] [i_0 - 2] [i_12] [i_0 - 1] [2U] [i_0 - 2])))) - (var_9)));
        }
        for (int i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_30 &= (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1048574)) ? (-1048577) : (1048567)))))));
            var_31 = (~(-1048545));
            /* LoopNest 2 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_54 [i_15] [i_13] [i_15] [i_13] [i_0 - 1] = ((/* implicit */int) arr_31 [i_13] [i_13] [i_13] [i_0]);
                        var_32 *= ((/* implicit */int) ((-1048574) >= (1048573)));
                    }
                } 
            } 
            var_33 += ((/* implicit */int) (!(((((/* implicit */_Bool) ((var_11) / (1048580)))) || (((/* implicit */_Bool) (-(1048589))))))));
            var_34 ^= ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(unsigned short)15] [(_Bool)1])) && (arr_47 [i_13] [i_13] [23])))) - (((1048526) % (1048544))))), (((1048575) - (1048568)))));
        }
    }
    var_35 = (+((~(var_13))));
    var_36 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -1048558)) ? (((/* implicit */int) var_1)) : (1048576))) - (((((/* implicit */_Bool) 1048567)) ? (-1048579) : (-1048596))))) * (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) (-(1048575)))))))));
}
