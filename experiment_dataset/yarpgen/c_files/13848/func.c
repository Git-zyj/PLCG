/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13848
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
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
    var_16 = ((/* implicit */short) var_8);
    var_17 = ((/* implicit */_Bool) (~((-(((18014398509481952LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [i_2] [i_2] [i_2] [i_4] [i_1] = ((/* implicit */_Bool) var_0);
                                var_18 = ((/* implicit */unsigned int) ((max((arr_12 [i_4] [i_3] [i_3] [i_3 - 1]), (arr_12 [i_4] [i_4] [i_1] [i_2]))) ? ((+(((/* implicit */int) (unsigned char)242)))) : (((/* implicit */int) max((arr_8 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]), (arr_7 [i_2] [i_2] [i_2] [(_Bool)0]))))));
                                arr_15 [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59989)) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_2] [i_3]))))))) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_2]))));
                                arr_16 [i_4] [(_Bool)1] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (_Bool)0);
                                arr_17 [i_2] [i_4] [i_2] [i_3 - 1] [(unsigned char)8] = ((/* implicit */_Bool) 131071U);
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */signed char) var_13);
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) arr_5 [i_5] [i_2]);
                            }
                            arr_22 [i_1] = ((/* implicit */long long int) ((max((arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1]), (var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_2] [i_3 + 1] [i_0]))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) + (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3375222327U)))))));
                        }
                    } 
                } 
                arr_23 [i_1] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [17U] [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
