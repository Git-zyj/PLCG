/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146928
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 656149280500822376ULL)) ? (-979527583) : (((1690990899) >> (((/* implicit */int) var_1))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) (-(((((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (arr_1 [i_0] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                            arr_15 [i_0] [i_0] [i_0] [(signed char)3] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_8), (511))), (((/* implicit */int) ((((/* implicit */int) (short)6)) >= (((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [i_1])))))))) ? ((+(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4])))))));
                            arr_16 [i_4] [i_3 + 3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 18446744073709551613ULL);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((unsigned int) 1690990915))) - (9223372036854775807LL));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 18446744073709551612ULL);
                        }
                    }
                    var_15 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
}
