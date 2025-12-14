/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136387
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) 18446744073709551615ULL));
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) >= (var_1))))) : (((var_11) / (var_2))))) * (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)40))))), (4294967295U))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(signed char)9] [i_0] = var_2;
                var_16 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    var_17 = min((0U), (((/* implicit */unsigned int) (signed char)(-127 - 1))));
                    var_18 = ((/* implicit */unsigned long long int) arr_2 [3LL]);
                }
                for (int i_3 = 1; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_11), (var_4))))))), ((((+(14517788511512198149ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (1839700376676526129LL))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_13 [i_0] [16ULL] [i_3 + 1] [i_4] [i_1] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 - 1]))) > (arr_11 [i_4] [i_3 + 1] [i_3 + 3] [i_3 - 1])));
                        arr_14 [i_0] [7LL] [4ULL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0] [4LL] [i_3 + 3] [15LL])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [10ULL] [(short)3])) : (((/* implicit */int) var_9)))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)-20))))));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_19 = min((var_5), (((/* implicit */signed char) ((((var_13) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [(signed char)4] [i_3 + 3] [(signed char)4]))))) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))))));
                        arr_17 [14ULL] [i_5] = ((/* implicit */signed char) ((unsigned long long int) ((signed char) arr_11 [i_3 - 1] [i_3 + 3] [i_3 + 1] [i_3 + 3])));
                        var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((var_13), (var_2)))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) 2124301031U)) || (((/* implicit */_Bool) (short)31957))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) (+(arr_0 [i_0])));
                        arr_20 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_12 [i_0] [i_6] [i_3 + 2] [i_6])))));
                        arr_21 [9] [2LL] [2LL] [i_6] [11U] [i_1] = ((/* implicit */unsigned int) -2116116393);
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        arr_24 [i_7] [i_3 + 3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_3 - 1] [i_7])) : (((/* implicit */int) (signed char)25))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) / (-1761788299318252050LL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3]))) / (-3218667095571280550LL))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (-6))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_1))) || (((/* implicit */_Bool) var_10)))))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+(-934241430805125371LL)))) : (min((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_3 + 2])))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 54733459U)) || (((((/* implicit */_Bool) arr_9 [(unsigned short)16] [(signed char)9] [8ULL] [7])) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_13))))))));
                }
                for (int i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) 3654977148U)) ? (-934241430805125371LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))))))));
                    var_24 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((short)-32767), (((/* implicit */short) (signed char)52))))), (6025590805908038339ULL)));
                }
                arr_28 [i_0] [i_1] = arr_3 [i_0];
            }
        } 
    } 
}
