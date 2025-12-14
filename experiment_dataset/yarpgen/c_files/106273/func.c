/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106273
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
    for (signed char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))) : (var_6))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_1] = ((/* implicit */short) ((unsigned int) ((((((/* implicit */int) (unsigned char)16)) >> (((var_11) + (1272565506))))) << (((min((((/* implicit */unsigned int) var_14)), (4184905214U))) - (94U))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_14 [(unsigned short)6] [5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)1)), (6489936228768030301LL)));
                            arr_15 [i_0] [i_1] [17U] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((int) ((unsigned short) arr_1 [i_0 - 2] [i_1 - 3])));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 4; i_5 < 20; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [4LL] [4LL] [4LL]))));
                            var_20 = ((/* implicit */unsigned short) var_4);
                            arr_18 [i_0] [i_0] [i_0] [7LL] [(short)4] [15U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)10)) ? (var_10) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            arr_23 [i_6] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_1 [i_2] [8]);
                            arr_24 [i_6] [i_2] [(unsigned char)11] [i_6] = ((/* implicit */unsigned int) arr_8 [i_6 + 2] [i_1 - 3] [i_0 - 3] [i_0 + 2]);
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [3LL] [0U] [i_0] = ((/* implicit */unsigned int) var_3);
                        var_21 = ((/* implicit */unsigned int) ((int) var_2));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_33 [i_0] [19ULL] [3] [(unsigned short)10] [i_9] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [i_2] [i_8] [(unsigned char)21])) ? (((/* implicit */int) arr_16 [18LL] [i_8] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_1]))))) > (arr_1 [i_1 - 3] [i_1]))));
                                var_22 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) var_8)))) * (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    arr_34 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 713649777U)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)135))));
                    arr_35 [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_6 [(unsigned char)21] [i_1 - 3] [i_0 - 2] [13ULL])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-9003)), (2000141068U))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 1; i_10 < 18; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) ((min((((/* implicit */int) ((_Bool) arr_32 [i_10]))), (((((/* implicit */_Bool) (unsigned short)11107)) ? (121123771) : (((/* implicit */int) var_17)))))) % (((-267353309) | (((/* implicit */int) (short)-3311))))));
                    arr_44 [5U] [i_11] [12U] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((arr_30 [i_12] [16]) != (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10] [i_11])))))))));
                }
            } 
        } 
    } 
}
