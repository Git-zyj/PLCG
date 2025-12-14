/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129104
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
    var_10 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_3))))), (arr_7 [i_1])))) != (((/* implicit */int) arr_5 [i_1] [8LL]))));
                    var_13 = (-((+(((/* implicit */int) arr_4 [i_1] [i_2])))));
                    var_14 = ((((/* implicit */_Bool) (+(arr_6 [i_2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) ((signed char) arr_7 [i_2]))) ? (((/* implicit */int) ((short) arr_7 [i_2]))) : (((/* implicit */int) ((signed char) arr_2 [i_0]))))) : (((/* implicit */int) arr_0 [i_2])));
                }
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_3] [0ULL] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_1] [7] [i_5])))) && (((/* implicit */_Bool) arr_2 [i_0]))))), (((unsigned char) ((signed char) arr_12 [i_5])))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((max((((/* implicit */int) arr_11 [i_5] [(unsigned char)8] [i_3] [(short)6])), (((((/* implicit */int) var_4)) | (((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0])) < (((/* implicit */int) arr_13 [i_5]))))) <= (((/* implicit */int) arr_4 [i_0] [i_4]))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
