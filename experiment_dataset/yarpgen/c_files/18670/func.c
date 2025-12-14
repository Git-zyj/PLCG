/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18670
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (403731422364325612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */_Bool) (~(1000639948)));
    var_18 = var_13;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 + 1] [i_2] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) max((arr_0 [i_1] [i_3]), (15498671902090463626ULL))))))) & (arr_10 [i_0 + 3] [i_1] [i_2] [i_3 - 1])));
                            var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)28296)))) && (((/* implicit */_Bool) (short)-23791))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_1] [i_4 + 1]), (arr_9 [i_4 + 2] [i_4] [i_4 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) (short)0)) < (1000639953)))) : (((((/* implicit */_Bool) arr_9 [i_4 + 3] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_1] [i_4] [i_4 + 1])))))))));
                    var_21 = ((/* implicit */int) arr_3 [i_1]);
                    arr_15 [i_0 + 3] [i_4 - 1] = ((/* implicit */unsigned char) (~(3694337428852125106LL)));
                }
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((arr_0 [i_0] [i_0 + 3]) >= (var_8))))));
            }
        } 
    } 
}
