/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145360
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((var_8) && (((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) var_2)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((arr_9 [i_0] [(signed char)0] [i_4]) > (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : ((+(arr_9 [i_0] [i_3] [i_0])))));
                            arr_11 [i_0] [i_1] [i_2] [i_0] [(unsigned char)0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_3] [0]);
                            var_14 = var_1;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_15 = arr_15 [i_6] [i_0] [i_2] [i_0] [i_0];
                        var_16 = ((/* implicit */short) var_9);
                    }
                    arr_17 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            arr_20 [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_7))))) ? (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [(short)1] [i_0] [i_7] [(short)1])) : (((/* implicit */int) var_4)))) : (arr_6 [(signed char)14] [(signed char)14] [i_7] [i_0])));
            arr_21 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_7] [i_0])) >= (((/* implicit */int) arr_4 [i_0] [i_0]))));
            arr_22 [(_Bool)1] |= ((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)18]);
            var_17 = ((/* implicit */int) var_8);
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (arr_7 [i_0] [i_8] [(signed char)6]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [(signed char)5] [i_11]);
                            var_20 &= arr_7 [i_9] [i_9] [i_9];
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                            var_22 = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                arr_32 [i_0] = var_3;
                var_23 = ((/* implicit */unsigned char) var_4);
            }
            for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                var_24 = ((/* implicit */signed char) arr_19 [i_8]);
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(signed char)8] [i_0]))) * (((arr_29 [4ULL] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [(signed char)9] [i_12] [i_8]) : (((/* implicit */int) var_0))));
                var_27 = ((/* implicit */short) (!(arr_23 [i_0] [11LL] [7])));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                {
                    {
                        var_28 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((-9049568825892116112LL) - (((/* implicit */long long int) ((/* implicit */int) (short)1704))))))));
                    }
                } 
            } 
            arr_41 [i_0] [i_0] [(signed char)8] = ((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_0]);
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_15 [i_0] [(signed char)6] [i_0] [i_15] [(_Bool)1])) : (((/* implicit */int) var_10))))));
                            var_31 = ((/* implicit */long long int) var_11);
                            var_32 = ((/* implicit */unsigned char) var_7);
                            var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_17] [i_17])) && (((/* implicit */_Bool) arr_6 [i_0] [i_17] [i_0] [i_16]))));
                        }
                    } 
                } 
            } 
        }
        arr_49 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_44 [i_0] [i_0] [0LL] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (((var_6) * (arr_38 [i_0] [i_0] [14U] [i_0] [i_0])))))));
    }
    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
    var_35 = ((/* implicit */_Bool) var_10);
    var_36 = ((/* implicit */short) var_9);
}
