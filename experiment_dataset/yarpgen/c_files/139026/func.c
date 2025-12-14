/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139026
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
    var_13 = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-1)), ((short)-8823)))), (var_6))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((1), (-642835592)))) & ((~(((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) 134216704U)) : (arr_3 [i_0 - 1] [i_0] [i_0])))))));
                    arr_6 [i_2 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_4 [i_1] [i_1] [i_2] [i_0 - 1]));
                }
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 2; i_4 < 24; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_3] [i_4 + 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_1 [i_1 - 3])), (((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_4 + 1] [i_3])) ? ((+(arr_3 [i_1 + 1] [i_3] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 27ULL)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_1 - 3])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 + 1] [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1 - 1]))) : (((unsigned int) arr_10 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1] [i_1 - 3]))));
                        arr_13 [i_0 + 1] [i_0 + 1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_11 [i_4] [i_1] [i_3] [i_4 - 1] [i_3]))) * (min((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0])), (-1799049923)))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4])) ? (((unsigned int) max((-1753840404), (((/* implicit */int) (signed char)16))))) : (((/* implicit */unsigned int) ((int) max((((/* implicit */short) arr_2 [i_4 - 1] [i_3] [i_0])), ((short)-30605)))))));
                    }
                    var_17 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((max((arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_3]), (arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)223)) - (197))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_1 - 2] [i_0 - 1] [i_0] [i_0 + 1]))) ? (((/* implicit */unsigned int) max((arr_9 [i_1 + 1] [i_0 + 2] [i_0 + 1] [i_0 - 1]), (arr_9 [i_1 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 2])))) : (((unsigned int) (_Bool)1))));
                    arr_14 [i_1 - 1] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_3] [i_3] [i_3])), (-1799049923)))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))))))));
                    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1)) < ((+(((/* implicit */int) (signed char)50))))));
                }
                for (int i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 - 1]))) : (arr_18 [i_5 + 1] [i_1 - 2] [i_0 + 2] [i_0 + 2])))), (((((((/* implicit */_Bool) 12U)) || (((/* implicit */_Bool) 159113255911704724ULL)))) ? ((-(3098605634076581811ULL))) : (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1 - 1] [i_5] [i_5])), (arr_3 [i_0 - 1] [i_0 - 1] [i_5])))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), ((-(arr_4 [i_0] [i_5] [i_0] [i_1 - 2])))));
                    arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_11 [i_0 + 1] [i_1 - 1] [i_0] [i_0] [i_5 + 2]))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)138)), (-1727248234))))))) ? ((~(((9816378459798187420ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))))) : (max((((/* implicit */unsigned long long int) -989922307)), (min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0 + 2] [i_0])), (12961069174364570452ULL)))))));
                    arr_20 [i_0 + 1] [i_1] [i_1] [14U] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2])) ? (max((((((/* implicit */_Bool) arr_16 [(short)16] [i_1])) ? (12961069174364570427ULL) : (((/* implicit */unsigned long long int) -1823582370)))), (((/* implicit */unsigned long long int) max((1799049931), (((/* implicit */int) arr_15 [i_0 - 1] [i_1 - 2] [(short)14] [i_1]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-25128)), (max((((/* implicit */int) (short)-25128)), (1799049948))))))));
                }
                var_22 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) 159113255911704724ULL))) ? (max((arr_8 [i_0] [i_0 + 2] [i_1] [i_1 + 1]), (((/* implicit */unsigned int) (short)2047)))) : (((/* implicit */unsigned int) max((-620757350), (((/* implicit */int) (short)32767))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((2959252273802340597ULL), (((/* implicit */unsigned long long int) (unsigned char)202))));
    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)6)), (((int) var_3))))), ((-(min((var_3), (var_4)))))));
}
