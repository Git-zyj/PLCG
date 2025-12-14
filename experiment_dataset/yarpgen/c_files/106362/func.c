/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106362
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0] [i_0]) : (var_13))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))) ? (var_2) : (((/* implicit */int) (_Bool)0))));
        var_17 = arr_1 [i_0] [i_0];
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_3 [9U] [i_1])))))))) && (((((/* implicit */unsigned long long int) (+(var_9)))) > (min((((/* implicit */unsigned long long int) var_11)), (var_4)))))));
            arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_1 + 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 + 2])))) ? (((/* implicit */int) max((var_6), (((/* implicit */short) arr_0 [i_1 + 1] [i_1 + 2]))))) : (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_0))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [(unsigned short)20] [16LL] [i_3] [16LL] [i_1] = ((/* implicit */unsigned short) ((short) ((-8120918897010738941LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_1] [i_1 - 1] [i_2] [(short)9] [i_4] [i_4] = ((/* implicit */_Bool) (+((-(((arr_2 [i_1]) / (((/* implicit */int) var_12))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_8 [i_1 - 1] [i_2]) - (((/* implicit */long long int) arr_12 [(_Bool)1] [i_3] [i_2] [i_1])))), (((/* implicit */long long int) arr_12 [i_0] [i_1 + 2] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((var_3), (((/* implicit */unsigned int) var_10))))))) : (var_15)));
                            arr_18 [i_0] [i_1 + 2] [6U] [i_1] [i_4] = var_12;
                            arr_19 [i_0] [(_Bool)1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */short) max((min((((arr_15 [i_0] [i_1] [i_2] [i_0] [19ULL] [i_3] [i_4]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [18U] [i_1] [i_1] [(unsigned char)19] [i_2] [i_3] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_8) : (var_13)))))), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_4]))));
                            var_19 = ((/* implicit */_Bool) min((((arr_10 [i_0] [i_1 + 1] [i_1 - 1]) / (((/* implicit */unsigned long long int) var_15)))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1 - 1])) ? (arr_10 [i_0] [i_0] [i_1 - 1]) : (arr_10 [i_0] [i_1 + 1] [i_1 - 1])))));
                        }
                        arr_20 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_1] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))), ((((_Bool)1) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_2] [i_3])) : (((/* implicit */int) arr_0 [20ULL] [i_2]))))))));
                        arr_21 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_10 [i_0] [i_1 - 1] [(_Bool)1])))) && (((/* implicit */_Bool) arr_3 [0U] [i_1]))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((_Bool) arr_8 [i_5] [i_5])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))), ((~(arr_14 [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) min((arr_1 [i_5] [i_5]), (((/* implicit */long long int) var_10))))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_7 [i_5] [i_5] [i_5] [i_5]))));
        arr_25 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_14 [20ULL] [i_5] [i_5] [0] [i_5]))) * ((-(((arr_14 [i_5] [i_5] [i_5] [i_5] [(signed char)22]) + (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5]))))))));
    }
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)2107)), (-2509546576539771842LL)));
}
