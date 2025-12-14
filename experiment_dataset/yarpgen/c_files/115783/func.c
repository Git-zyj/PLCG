/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115783
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2])) >> (((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 + 1])) - (24271)))))) ? (min((((/* implicit */unsigned long long int) ((unsigned short) var_2))), ((+(arr_5 [i_0] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_0])) ? (var_7) : (arr_0 [i_2])))) ? ((+(var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_8))))))))));
                    arr_6 [i_0] [i_1] [(_Bool)1] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 1351633162))) ? ((~(18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 + 2])) ? (arr_5 [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2 + 1])))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) arr_9 [i_3 - 2] [i_3]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_5 [i_0] [i_3 + 1]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_3 + 1]))))))));
                    var_20 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned long long int) var_5)), (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (((arr_5 [i_1] [i_4 - 1]) + (min((arr_0 [i_1]), (arr_8 [i_1] [i_1] [i_5] [i_1])))))));
                            arr_17 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_5)))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) arr_15 [i_5] [i_4] [(unsigned short)10] [(unsigned short)10]))))))) ? (max((((unsigned long long int) arr_10 [i_0] [i_1] [i_5])), (((/* implicit */unsigned long long int) (+(var_8)))))) : (((/* implicit */unsigned long long int) (-(max((1351633162), (-1351633181))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            {
                arr_22 [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_6])) ? (((((/* implicit */_Bool) var_15)) ? (arr_5 [i_6] [i_6]) : (arr_8 [i_6] [i_6] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (arr_9 [i_7] [i_7])))))) | (max((((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7]))))), (((/* implicit */unsigned long long int) max((arr_12 [i_6] [i_6] [i_6] [i_7]), (var_8))))))));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                {
                    arr_27 [i_6] [i_7] [i_6] [5] = ((/* implicit */unsigned long long int) ((short) ((int) min((((/* implicit */int) (_Bool)1)), (16320)))));
                    var_22 = ((/* implicit */signed char) ((long long int) 4850247684233353859LL));
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    var_23 = arr_24 [i_6] [i_7] [i_9] [(unsigned short)21];
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_7])) ? (var_11) : (((/* implicit */unsigned long long int) var_3))))) ? (arr_8 [i_10 - 2] [i_10] [i_10 - 1] [i_10 + 2]) : (((/* implicit */unsigned long long int) arr_31 [i_6] [i_7] [i_10 - 1] [i_10] [i_11] [i_7]))));
                                arr_35 [i_6] [i_7] [7] [i_10] [i_6] = ((/* implicit */unsigned char) var_14);
                                arr_36 [i_11] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 18412747506949054347ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_6] [i_7]))));
                }
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_14 [i_6] [i_12] [i_6] [9LL]) ? (((/* implicit */int) arr_14 [i_6] [i_7] [i_12] [i_12])) : (((/* implicit */int) arr_14 [i_6] [20] [i_12] [i_7]))))), (((arr_14 [i_12] [i_6] [i_12] [i_6]) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_12] [i_12])))))));
                    arr_39 [i_7] [i_7] = ((/* implicit */unsigned short) min((var_1), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6]))) : (arr_8 [i_6] [i_6] [i_6] [i_6])))) && (((/* implicit */_Bool) arr_4 [i_6] [i_7] [i_12] [i_12])))))));
                }
                arr_40 [i_7] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7])) ? (var_11) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) arr_25 [i_6] [i_7] [i_7] [i_7])) : (arr_11 [i_6] [i_6] [i_7])))));
            }
        } 
    } 
}
