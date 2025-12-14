/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133174
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 6; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_17 [8] [i_1] [i_2] [i_3] [i_4] [(_Bool)1] [8] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_15 [i_2] [7LL] [i_3 - 1] [i_0 - 4] [i_0 - 2] [i_0] [i_2])))) || (((((/* implicit */_Bool) arr_15 [i_2] [(unsigned char)7] [i_3 + 4] [i_0 - 3] [(unsigned char)0] [i_0 - 4] [i_2])) && (((/* implicit */_Bool) arr_15 [i_2] [i_0] [i_3 - 2] [i_0 - 1] [i_0 - 3] [0ULL] [i_2]))))));
                                var_16 = ((/* implicit */unsigned short) (((~(arr_5 [i_2] [i_0] [i_2]))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 4] [i_0 - 4] [5LL] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21137)) * (((/* implicit */int) arr_6 [i_1] [i_0 - 4] [i_1]))))) : (((unsigned long long int) (unsigned char)233)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)848)), (arr_1 [i_0 + 1]))))));
                arr_18 [4ULL] [1LL] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0 - 4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_13 [i_0] [(unsigned short)6] [i_0] [i_0 + 2] [i_0])))) : (max((arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_1] [i_1]), (((/* implicit */long long int) 0U)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (short)848)))) % (((/* implicit */int) ((((/* implicit */int) (short)861)) != (((/* implicit */int) (_Bool)1)))))))) % (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_6 + 2] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)237))))) & (var_1)))));
                    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)5)) & (((/* implicit */int) arr_23 [i_6]))))) & (arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 3]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) arr_20 [0ULL] [(unsigned char)8])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_5] [i_6 - 1] [i_7] [i_5])) ? (((/* implicit */int) (unsigned char)0)) : (var_14)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
        {
            {
                arr_31 [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) arr_29 [i_9 + 1] [i_9 - 2]);
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_39 [(short)22] [(short)14] [i_9] [i_10] [i_11] [(short)14] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 4294967276U)), (((((/* implicit */_Bool) ((long long int) arr_32 [i_8] [i_9] [i_12] [i_11]))) ? (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) var_10))))) : (((((/* implicit */_Bool) 3489862452U)) ? (((/* implicit */unsigned long long int) 1683238509)) : (arr_36 [i_9] [(short)4] [i_11])))))));
                                arr_40 [i_9] [(unsigned short)10] [(short)22] [i_9] = arr_30 [i_8] [i_9] [i_9];
                            }
                        } 
                    } 
                } 
                arr_41 [i_9] [i_9] [i_9 - 1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_34 [(unsigned char)13] [i_8] [i_8] [i_9 + 1])), (max((0ULL), (((/* implicit */unsigned long long int) arr_37 [i_9] [12LL] [14] [i_8] [i_8])))))) % (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned char)231)), (0LL))), (((/* implicit */long long int) (unsigned char)255)))))));
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 20; i_13 += 4) 
                {
                    for (unsigned short i_14 = 3; i_14 < 22; i_14 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) max((-1683238509), (((/* implicit */int) arr_34 [i_14] [i_13 + 3] [i_9 - 1] [i_8])))))) % ((-(((/* implicit */int) arr_37 [i_9] [i_9] [i_8] [i_14 - 2] [i_14]))))));
                            arr_48 [i_14] [i_9] [(short)18] [i_9] [i_9] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 262016)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) var_7)) : ((-2147483647 - 1))))) : (((((/* implicit */_Bool) 1539603513805012590ULL)) ? (arr_36 [i_14] [12] [20U]) : (arr_45 [i_14] [i_9 + 1] [i_13] [i_13 + 1] [i_8] [i_9 + 1]))))) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57956))) : (((unsigned long long int) 2243003720663040ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
