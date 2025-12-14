/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17983
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
    var_15 &= ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))), ((~(((/* implicit */int) ((signed char) var_7))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) var_11);
                                var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3123067623U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((arr_8 [i_0] [(signed char)4] [i_0]), (((/* implicit */long long int) arr_3 [i_0] [10ULL]))))))));
                                arr_11 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_3] [i_4]);
                                var_19 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (short)-30373)) / (var_8)))), (((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3])) ? (4132660454331912608LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2] [i_0 - 1])))))));
                            }
                        } 
                    } 
                }
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-(((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))) : (var_6))))));
                var_20 = ((/* implicit */unsigned long long int) (short)15062);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((max((3490288323624740080ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 1] [i_1 - 1])))), (((/* implicit */unsigned long long int) min((arr_3 [i_0 + 2] [i_1 - 2]), (((/* implicit */short) ((3123067593U) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))))))));
            }
        } 
    } 
}
