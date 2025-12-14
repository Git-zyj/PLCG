/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166598
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
    var_17 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) 65535U)) ? (2324151872409576930ULL) : (((/* implicit */unsigned long long int) 4294967295U)))), (((var_6) / (((/* implicit */unsigned long long int) 1U)))))), (min((max((10814471265313187024ULL), (9282381670682019790ULL))), (((/* implicit */unsigned long long int) var_15))))));
    var_18 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) - (min((1810086367U), (4294967292U)))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1322930558U)) ? (4294967292U) : (4187338181U)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_11 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) / (arr_0 [i_2 - 1])))) ? (((unsigned long long int) ((5310181804665881263ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16024)))))) : (((((/* implicit */_Bool) min((4223890856598633086ULL), (arr_7 [i_0] [i_1] [(short)5] [11ULL])))) ? (((/* implicit */unsigned long long int) arr_1 [i_2 - 1] [i_2 + 1])) : (14715081426372537164ULL))));
                    arr_12 [6ULL] [i_2] [i_2] [i_2] = max((2345033454544390901ULL), (((/* implicit */unsigned long long int) ((11912092424692288754ULL) != (13832374887135836508ULL)))));
                    var_20 = ((var_3) >> (((var_1) - (7807717969183124012ULL))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_3])))) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (var_10) : (((/* implicit */unsigned long long int) var_14)))) : (((unsigned long long int) arr_0 [5ULL]))));
                    arr_17 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_3]))));
                }
            }
        } 
    } 
    var_22 = var_1;
}
