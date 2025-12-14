/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111872
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
    var_20 *= ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned short) ((arr_5 [i_2] [i_1] [i_1] [i_0]) == (arr_5 [i_0] [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0])));
                                var_21 = ((/* implicit */long long int) arr_0 [i_0] [i_4]);
                                var_22 = arr_10 [i_0] [i_1] [i_2] [i_3] [i_0];
                                arr_14 [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [i_1] [(unsigned short)13])) ? (-1016972696553657670LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_4])))))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((long long int) 1016972696553657671LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_1] [i_2] [i_6 + 2] = (unsigned short)19296;
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_6 - 1])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_5] [i_5] [i_1])) : (((/* implicit */int) (unsigned char)138))));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((((/* implicit */_Bool) 381780856U)) ? (((/* implicit */int) (unsigned short)19230)) : (((/* implicit */int) arr_3 [i_2])))) : (((((/* implicit */_Bool) 1016972696553657673LL)) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1]))))));
                    var_26 = (+(arr_12 [6U] [i_0] [i_1] [i_1] [i_1] [i_1] [i_2]));
                }
            } 
        } 
        var_27 -= (+(-1LL));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        arr_24 [i_7] = ((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_16 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_7]))));
        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [(unsigned short)5] [i_7] [i_7]))));
        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_19 [i_7] [i_7] [i_7] [i_7])))) ? ((-(((/* implicit */int) arr_2 [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) arr_8 [i_7] [(unsigned short)8] [i_7] [i_7])))))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                {
                    arr_29 [i_9] [i_8] [i_7] [i_7] = ((((/* implicit */_Bool) arr_16 [i_9] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27284))) : (8088370906229399364LL));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (unsigned short)19296))));
                    arr_30 [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((((/* implicit */_Bool) arr_9 [i_7] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9] [i_8] [i_7]))) : (1697699176623037609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8])))));
                }
            } 
        } 
    }
}
