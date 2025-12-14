/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158297
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (signed char)37));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    var_17 += ((/* implicit */int) (((_Bool)1) ? (0LL) : (-1LL)));
                    var_18 = ((/* implicit */unsigned short) var_15);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1 + 1] [8U]))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5394296873736193166ULL)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (arr_11 [i_0] [i_3]) : (arr_4 [i_4 + 1])));
                        arr_15 [i_0] [i_0] [(_Bool)1] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_12 [i_1 + 1] [i_3] [i_4 - 1] [i_4 + 1]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 1055697595U)), (10LL))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2047)) != (((/* implicit */int) arr_6 [i_1 + 1] [i_1]))))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) max((var_16), (var_11)))))));
                        arr_20 [i_0] [i_0] [8ULL] [i_0] [i_5] [i_0] &= ((/* implicit */unsigned short) var_7);
                    }
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1055697595U), (458364098U)))) ? (((((/* implicit */_Bool) arr_4 [i_3])) ? (4026531840U) : (458364098U))) : (((/* implicit */unsigned int) ((int) arr_4 [i_1 - 1])))));
                }
                arr_21 [i_0] [i_1] = ((/* implicit */long long int) min((max((((/* implicit */unsigned char) var_14)), (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))), (((/* implicit */unsigned char) ((-12LL) == (((((/* implicit */_Bool) 3836603197U)) ? (3LL) : (5159972051722058870LL))))))));
                var_22 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (3022058096149474943ULL) : (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) 15U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_0])), (512821436609864863LL))))))) : (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_18 [i_0]))))) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(short)2]))))));
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((arr_16 [i_1 - 1] [i_1] [i_1 + 1] [i_0]), (((/* implicit */unsigned int) (unsigned char)133))))) ? (((((/* implicit */int) arr_6 [i_0] [i_1])) | (var_4))) : (((/* implicit */int) ((unsigned short) 15424685977560076672ULL))))));
            }
        } 
    } 
    var_23 += ((/* implicit */short) 12505181159216461339ULL);
}
