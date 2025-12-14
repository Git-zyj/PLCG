/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175058
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0])) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((int) var_0)))))));
        var_13 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_3 [i_0 - 2] [i_0 - 3]) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [0LL]))) : (4980595996072238318LL))) : (((/* implicit */long long int) (+(var_4))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) ^ (var_4)))));
        var_14 *= ((/* implicit */long long int) arr_0 [i_0 + 1]);
    }
    var_15 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) * (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((min((((/* implicit */long long int) var_11)), (629241566412973187LL))) < (((/* implicit */long long int) (~(arr_3 [(signed char)20] [i_2])))))) ? (max((var_11), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_2 - 2] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_2 - 1]), (arr_8 [i_2 - 2]))))))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((min((var_11), (((/* implicit */unsigned int) arr_10 [i_1] [i_3])))) % (arr_5 [i_1]))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)14] [i_1]))) : (8912956175683600547LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2322411396925728063LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))))) : (arr_6 [i_1]))))));
                    arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 2948406761U)), (4980595996072238318LL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_0 [i_2 - 1]), ((_Bool)0)))) == (((((/* implicit */_Bool) arr_4 [i_3] [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 2])) : (((/* implicit */int) arr_4 [i_3] [i_2 - 2]))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_6))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1950266502U)) ? (6560152321803164977LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((+(((/* implicit */int) arr_16 [2LL] [i_2 - 1] [i_2 + 1])))) : (((/* implicit */int) arr_8 [i_1])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) max((max((arr_20 [i_6 - 2] [i_1] [i_2 + 1]), (arr_20 [i_6 - 2] [i_1] [i_2 + 1]))), (((/* implicit */unsigned int) ((int) (~(arr_3 [i_3] [i_3])))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_1] [i_2 + 1] [i_1])) : (((/* implicit */int) var_9))))) ? (min((2948406761U), (((/* implicit */unsigned int) arr_1 [i_1])))) : (2948406761U)))), (var_8))))));
                        }
                    }
                }
            } 
        } 
    } 
}
