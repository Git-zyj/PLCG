/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171417
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        var_12 = ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (var_2)))) ? (((987770808717838564LL) - (9223372036854775807LL))) : (((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? ((-(var_0))) : (max((-5185161234574345573LL), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_6 [i_3 + 1] [i_1 - 1] [i_1 - 2]) : (arr_6 [i_3 - 1] [i_1 - 1] [i_1 - 2])))) ? (max(((-(-2431823373978850369LL))), (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) >= (arr_9 [13LL] [i_1 - 1] [13LL] [8LL]))))));
                        var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) (+(arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1])))) ? (var_0) : (((long long int) (!(((/* implicit */_Bool) var_2)))))))));
                        arr_10 [1LL] [14LL] [15LL] [13LL] = max((max((arr_1 [i_3 - 3] [i_1 - 2]), (arr_2 [i_3 - 4] [i_1 + 1]))), (max((arr_7 [i_1] [i_1 + 1] [i_1] [i_3 + 3]), ((+(var_6))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        arr_13 [7LL] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_0)))) && (((/* implicit */_Bool) var_7)))))));
        arr_14 [i_4] [i_4] = ((((/* implicit */_Bool) ((-509116807279610765LL) / ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) != (arr_12 [i_4] [i_4]))))) : (arr_4 [i_4] [i_4]));
        var_15 = ((((var_3) >= (arr_5 [i_4]))) ? (max((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_4] [i_4]) : (var_3))), ((+(arr_6 [i_4] [i_4] [1LL]))))) : (var_3));
        arr_15 [i_4] = ((((max((arr_0 [i_4]), (arr_8 [i_4] [2LL] [i_4] [i_4] [i_4] [i_4]))) != (arr_1 [i_4] [16LL]))) ? (var_5) : (((arr_6 [i_4] [i_4] [8LL]) / (4168182517460485917LL))));
        arr_16 [13LL] [i_4] = var_0;
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    arr_27 [i_5] [i_6] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_6] [i_6]))))), (((((/* implicit */_Bool) ((-6991046271024675717LL) / (var_5)))) ? (var_0) : (((long long int) var_1)))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_30 [6LL] [6LL] [i_6] [i_7] [i_8] = arr_22 [i_8];
                        var_16 &= arr_20 [i_5] [i_6] [i_6];
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_17 = (~(-6643343292439808237LL));
                            var_18 = ((((/* implicit */_Bool) arr_2 [i_5] [i_6])) ? (arr_32 [i_5] [i_6] [i_5] [i_9]) : (arr_2 [i_5] [i_10]));
                            var_19 = ((/* implicit */long long int) max((var_19), (((arr_19 [i_5] [i_10]) | (var_3)))));
                        }
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            arr_37 [i_11] = (~(max(((-9223372036854775807LL - 1LL)), (6759789137791238561LL))));
                            var_20 = ((((var_0) != (-1478667498036039222LL))) ? ((+(arr_29 [i_9] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2854127207806047219LL)))))));
                        }
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_21 = ((long long int) (~(arr_29 [i_5] [i_6])));
                            arr_40 [i_5] [i_6] [i_5] [i_5] [i_12] = arr_31 [10LL] [i_7] [i_7] [i_6] [i_12];
                            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((long long int) arr_11 [i_7] [i_5]))) ? (((arr_11 [i_7] [i_9]) | (arr_2 [i_5] [i_5]))) : (max((arr_11 [i_5] [14LL]), (arr_2 [i_7] [i_7])))))));
                        }
                        for (long long int i_13 = 3; i_13 < 11; i_13 += 1) 
                        {
                            arr_44 [i_5] [i_5] [i_7] [i_9] [i_13] = ((/* implicit */long long int) ((((long long int) arr_43 [i_5] [i_9] [i_13 - 2] [i_13] [i_13 - 3])) >= ((+(-6105174367420740636LL)))));
                            var_23 = max((arr_23 [i_5] [i_5] [11LL]), (-9223372036854775805LL));
                        }
                        arr_45 [i_5] [i_6] = ((((((/* implicit */_Bool) arr_2 [i_5] [i_6])) ? (var_2) : (arr_3 [i_9]))) + (((arr_36 [i_7]) / ((-9223372036854775807LL - 1LL)))));
                        var_24 = ((((/* implicit */_Bool) max((max(((-9223372036854775807LL - 1LL)), (-9223372036854775807LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [4LL] [12LL])))))))) ? (((arr_39 [i_5] [i_6] [i_7] [i_7] [i_7]) & (arr_39 [i_5] [i_6] [i_7] [i_9] [i_9]))) : (max((arr_18 [i_5]), (arr_18 [i_5]))));
                    }
                    for (long long int i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), ((((-(var_2))) ^ (max((arr_20 [i_5] [i_14 - 1] [i_7]), (arr_20 [i_5] [i_14 + 2] [i_7])))))));
                        var_26 = -2792237567451140870LL;
                    }
                }
            } 
        } 
        arr_49 [i_5] = var_5;
    }
    var_27 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
}
