/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149052
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1] [12LL])) != (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [(signed char)8]))))), (min((max((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [6LL])), (4194210540U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_1] [i_0 - 1])) ? (1688127494U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_1]))) : (((arr_4 [i_1] [i_1] [i_1]) ? (var_2) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                        arr_9 [i_1] = ((/* implicit */long long int) var_1);
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [11] [11] [i_2 - 1] [i_2 - 1]))));
                        var_21 = min((((/* implicit */unsigned long long int) var_16)), (15065530582984161936ULL));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_6))));
                        arr_13 [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_4]) ^ (((/* implicit */unsigned int) arr_12 [i_1] [i_2]))))) ? (var_14) : (((((/* implicit */_Bool) 10102983013805631092ULL)) ? (3486978956U) : (1688127494U)))))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)161))))) ? (((((/* implicit */_Bool) 18118145142289632941ULL)) ? (arr_8 [i_0 + 1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [1U] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18193786756796125822ULL)))))))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((arr_4 [i_1] [i_2] [6LL]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21266)) ? (505054038564205585LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))))) || (((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) arr_4 [i_0] [i_1] [(short)6]))))))))))));
                    }
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_11))))))))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_6))))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_12))))) ? (max((var_6), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (1995537304)))))))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_11), (var_13)))) : (((((/* implicit */_Bool) (signed char)50)) ? (1998247873) : (((/* implicit */int) (signed char)7)))))))))));
}
