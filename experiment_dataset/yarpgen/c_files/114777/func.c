/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114777
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = var_2;
        var_11 = ((unsigned long long int) (-(arr_2 [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_12 = arr_10 [i_2] [i_2] [13ULL] [i_0];
                                arr_18 [i_4] = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned long long int) var_10)), (var_3)))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_3 [i_4] [i_2])));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((arr_2 [i_3]) << (((arr_2 [i_4]) - (10917841235523126669ULL)))))));
                                var_15 ^= ((/* implicit */signed char) (-(((arr_0 [i_1 + 4] [i_1 - 1]) / (arr_0 [i_1 + 1] [5ULL])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */signed char) var_2);
                        arr_21 [10ULL] [10ULL] [i_2] [10ULL] [i_0] = ((((/* implicit */_Bool) (signed char)20)) ? (max((var_6), (25ULL))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)53))))), ((-(arr_15 [i_5] [i_0] [i_1 + 4] [i_0] [i_0] [i_0]))))));
                        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (~(11208958938204230478ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18311256891237057636ULL)))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (arr_2 [i_5 + 2])))))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((signed char) (~(((unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_18 -= ((/* implicit */signed char) min((max((arr_12 [i_0] [i_0] [i_2]), (arr_15 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]))), (max((arr_5 [i_6] [i_0]), (((18446744073709551587ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [15ULL] [i_6 - 1])))))))));
                        arr_25 [i_6] [i_2] [i_6] = (~(29ULL));
                        arr_26 [i_0] [i_0] [i_6] [i_0] = ((signed char) arr_12 [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
        arr_27 [i_0] |= max((var_6), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_1)))), (((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0])))))))));
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 13984069522205891627ULL))));
}
