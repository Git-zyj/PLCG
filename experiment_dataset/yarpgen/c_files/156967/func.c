/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156967
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
    var_15 = (unsigned char)203;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */short) arr_12 [(unsigned char)18] [i_2] [(unsigned short)5] [i_2]);
                                var_17 = ((unsigned char) (unsigned char)2);
                            }
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_5] [i_2] [i_1] [(short)15]))));
                                var_19 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) arr_13 [i_0] [(unsigned short)0] [i_1] [i_3] [i_5]))) ? (((/* implicit */int) arr_2 [i_5] [i_2])) : (((/* implicit */int) var_6)))) % ((-(((/* implicit */int) ((var_5) > (-2147483643))))))));
                                var_20 &= ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2] [i_5]);
                                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) arr_3 [10] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_2])) ? (arr_3 [(unsigned short)12] [2ULL] [7ULL]) : (arr_3 [i_5] [i_3] [i_1]))) : (arr_3 [i_1] [i_2] [i_5])));
                            }
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                            {
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (unsigned short)1))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned short)32), (arr_11 [i_0] [i_0] [12LL] [i_0] [4ULL] [i_1] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) arr_6 [i_1] [i_3] [i_6])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0]))))) ? (((((/* implicit */int) arr_13 [i_0] [(unsigned short)14] [i_1] [i_3] [i_6])) & (((/* implicit */int) arr_10 [i_6] [i_3])))) : ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) : (min((((/* implicit */unsigned long long int) (short)-14489)), (arr_12 [i_0] [18] [i_3] [i_0]))))))));
                            }
                            arr_20 [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_3] [i_2] [i_3])) > (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_3])))))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [4LL] [4LL]))) : (var_10)))));
                            arr_21 [i_0] [16] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (~(max((arr_18 [i_0] [i_0] [i_0] [(unsigned short)8] [i_3] [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_3] [i_2] [i_0]))))));
                            arr_22 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                        }
                    } 
                } 
                var_24 = (~((~(arr_7 [i_0] [i_1] [i_1] [(short)5]))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) 0LL);
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(short)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */int) arr_13 [(unsigned char)0] [i_8] [i_9] [12ULL] [(unsigned char)8])) * (((/* implicit */int) var_11))))));
                    var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_7]))));
                }
            } 
        } 
    } 
}
