/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148298
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)7760))))), (var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3556945492U)) ? (var_7) : (var_10)))) ? (((((/* implicit */int) (short)7760)) | (var_5))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -3253676490696692456LL)))))));
    var_15 = var_5;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */int) max(((unsigned short)1920), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)57633)))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2])))) ? (((/* implicit */int) (!(arr_6 [i_3 + 1])))) : (((/* implicit */int) (!(arr_6 [i_3 - 2]))))));
                            arr_8 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 1]))) > ((~(2751148936629019764ULL)))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] = ((/* implicit */short) (((-(arr_7 [8] [i_0 - 3]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0] [i_0 + 1] [i_0 + 1])) ? (var_2) : (var_2))))));
                arr_10 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_2 [i_1] [i_0 - 1] [(short)13])))))))), (((max((738021802U), (((/* implicit */unsigned int) var_0)))) & (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) var_6)))))))));
                /* LoopSeq 2 */
                for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    var_18 *= ((/* implicit */_Bool) min((((/* implicit */int) max(((short)-7760), (var_0)))), (min((((/* implicit */int) arr_2 [i_0 - 1] [i_4 - 1] [(_Bool)1])), (arr_3 [i_4 + 1] [i_0 - 1] [i_4])))));
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_19 [i_5] [i_5] [i_4] [(short)1] [i_5] [i_5] = ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((((((/* implicit */int) arr_17 [i_0 - 3] [i_1] [i_5] [i_5] [(short)15])) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_3))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 3556945492U))));
                                var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38668)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_16 [i_4 - 1] [i_4] [i_4 - 1] [i_5 - 2])))) ? (((arr_16 [i_4 - 1] [i_5] [i_5] [i_5 + 1]) - (arr_16 [i_4 - 2] [i_4] [i_4] [i_5 + 1]))) : (max((arr_16 [i_4 - 1] [i_5] [(_Bool)1] [i_5 - 2]), (arr_16 [i_4 - 2] [i_5] [i_5] [i_5 - 1])))));
                                var_21 += ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        for (int i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_26 [i_7] = ((/* implicit */_Bool) min((arr_18 [(unsigned short)15] [i_7] [i_1] [i_4] [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_5 [i_0] [12ULL] [i_8]))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_7] [i_7])) >> (((/* implicit */int) arr_6 [i_0 - 3]))))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_1] [i_4] = -1184962646655808809LL;
                }
                for (short i_9 = 2; i_9 < 14; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1948747879) : (((/* implicit */int) (unsigned short)62298))))) ? (((/* implicit */int) var_8)) : (158594418))))));
                                var_24 += ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_9 - 1]))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_9] [i_9 + 2])) ? (arr_16 [i_0] [i_1] [9] [i_9 + 1]) : (((/* implicit */unsigned long long int) 1072693248))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        for (short i_13 = 2; i_13 < 15; i_13 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (1948747879)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_0 - 3] [i_9 + 2] [i_13 - 2])) && (((/* implicit */_Bool) arr_39 [i_0 - 3] [i_9 + 1] [i_13 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0 + 1] [i_9 - 2] [i_13 - 2])))))));
                                arr_44 [i_13 - 2] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (max((max((0U), (0U))), (((/* implicit */unsigned int) var_3))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 4; i_15 < 13; i_15 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((max((arr_13 [i_0] [i_0 - 2] [i_0]), (((/* implicit */unsigned int) var_4)))) << (((arr_13 [i_0 - 1] [(short)9] [i_0]) - (1028945635U)))));
                                var_27 |= ((/* implicit */_Bool) (short)-11979);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_30 [i_0 - 3] [i_1] [i_0 - 3])), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_0] [i_0] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 1948747863)) ? (((/* implicit */int) var_1)) : (var_11))) : (((/* implicit */int) arr_4 [i_1] [i_1] [(unsigned char)14] [i_1]))))));
                    arr_51 [i_0] [i_1] [i_9] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_0 - 2] [i_9] [i_9] [i_1] [i_9]))));
                }
            }
        } 
    } 
}
