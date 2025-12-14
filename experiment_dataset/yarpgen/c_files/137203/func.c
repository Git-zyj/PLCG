/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137203
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 = arr_6 [i_0] [i_1] [i_2 + 2];
                            var_15 = ((/* implicit */unsigned short) (~(max((2147483647), (((/* implicit */int) arr_4 [i_2 + 2]))))));
                            var_16 ^= ((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_1 [i_3 + 1])));
                            arr_9 [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1] [i_3 - 1]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (7841320202501990125ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) var_5)))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                            {
                                var_17 *= ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) arr_6 [i_3 - 1] [13] [i_2 - 1])), (-427557890139168611LL))));
                                var_18 *= ((/* implicit */unsigned int) arr_7 [i_0] [(unsigned short)3]);
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_14 [10] [10] |= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_5]))))), ((~(((/* implicit */int) arr_7 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_11)))), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) ((short) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_7 - 1])))));
                                var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-7943)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_10 [i_1] [i_1] [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_0] [i_1]))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_10 [i_1] [i_6] [i_6 + 1] [i_6] [i_7 + 2] [i_0] [7U])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max(((unsigned short)26625), (((/* implicit */unsigned short) (short)24939))))))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (short)23366))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_19 [(_Bool)1] [i_1] [i_5] [i_0])), (3216074127U))) & (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (arr_19 [i_0] [i_1] [i_5] [i_1])))))))));
                }
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_23 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)118)), (max((-1), (317346354)))))) != (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (3U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */long long int) (unsigned char)173)), (var_10))))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)24320)), (arr_17 [i_0] [i_8] [i_0] [i_10]))))));
                                var_25 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) ((signed char) (unsigned short)65519))))));
                                var_26 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((394934034) + (((/* implicit */int) arr_4 [(short)2]))))))) ? (max((((/* implicit */int) arr_7 [i_1] [i_8])), (((((/* implicit */int) (unsigned char)8)) % (((/* implicit */int) (unsigned short)65515)))))) : (((/* implicit */int) ((unsigned char) arr_26 [i_0] [i_0])))));
                                arr_27 [i_0] [i_1] [15U] [i_9] [i_10] [(unsigned short)20] [i_0] = ((/* implicit */_Bool) max(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_28 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_24 [i_0] [i_0] [i_0])), (arr_1 [i_0]))), (((/* implicit */int) ((((/* implicit */int) arr_26 [i_8] [i_1])) > (((/* implicit */int) arr_26 [i_0] [i_8])))))));
                }
                arr_29 [16] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [8U])) ? (1154275573) : (((/* implicit */int) arr_2 [0]))))) ? ((+(((/* implicit */int) arr_2 [(unsigned char)12])))) : ((~(((/* implicit */int) (unsigned short)65535))))));
                var_27 = arr_18 [i_0] [18U] [18U] [18U] [(signed char)2];
                arr_30 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                {
                    var_28 = ((/* implicit */int) var_10);
                    var_29 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)(-32767 - 1)))));
                }
            } 
        } 
    } 
}
