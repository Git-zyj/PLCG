/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123837
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */short) arr_2 [i_0] [i_1] [i_0]);
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (short)255)))))) ? (((unsigned long long int) (+(arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-254))) : (arr_0 [i_0]))))))));
                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)12318))));
                arr_5 [i_0] [i_0 + 1] [i_1] = ((/* implicit */long long int) var_9);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */short) (~((~(((arr_1 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_4] [(signed char)12] = ((/* implicit */long long int) arr_3 [i_0 + 1] [i_4]);
                                arr_13 [i_1] [2LL] [i_2] [i_1] [(short)0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) (short)25998)) ? (18ULL) : (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)16700), (((/* implicit */unsigned short) (signed char)-98)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_1] [(signed char)8] [(short)0] [i_4]))))));
                                arr_14 [i_0] [(short)8] [i_1] [2LL] [i_1] [i_3] [i_4] |= ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) arr_2 [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4348))) : (arr_0 [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_18 [i_0 + 1] [(signed char)13] [i_5] = ((/* implicit */long long int) ((unsigned int) (-(arr_8 [i_0] [i_1] [i_5] [i_5] [i_0] [i_1]))));
                    arr_19 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0 - 1]);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_2))));
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    arr_24 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */long long int) (+(((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-25513)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_25 [i_6] [(signed char)2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_6] [i_1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0 + 1]))))) : (min((((/* implicit */unsigned long long int) var_14)), (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_2);
}
