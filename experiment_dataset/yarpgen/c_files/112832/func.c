/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112832
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
    var_12 = ((/* implicit */_Bool) (~((~(min((var_2), (((/* implicit */int) (unsigned char)111))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_1) : (var_2))), (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (2251799813685247LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [18LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6126)))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_9 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */int) (signed char)-7);
                arr_10 [i_0] [i_1] [i_2] |= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((var_1) | (((/* implicit */int) (unsigned short)29217)))))))));
            }
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_16 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0]))))));
                arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned short)59430)) : (((/* implicit */int) (_Bool)1))));
            }
            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) var_4);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        arr_23 [i_5] [i_5] [i_5] [i_0] [i_0] [i_5] = ((/* implicit */short) (~(arr_3 [i_0])));
                        arr_24 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((signed char) var_11));
                    }
                } 
            } 
            arr_25 [i_4] [i_0] = ((/* implicit */unsigned short) var_5);
            var_17 = (~(var_2));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (-(arr_3 [i_0]))))));
            var_19 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
        }
        for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            arr_29 [i_7] [i_7] [i_7 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)48))));
            arr_30 [i_7] [i_7] [i_7] = ((/* implicit */int) (~(var_7)));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [1] [i_7 + 1] [i_7 - 1])) : (-316865921)));
        }
    }
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        arr_34 [i_8] [i_8] = ((/* implicit */long long int) ((unsigned int) (+(16663285681264088564ULL))));
        var_21 = ((/* implicit */int) (signed char)-117);
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */int) min(((unsigned short)59412), (arr_18 [i_8] [i_9] [i_9] [i_8]))))));
            arr_38 [i_8] [i_8] [i_9] = ((/* implicit */_Bool) ((((min((var_0), (((/* implicit */long long int) 4120377181U)))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_5)) + (31))) - (25)))));
            arr_39 [i_8] [(_Bool)1] [i_8] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_36 [i_9])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)83)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_33 [(short)15])) == (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    var_24 = ((/* implicit */short) (+(arr_27 [i_8] [i_8])));
                    var_25 = ((/* implicit */long long int) max((var_25), ((~(var_0)))));
                    var_26 = ((/* implicit */unsigned char) ((long long int) var_4));
                    arr_45 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9] [i_10] [i_11])) ? (arr_35 [i_11]) : (((/* implicit */int) (unsigned short)6106))))) ? (((/* implicit */int) arr_41 [i_8] [13ULL])) : (((/* implicit */int) (unsigned char)185))));
                }
                for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    arr_49 [i_8] [i_9] [(unsigned short)2] [i_8] [i_12] = ((unsigned short) ((((/* implicit */int) (signed char)0)) % (((/* implicit */int) (unsigned short)6106))));
                    arr_50 [i_8] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) var_3);
                }
            }
        }
    }
}
