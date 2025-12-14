/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164884
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
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_2 [i_0])))))) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) != (var_8))))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) || (((/* implicit */_Bool) ((var_8) << (((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_1] [i_0])))) - (28))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_16 = ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 - 2]))))) < ((~(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (34359738367LL))))));
                    var_17 -= ((/* implicit */_Bool) ((((((long long int) ((((/* implicit */_Bool) (unsigned char)191)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1]))))) + (9223372036854775807LL))) << (((/* implicit */int) ((((((/* implicit */int) var_4)) << (((arr_2 [i_2]) + (1607250509570057321LL))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = ((((((((/* implicit */_Bool) (unsigned char)187)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (var_12) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)43)), (arr_10 [i_0])))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)64)), (arr_5 [i_0 - 2]))))));
                }
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    var_18 ^= ((((/* implicit */_Bool) arr_8 [i_1])) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))) ^ (3782536416U))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)185)) & (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) ((unsigned char) arr_9 [i_3] [i_3] [21U] [i_0])))))));
                    var_19 = ((/* implicit */_Bool) (-(924988353)));
                }
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))) ^ (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_2 [i_0]))) : (((/* implicit */long long int) 1633915719U))));
                    var_20 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_1])))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_4])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                }
                var_21 -= ((/* implicit */unsigned long long int) arr_8 [i_1]);
            }
        } 
    } 
}
