/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183272
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
    var_15 = ((/* implicit */unsigned char) ((short) (!((!(((/* implicit */_Bool) var_5)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((arr_7 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 7; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [4LL] [i_1] [2LL] [2LL] [i_4 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_2] [i_2] [i_4 - 3])) <= (((/* implicit */int) arr_10 [i_2] [i_3 + 1] [i_4 - 2])))) ? (((long long int) arr_8 [i_0] [i_2] [i_4 - 3])) : (((/* implicit */long long int) ((unsigned int) 985102359581689988LL)))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [(signed char)9] = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_4 + 1])) | (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_4 + 1] [i_3 - 1]))))) | ((~(arr_2 [(short)2]))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [1] [i_4 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8056)) ? (985102359581689988LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8056)))))) ? (((/* implicit */int) arr_8 [2LL] [2LL] [i_3 + 1])) : (((/* implicit */int) arr_4 [i_3 - 1])))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (arr_2 [i_0])))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_2] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */unsigned long long int) 6318232231725440344LL)) : (288230358971842560ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1]))))) : ((-(((/* implicit */int) arr_4 [i_1])))));
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_0);
}
