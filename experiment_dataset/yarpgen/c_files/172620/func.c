/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172620
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
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned char) min((var_0), (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_1])) ? (arr_5 [i_0 - 1] [i_0] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [0LL] [i_0 - 1] [i_2]))))));
                                var_13 ^= ((/* implicit */_Bool) (-(((int) arr_9 [i_4] [i_4] [10U] [i_3] [2U]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 15; i_5 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)123)) ? (var_10) : (1762733051U)))) ? (((/* implicit */int) arr_8 [i_2] [(unsigned char)15] [4U] [i_0] [i_5] [i_0])) : ((-(((/* implicit */int) var_9))))));
                                var_15 = ((unsigned long long int) var_11);
                            }
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((17969894U), (4276997402U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) 4276997402U)), (arr_3 [i_0]))))))));
                                arr_17 [i_0] = ((((((/* implicit */_Bool) 2191201475U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)124))))) : ((~(var_10))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-130))))));
                            }
                            arr_18 [i_2] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 2399342102167580846LL)) * (31ULL))) * (((/* implicit */unsigned long long int) ((min((arr_4 [14U] [14U] [i_2] [14U]), (((/* implicit */unsigned int) 63)))) / (((((/* implicit */_Bool) 1563503520)) ? (arr_16 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [5U]))))))))));
                            var_17 = ((/* implicit */long long int) arr_8 [i_0 + 1] [i_0 - 1] [(short)1] [i_0] [i_0 + 2] [i_0]);
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)46944))))), ((+(var_8)))))) ? (min((((/* implicit */long long int) arr_15 [i_0 + 1] [i_0 + 1])), (var_3))) : (((/* implicit */long long int) 4276997401U))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 21; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 4; i_10 < 23; i_10 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_8 + 3] [i_10 - 4] [i_9] [i_9 + 1])) ? (max((((/* implicit */unsigned long long int) arr_27 [i_8 + 3] [i_10 - 2] [i_9] [i_9 - 2])), (5763762734959406190ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_8 + 3] [i_10 - 1] [i_9] [i_9 - 1])) ? (((/* implicit */int) arr_27 [i_8 - 1] [i_10 - 1] [i_8 - 1] [i_9 - 1])) : (((/* implicit */int) (unsigned char)250)))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((arr_21 [i_7]) + (min((arr_21 [i_7]), (arr_21 [i_9])))))));
                        arr_30 [i_7] [22U] [i_7] [i_7] [i_9] [i_9 - 1] = ((/* implicit */unsigned long long int) arr_23 [i_10 - 2]);
                        var_21 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) >= (-4191351824591214492LL)))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_7])) + (((((/* implicit */int) min((arr_27 [(unsigned char)18] [i_7] [(short)17] [i_7]), (((/* implicit */short) (unsigned char)137))))) / (((/* implicit */int) ((((/* implicit */_Bool) 1073741823U)) && (((/* implicit */_Bool) (unsigned short)53605)))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        for (int i_12 = 1; i_12 < 23; i_12 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 24; i_13 += 3) 
                {
                    arr_41 [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)88)) ? (arr_33 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_13] [i_12 - 1] [i_12])))))) & (arr_39 [i_13 + 1] [12U] [12U] [i_12]))))));
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_11]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        arr_47 [(unsigned short)15] [i_12] [i_14] [i_14] = var_3;
                        var_25 = ((/* implicit */short) (((~(2972939870237224621ULL))) >> (((((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_31 [i_11])) + (7374))))) - (25165804)))));
                        var_26 -= ((/* implicit */unsigned char) (-(3929714105U)));
                        var_27 = ((/* implicit */unsigned char) ((arr_34 [i_12 - 1] [i_12]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 2])))));
                    }
                }
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                    arr_50 [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_12 + 1])) / (-529587160)));
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)-5469))))) <= (945890053U)));
                }
                var_30 = min((-2399342102167580845LL), (((/* implicit */long long int) (short)-5477)));
            }
        } 
    } 
}
