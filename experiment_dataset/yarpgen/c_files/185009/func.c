/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185009
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (var_5) : (3180937260U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min(((-(arr_2 [i_0]))), (((/* implicit */unsigned int) var_1))))));
                    arr_8 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_14 [i_0] = (~((+(67092480U))));
                            arr_15 [i_0] = ((/* implicit */unsigned int) (unsigned short)36836);
                            var_14 *= arr_1 [i_0] [(unsigned short)14];
                        }
                        for (short i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_5] |= ((/* implicit */short) arr_11 [i_0 + 2] [i_2] [2U] [i_3 + 4] [i_2]);
                            var_15 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_0])), (3145955952U))))))), (min((var_0), (((/* implicit */unsigned long long int) (unsigned short)58476))))));
                            arr_19 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) max((var_1), ((short)9190)))) : (max((((/* implicit */int) ((unsigned short) arr_13 [i_0 + 2] [i_1] [i_2 + 1] [i_3] [i_0]))), ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                        }
                        for (short i_6 = 2; i_6 < 15; i_6 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) 0U);
                            arr_22 [i_6 - 2] [i_0] [i_2 + 1] [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_21 [i_0 + 1] [(unsigned char)3] [(unsigned char)4] [i_0] [i_0 + 2] [(unsigned char)3] [i_0])), (max((var_12), (((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_2 - 2] [i_0] [i_2 - 2]))))));
                        }
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 1])) : (var_0)))) ? (((/* implicit */int) (unsigned short)43201)) : (((/* implicit */int) ((arr_20 [3U] [i_1] [(short)6] [i_2] [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43456))))))))) != (max((arr_5 [i_0]), (arr_5 [i_1])))));
                        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63964))) < (arr_4 [i_3 - 1]))) || (((/* implicit */_Bool) var_5))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_0] [(unsigned char)14] [i_3] [i_7] = var_1;
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                            arr_26 [i_0] [i_0] [i_2] [i_3] [i_7] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [i_7])))) < (((/* implicit */int) arr_3 [i_1] [i_0] [(short)0]))));
                        }
                    }
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */short) 3145955970U);
    var_21 = ((/* implicit */unsigned int) var_11);
}
