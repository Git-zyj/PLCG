/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16146
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
    var_13 = ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((_Bool) (unsigned short)0));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
                    arr_8 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) / (((/* implicit */int) (signed char)59))));
                    arr_9 [i_0] [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_1 [i_2]) : (arr_1 [i_0])))) && ((((_Bool)0) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0]);
                }
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_16 [i_3] [i_1] [i_4] [2] [(_Bool)1] = max((((long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_3] [i_1] [i_3] [(_Bool)1])) : (((/* implicit */int) (signed char)-42))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) | (((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (_Bool)0))))))));
                            arr_17 [i_3] [i_3] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) ((4226659416U) < (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))) & (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0])))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [4U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) min((arr_1 [i_3]), (((/* implicit */unsigned long long int) (signed char)-16)))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))) | (arr_11 [i_0 + 1] [i_0 + 1] [i_0])))));
                        }
                    } 
                } 
                arr_19 [i_1] [i_0] = ((/* implicit */_Bool) min((arr_15 [i_1] [(short)14] [(short)14] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (((int) arr_11 [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)62)))))));
                arr_20 [i_0] [i_0] [(short)11] = ((/* implicit */unsigned short) ((arr_15 [(short)16] [i_1] [10U] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(8191U)))) < (((long long int) (_Bool)1))))))));
            }
        } 
    } 
}
