/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143389
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) arr_0 [i_1]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 178953165)) ? (-5203263548077124109LL) : (((/* implicit */long long int) -2144124321))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [(short)6] [(short)6] [i_0 + 3] [i_0] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1564462913)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) max(((_Bool)1), (arr_6 [i_0] [i_1] [(_Bool)1] [i_3] [i_4]))))))) : (((arr_2 [i_0 - 1]) * (((/* implicit */unsigned long long int) var_2)))))))));
                                var_13 = 178953165;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((long long int) max((min((var_5), (var_5))), (5203263548077124120LL))));
                                var_15 = ((/* implicit */_Bool) ((arr_1 [i_0] [4ULL]) ? (min((((/* implicit */long long int) arr_7 [i_0 + 1] [9ULL] [i_0] [9ULL] [i_0] [i_0 + 2])), (min((((/* implicit */long long int) arr_16 [i_5] [i_5])), (var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_5] [(_Bool)1]))))))))));
                                var_16 = ((/* implicit */short) (((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_2))))) != (((((/* implicit */_Bool) -5203263548077124109LL)) ? (-4565597990080534455LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)56)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_17 = min((((((/* implicit */long long int) 3934394669U)) & (4565597990080534443LL))), (((((/* implicit */_Bool) arr_17 [i_0 + 3] [i_0] [i_0 + 2] [i_0 - 1])) ? (arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        var_18 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) arr_16 [i_0 + 1] [i_0 - 1])), (var_3))));
                        var_19 = ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2]);
                        var_20 = ((/* implicit */unsigned int) max((max((arr_12 [i_0] [i_0] [(signed char)4]), (max((4565597990080534455LL), (((/* implicit */long long int) (short)13644)))))), (((/* implicit */long long int) min((((arr_16 [9] [14]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))), (((((/* implicit */_Bool) 886088856)) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_2] [(short)14] [(_Bool)1])) : (((/* implicit */int) var_6)))))))));
                    }
                }
                var_21 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)133)))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned char) var_10);
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_24 -= ((/* implicit */int) var_3);
}
