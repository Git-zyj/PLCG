/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118888
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                    arr_9 [i_1] [12U] = ((/* implicit */short) 0);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) (-(arr_3 [i_0] [i_0])));
        arr_11 [i_0] [i_0] = ((/* implicit */short) 2549396791U);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
    {
        arr_15 [(short)14] = ((/* implicit */unsigned int) ((arr_14 [i_3 - 1] [i_3 - 1]) ? (arr_12 [i_3 + 1] [i_3 - 2]) : (arr_12 [i_3 + 1] [i_3 + 1])));
        arr_16 [i_3] = ((/* implicit */unsigned int) (unsigned short)30806);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_22 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 2620601101U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_26 [i_3] [i_5] = ((/* implicit */unsigned int) arr_21 [i_5] [9U] [i_5]);
                        arr_27 [2U] [(unsigned short)0] [i_5] [i_6] [i_5] = arr_25 [0U] [i_4] [i_5] [i_6];
                        arr_28 [i_6] [i_4] [(short)4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((var_6) << (((((/* implicit */int) arr_18 [i_3 - 1] [i_6])) + (61)))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        arr_31 [i_7] = ((/* implicit */short) ((((/* implicit */int) ((min((var_0), (((/* implicit */unsigned long long int) arr_29 [i_7] [i_7])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) >= (4294967295U)))))))) << (((((unsigned long long int) arr_30 [i_7])) - (1872ULL)))));
        arr_32 [(unsigned short)13] = arr_29 [i_7] [i_7];
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    arr_38 [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)18332)) || (((/* implicit */_Bool) arr_34 [i_9] [i_8] [i_7])))) ? (((/* implicit */int) max(((unsigned short)6813), (arr_30 [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)20121)))))))) * (min((0U), (((/* implicit */unsigned int) (~(var_1))))))));
                    arr_39 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_9]))))) : ((+((~(arr_37 [i_7] [i_8] [(unsigned short)3])))))));
                    arr_40 [i_7] = ((/* implicit */signed char) var_4);
                    arr_41 [i_7] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2313244246U)) || (((/* implicit */_Bool) var_6)))))) ^ (min((441105913398060061ULL), (((/* implicit */unsigned long long int) arr_36 [i_7]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            for (int i_11 = 2; i_11 < 18; i_11 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_49 [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) min((((unsigned long long int) -1244097857)), (((/* implicit */unsigned long long int) var_7))));
                        arr_50 [i_7] [i_11] [i_11] = ((/* implicit */unsigned long long int) max((max((min((((/* implicit */unsigned int) (short)18881)), (var_5))), (max((((/* implicit */unsigned int) (unsigned short)14984)), (663123735U))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [10U] [i_7] [i_7] [i_7] [i_7]))) != (var_8))))) % (max((((/* implicit */unsigned int) arr_44 [i_7] [i_10] [i_11])), (4294967295U)))))));
                        arr_51 [i_11] [i_10] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) & (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64195)))))) : (arr_35 [i_11] [i_11 + 3] [i_11])));
                        arr_52 [i_7] [14ULL] [i_7] = arr_30 [i_11 + 2];
                    }
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        arr_55 [i_11] [i_10] [i_10] [i_11] [i_10] [i_10] = ((/* implicit */short) (~(((arr_54 [i_11] [i_13 + 2] [i_11] [i_11]) & (((/* implicit */int) (unsigned short)17114))))));
                        arr_56 [i_7] [i_7] [i_10] [i_7] [i_11] [i_13] = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_6))) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_48 [i_7] [17ULL] [i_11] [i_13] [i_13]))))) : (((((/* implicit */_Bool) (-(arr_53 [i_10])))) ? (var_0) : ((+(var_0)))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        arr_59 [i_7] [i_11] [i_11] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)65535))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_10] [i_10] [i_10] [i_10 - 2] [i_10])) ? (((/* implicit */unsigned long long int) arr_36 [i_10 - 1])) : (max((((/* implicit */unsigned long long int) var_5)), (arr_53 [i_11]))))))));
                        arr_60 [i_11] [13U] [i_11] = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38287))) : (4101728108U));
                        arr_61 [i_10] [i_10] [i_14] [i_14] [i_7] |= ((/* implicit */int) (_Bool)1);
                        arr_62 [i_10] [i_10] [i_11] [i_14] = ((/* implicit */_Bool) arr_58 [i_11] [i_11 + 1]);
                    }
                    arr_63 [i_10] [i_7] [i_7] [i_11] = var_2;
                }
            } 
        } 
    }
    var_10 = ((/* implicit */unsigned long long int) var_3);
    var_11 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (unsigned short)38287)), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
}
