/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126511
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
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)110))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0] [10ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)188)))) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [i_2 - 1]))));
                    arr_9 [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (3441760289U))) && (((/* implicit */_Bool) 853207007U))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) arr_12 [i_1] [i_2 + 1] [(signed char)4] [i_2 + 1] [i_2 + 3] [i_3 - 3]);
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [(short)1] [i_3] [i_4] [i_4] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_4]))))) : (((/* implicit */int) var_8))));
                                arr_14 [i_2] [i_3] [(signed char)6] [(signed char)6] [i_1] [i_0] |= ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_15 = ((((/* implicit */_Bool) 853207007U)) ? (max((((/* implicit */int) var_10)), ((~(((/* implicit */int) (signed char)99)))))) : (((/* implicit */int) ((short) 0U))));
}
