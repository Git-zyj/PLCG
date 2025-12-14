/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131541
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [0LL] = ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((arr_1 [(unsigned short)1]) ? (var_3) : (-1285292013277355311LL))));
        var_15 = ((/* implicit */_Bool) arr_0 [(unsigned char)17] [i_0]);
        var_16 += ((/* implicit */short) arr_0 [i_0] [16]);
        arr_3 [i_0] = ((/* implicit */short) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_8 [i_1] [i_3]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (((var_2) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_1] [i_3 + 1])))) : (((/* implicit */int) ((short) var_8))))), (((arr_8 [i_2] [i_1]) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1])))) : (arr_4 [i_3 - 1]))))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */short) ((arr_8 [i_2] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (max((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_2])))), (((/* implicit */int) (!(arr_8 [i_2] [i_3 - 1]))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [15] [(_Bool)1])) < (((int) arr_6 [i_1] [i_1]))));
        var_19 = min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_1)) ? (((long long int) arr_8 [i_1] [(unsigned char)5])) : (((/* implicit */long long int) ((int) arr_5 [i_1]))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_15 [i_4])))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)58508)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)11))))));
                    arr_23 [i_4] [i_4] [i_4] [i_4] = (((!(arr_14 [i_4] [i_5]))) && (((/* implicit */_Bool) var_5)));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((arr_20 [i_4] [i_5] [i_6] [i_6]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_6]))))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_5])))) : (((((/* implicit */_Bool) arr_7 [i_4] [(unsigned short)19] [i_6])) ? (((/* implicit */int) arr_21 [i_4] [i_5] [i_5] [i_6])) : (((/* implicit */int) arr_15 [i_4])))))) : (((((arr_14 [(short)11] [i_5]) ? (((/* implicit */int) arr_6 [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_4])))) >> (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_4] [i_5] [i_6])) : (arr_4 [i_6])))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_4])) && (((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (arr_22 [i_6]))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (short i_8 = 1; i_8 < 24; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        arr_36 [i_7] [i_7] [i_9] [i_9] [i_10] [i_10] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_35 [i_8 - 1] [i_10] [i_8] [i_10] [i_8] [i_8]))))));
                        var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_24 = ((/* implicit */unsigned short) max((arr_32 [i_7] [i_8] [i_9] [i_7]), (((/* implicit */long long int) (!(arr_31 [i_8] [i_8] [i_8 - 1] [i_8 - 1]))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (3586239986128820683ULL)));
                        arr_40 [i_8] [i_9] [i_7] [i_7] [i_8 - 1] [i_7] = ((/* implicit */unsigned char) var_13);
                    }
                    for (short i_12 = 1; i_12 < 23; i_12 += 3) /* same iter space */
                    {
                        var_26 = (~(max((((/* implicit */int) (!(arr_26 [i_7])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (arr_24 [i_7]))))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_39 [i_12] [i_9] [(_Bool)1] [i_7] [24LL] [i_7])) >= (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) (((!((_Bool)1))) ? (min((((/* implicit */int) (_Bool)0)), (arr_30 [i_7] [i_8 + 1] [i_8 + 1]))) : (((/* implicit */int) var_6))))) : (((unsigned int) (!((_Bool)1)))))))));
                    }
                    for (short i_13 = 1; i_13 < 23; i_13 += 3) /* same iter space */
                    {
                        var_28 = 10970929907450028816ULL;
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-((+(arr_42 [i_7] [i_8] [i_7] [(_Bool)1]))))))));
                        arr_46 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_33 [i_8] [i_8 + 1] [(unsigned char)23] [i_13 + 1] [i_7]))) ? (((/* implicit */unsigned int) ((arr_45 [i_13 + 1] [i_13 - 1] [i_8 - 1]) ? (((/* implicit */int) arr_45 [(unsigned short)19] [i_13 - 1] [i_8 + 1])) : (((/* implicit */int) arr_45 [i_13] [i_13 - 1] [i_8 - 1]))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (min((((/* implicit */unsigned int) var_7)), (1034211203U)))))));
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_37 [i_7] [i_8 + 1] [i_9] [i_7] [i_8] [i_7]) ^ (arr_37 [(_Bool)1] [i_8 - 1] [(_Bool)1] [i_7] [(_Bool)1] [i_7]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_9] [i_8])))))))) ? (((long long int) 1048575U)) : (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_8 - 1] [i_8] [i_9] [i_9])) & (1560159438))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                {
                    var_31 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) (unsigned char)1)))))), (((arr_48 [i_16]) ? (((/* implicit */int) arr_48 [i_14])) : (((/* implicit */int) var_11))))));
                    var_32 = ((/* implicit */_Bool) arr_38 [i_14] [i_15] [i_15] [i_16]);
                    var_33 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_41 [i_14] [i_15] [i_16] [(_Bool)1] [i_16] [i_16])))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : ((-((-(((/* implicit */int) var_0))))))));
                    var_34 = ((/* implicit */long long int) min((var_34), (arr_42 [i_14] [i_14] [i_15] [(_Bool)1])));
                    arr_54 [i_14] [i_16] = ((/* implicit */short) ((long long int) arr_43 [i_14] [i_16]));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) max(((~((+(((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_0))))))))));
}
