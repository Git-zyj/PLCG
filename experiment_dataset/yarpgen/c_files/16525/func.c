/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16525
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
    var_12 = ((/* implicit */long long int) var_3);
    var_13 = ((/* implicit */int) min((var_1), (var_1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_5 [(_Bool)0] [(_Bool)0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) ((signed char) 1148417904979476480ULL))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))))));
                        arr_11 [i_0] [i_2 + 4] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))) ? (((var_11) ? (((unsigned int) arr_3 [i_3] [i_2] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_2] [i_3])) | (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))) * (25)))));
                    }
                    var_16 = ((/* implicit */unsigned int) (((~(max((283726776524341248LL), (((/* implicit */long long int) arr_8 [i_2] [i_1] [i_1] [i_0] [i_0])))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_12 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)0)), (((((/* implicit */_Bool) arr_2 [i_2 + 4] [i_2 + 3] [i_0])) ? (((/* implicit */unsigned long long int) 22U)) : (var_4)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_2 + 3] [i_0] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0U)), (max((((/* implicit */unsigned long long int) var_1)), (0ULL)))))) ? (16777152U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_1] [i_4] [i_0])), (var_7)))) ? (0) : (((/* implicit */int) (unsigned char)10))))));
                                var_17 *= (signed char)124;
                                arr_19 [i_1] [i_2 - 2] [i_4] [i_0] = ((/* implicit */_Bool) (short)-18);
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_21 [i_0] [i_1] [i_6]);
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-((~((~(((/* implicit */int) var_5))))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (((_Bool)0) ? (4U) : (4278190143U)))) ? (((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [5U] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_20 [10U]))))));
                }
                arr_24 [i_0] [i_0] [i_1] = 0U;
            }
        } 
    } 
}
