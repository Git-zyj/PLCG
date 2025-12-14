/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104786
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) ((((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)15)))) != (((/* implicit */int) ((short) arr_2 [i_0] [i_0])))))) | (((/* implicit */int) var_2)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) == (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967295U))))))) > (max((var_0), (((var_0) / (arr_3 [i_0 - 2])))))));
            arr_5 [i_0] [i_1] = ((/* implicit */short) ((((_Bool) arr_3 [i_0 - 3])) ? (((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) : (arr_1 [i_0])));
            arr_6 [i_1] [i_1 + 1] = ((/* implicit */short) ((arr_3 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)16128))))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned short)26)))))));
        arr_8 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    var_15 |= min((var_6), (((/* implicit */unsigned int) var_2)));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned long long int) ((short) var_1))))));
    var_17 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_18 = ((long long int) (unsigned char)227);
                arr_13 [i_3] = ((/* implicit */_Bool) ((((arr_9 [i_2 - 1]) ? (((/* implicit */int) arr_9 [i_2 - 2])) : (((/* implicit */int) arr_9 [i_2 - 2])))) * (((/* implicit */int) (unsigned char)213))));
                arr_14 [i_2 - 2] = ((/* implicit */signed char) ((unsigned int) var_10));
                /* LoopSeq 2 */
                for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((long long int) 364232677U));
                    var_20 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) -8480899263052517202LL)) ? (arr_15 [i_4 + 1] [i_3] [i_3]) : (arr_15 [i_4 - 1] [i_4] [i_4 - 1]))), (((/* implicit */unsigned int) ((_Bool) arr_17 [i_2] [i_2 - 3] [i_4 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((((arr_15 [i_2] [i_2 + 1] [i_6 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5142728622411240785ULL)) ? (-1331296195) : (((/* implicit */int) (unsigned char)201)))))))));
                                var_22 += arr_16 [i_5] [i_2] [i_2];
                                var_23 = ((/* implicit */unsigned int) arr_18 [i_2] [i_2 - 3] [i_2 - 1] [(_Bool)1]);
                                var_24 = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    arr_26 [i_7] = ((/* implicit */short) ((((/* implicit */int) max((arr_23 [i_7]), (arr_23 [i_7])))) >= (((/* implicit */int) ((signed char) (signed char)-61)))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18430)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2 - 2] [i_2 - 3] [i_7 - 2] [i_7 + 1])))))) ? (((((/* implicit */_Bool) arr_19 [i_2 - 4] [i_2 - 1] [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_19 [i_2 - 1] [i_2 + 1] [i_7 - 2] [i_7 + 1])))) : (((((/* implicit */int) arr_19 [i_2 - 2] [i_2 - 3] [i_7 - 1] [i_7 - 1])) & (((/* implicit */int) arr_19 [i_2 - 3] [i_2 - 2] [i_7 + 2] [i_7 - 2]))))));
                    var_26 = ((/* implicit */unsigned short) ((131068U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_27 [i_7] [i_3] [i_7 + 2] = ((/* implicit */unsigned short) ((long long int) ((((arr_10 [(signed char)3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))))) < (((/* implicit */unsigned long long int) ((long long int) arr_23 [i_7]))))));
                    var_27 = ((/* implicit */unsigned long long int) ((short) arr_18 [i_2 - 4] [i_2 - 2] [i_7 - 2] [i_7 - 1]));
                }
            }
        } 
    } 
}
