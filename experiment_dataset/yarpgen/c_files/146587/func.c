/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146587
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
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) & (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_12)) ^ (var_3)))), (((unsigned long long int) (signed char)48))))));
    var_15 ^= ((/* implicit */_Bool) var_6);
    var_16 = ((/* implicit */int) ((((min((((/* implicit */long long int) var_10)), (var_8))) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = var_9;
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((long long int) arr_2 [i_1 - 3])) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */int) ((signed char) arr_7 [i_1 - 2] [i_1 - 2] [i_0]));
                        var_20 = ((/* implicit */int) 3227328705776953721LL);
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_9)))))) - (4294967295U)));
                        arr_13 [i_4] [i_0] [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_3 [i_1 + 1]))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_3 [i_0])))) ? (min((((/* implicit */long long int) arr_4 [i_1] [i_1])), (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_0])) ? (var_12) : (var_12))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 4294967295U);
                            var_21 += ((/* implicit */short) (+(101911044)));
                        }
                    }
                    arr_17 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1 - 3] [i_0]))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) arr_5 [i_1 + 1] [i_0]))))));
                    arr_18 [i_0] [i_1] [(short)18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1457666959U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((_Bool) (short)17419)))));
                    arr_19 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((short) min((((/* implicit */int) ((unsigned char) var_1))), (((((/* implicit */int) arr_5 [i_0] [i_0])) ^ (((/* implicit */int) var_11)))))));
                }
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (((unsigned int) arr_9 [17ULL] [i_1] [i_0] [i_1 - 1]))));
                arr_21 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0])))) & (var_7)))));
            }
        } 
    } 
}
