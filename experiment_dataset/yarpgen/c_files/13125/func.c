/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13125
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = (~(((((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) : (6645207164361781991LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [4])) || (((/* implicit */_Bool) var_8))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_0] = (unsigned char)197;
                    arr_8 [8LL] [(short)0] [8ULL] &= ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_0 [7] [i_1]))))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 - 1])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_20 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [(short)6] [i_0 + 1])), (arr_6 [i_0 + 1] [i_3])))));
                    var_21 += ((/* implicit */int) var_9);
                }
                var_22 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [(short)10])) ? (((/* implicit */int) arr_5 [4LL] [8LL] [(_Bool)1])) : (2046600143))) << (((((/* implicit */_Bool) (short)12055)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_10 [(_Bool)1])))))), (((unsigned long long int) ((unsigned long long int) arr_5 [6ULL] [(unsigned char)2] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 4; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            arr_20 [i_4] [i_4] [i_6] [i_5] [1ULL] [i_7] = ((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) arr_16 [(unsigned short)18] [(unsigned short)18] [i_5]))), (((short) arr_16 [(unsigned char)18] [(short)5] [i_5]))));
                            arr_21 [i_5] [(_Bool)0] [i_5] [(_Bool)0] [i_4] = ((/* implicit */_Bool) arr_11 [19ULL]);
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_18 [i_6 - 3] [i_6]), (arr_18 [i_6 + 1] [i_6])))) ? ((~(((/* implicit */int) arr_18 [i_6 - 2] [i_6])))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_6 - 2] [i_6])) <= (((/* implicit */int) arr_18 [i_6 + 1] [i_6]))))))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (+(var_10))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_23 [i_8 - 1] [8ULL]) * (((arr_23 [19LL] [i_5]) / (((/* implicit */unsigned int) arr_11 [i_5]))))))) ? (((/* implicit */unsigned long long int) (+(((long long int) arr_19 [17ULL] [(unsigned char)1] [4LL] [i_5]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19808)) ? (((/* implicit */int) arr_17 [17U] [17U] [(_Bool)0] [(_Bool)0] [i_8])) : (((/* implicit */int) (unsigned short)62363))))) ? (((/* implicit */unsigned long long int) arr_11 [i_8 - 1])) : (arr_12 [i_8 - 1])))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 21; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                arr_33 [3ULL] [(unsigned char)13] [(unsigned char)13] [i_9] [i_5] = ((/* implicit */int) ((656507695U) >> (((/* implicit */int) ((unsigned char) -1023535612)))));
                                arr_34 [i_5] [(unsigned short)1] [i_8] [(unsigned short)14] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_5] [4LL] [i_5] [i_5])) && (((/* implicit */_Bool) arr_31 [(unsigned char)3] [(unsigned char)11] [i_5] [(unsigned char)11] [(short)6] [i_5] [(unsigned short)8])))) ? (((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_5])) ? (((/* implicit */int) arr_31 [(_Bool)1] [i_5] [i_8] [(_Bool)1] [(short)4] [i_9] [(unsigned short)3])) : (((/* implicit */int) arr_31 [(_Bool)1] [(_Bool)1] [12LL] [(_Bool)1] [(_Bool)1] [15ULL] [i_8 - 1])))) : (((((/* implicit */_Bool) arr_31 [10] [1LL] [(_Bool)1] [i_9] [15U] [10LL] [12])) ? (arr_19 [(short)10] [14] [16ULL] [i_5]) : (((/* implicit */int) arr_31 [i_4] [(unsigned char)15] [(unsigned char)15] [i_8 - 1] [18LL] [(_Bool)1] [(_Bool)1]))))));
                                var_25 -= ((/* implicit */short) (~(((arr_12 [i_9 + 4]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [(_Bool)1] [6] [(_Bool)1])) * (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
