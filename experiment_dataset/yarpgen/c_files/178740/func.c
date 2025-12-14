/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178740
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
    var_12 |= ((/* implicit */int) 5797691455020187758ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 12649052618689363858ULL)) && (((/* implicit */_Bool) var_11))))) - (((/* implicit */int) arr_0 [i_0]))))) : (var_2)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_13 [11U] [10U] [10U] [10U] [i_3] [10U] |= ((/* implicit */unsigned int) ((5797691455020187749ULL) / (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_3]))));
                            arr_14 [i_2] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 5797691455020187745ULL)) ? (-1103669298) : (arr_8 [(short)10] [(short)10] [i_4])))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            arr_18 [i_5] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            arr_19 [i_3] = ((/* implicit */long long int) min((((max((((/* implicit */unsigned long long int) var_11)), (12649052618689363871ULL))) << (((max((var_9), (((/* implicit */unsigned int) -1386562992)))) - (3776879561U))))), ((+(((((/* implicit */_Bool) arr_2 [i_2])) ? (5018500319298327998ULL) : (((/* implicit */unsigned long long int) var_4))))))));
                        }
                        arr_20 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned int) (~(arr_8 [i_0] [i_2] [i_3])));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) var_4);
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) ((var_9) ^ (4240240352U)));
                        arr_26 [9U] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [0] [4ULL] [i_6])) == (2079412490U)))) & ((+(((/* implicit */int) (unsigned char)48))))));
                    }
                    arr_27 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (short)12236);
                    arr_28 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-2113681959) == (((/* implicit */int) (unsigned char)254)))))) > ((((~(3086537379754587878ULL))) / (4835365876802453418ULL)))));
                }
                arr_29 [1U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-13380))));
                arr_30 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3696189154U)) ? (2079412490U) : (2079412470U)))))) ? (max((arr_21 [i_0] [i_0] [i_1 - 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)131))))))) : (((/* implicit */unsigned int) ((int) arr_6 [i_1 - 1])))));
                arr_31 [i_0] [i_0] = max((920517487U), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (arr_15 [i_1 - 1] [(unsigned char)5] [i_0] [i_0]) : (((/* implicit */int) var_3))))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned int i_8 = 4; i_8 < 17; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_41 [i_8] [i_9] [i_8] [i_7] [i_8] [(short)0] [i_0] = max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)131))))) : (((/* implicit */int) var_3))))), (1741798662U));
                                arr_42 [(_Bool)1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    arr_49 [i_11] = ((/* implicit */unsigned int) (~(((arr_45 [i_12] [i_11]) & (arr_45 [i_11] [i_12])))));
                    arr_50 [i_10] [i_10] [i_10] [4U] = (((+(1502520381))) >> (((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (short)12236)) : (((/* implicit */int) (unsigned char)240))))) - (((var_9) << (((((/* implicit */int) (short)13380)) - (13368))))))) - (373338059U))));
                }
                arr_51 [i_10] [i_11] = ((/* implicit */int) var_5);
            }
        } 
    } 
}
