/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139740
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
    var_14 = ((/* implicit */unsigned int) (short)-14975);
    var_15 -= max((((/* implicit */unsigned short) var_5)), (var_11));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (((((-((+(((/* implicit */int) (short)18286)))))) + (2147483647))) >> (((((((/* implicit */int) (!(((/* implicit */_Bool) 2216384805431289100LL))))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */int) arr_1 [i_1])))))) - (647818565)))));
                arr_4 [i_0] [i_0] = (short)3870;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((short) arr_9 [i_4] [i_4] [i_2] [i_4] [i_4]));
                                arr_13 [i_2] [i_1] [(short)15] [i_3] [i_4] = (+(((12973786842992099498ULL) % (5472957230717452135ULL))));
                                arr_14 [i_3] = ((/* implicit */short) 870996912U);
                                var_18 = (+(arr_12 [i_0] [i_0]));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_0] [1ULL] [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_10 [(_Bool)1] [i_2] [i_2] [i_2] [i_1] [i_0]))));
                    arr_15 [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_0] [(short)22] [i_2] [i_0] [i_0] [i_2])) + (9766)))));
                    arr_16 [i_0] = arr_11 [i_2] [i_2] [i_0] [18U] [i_0];
                }
                for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    arr_19 [i_0] = ((((/* implicit */unsigned int) ((arr_17 [i_5 + 3] [i_5 + 2]) / (((/* implicit */int) (short)3870))))) & (arr_5 [i_0] [i_0] [i_1] [i_5]));
                    arr_20 [i_5] = max((arr_8 [i_5 + 3] [i_5 + 1] [i_1] [i_0]), (((((/* implicit */int) arr_8 [16U] [i_1] [i_0] [i_0])) >= (((/* implicit */int) arr_8 [i_0] [i_5 - 2] [i_5 + 2] [i_0])))));
                }
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((arr_17 [i_1] [i_1]) <= (((/* implicit */int) arr_10 [i_1] [8LL] [i_0] [i_0] [(short)6] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
}
