/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161111
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
    var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (var_11)))), (var_10))), (((/* implicit */int) ((short) ((signed char) var_3))))));
    var_13 &= ((/* implicit */unsigned char) (-(((min((5647278072642597391ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_14 = ((/* implicit */int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_4))), (max((var_0), (((/* implicit */unsigned int) (signed char)-1)))))) >> (((/* implicit */int) (unsigned char)0))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) min(((~(1856356555U))), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 - 1]) : (var_2)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_1 - 1]))));
                    arr_11 [i_0 + 1] = ((/* implicit */unsigned char) ((int) arr_0 [i_1 + 2] [i_0 + 1]));
                    arr_12 [i_0] [i_1] [(short)7] [i_0 + 1] = (unsigned char)239;
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        arr_16 [i_3] [(unsigned short)16] [(signed char)5] [i_3] = ((/* implicit */short) arr_6 [i_0]);
                        arr_17 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */short) arr_3 [i_0 + 2] [(short)15]);
                    }
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_4] [2ULL] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_15 [i_1] [i_4] [i_4] [19])))));
                    arr_21 [i_0 + 1] [i_4] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_15 [13] [i_0 + 2] [i_4] [i_4 + 1])))) & ((~(75884014)))));
                    arr_22 [i_4 + 1] [i_4] [i_4] [17U] = ((/* implicit */short) ((((((int) arr_9 [i_0] [i_0])) | (((/* implicit */int) ((short) var_7))))) | (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_4 [i_0 + 1] [i_1]))) >= (((((/* implicit */int) (unsigned char)5)) >> (((/* implicit */int) var_8)))))))));
                    arr_23 [(signed char)10] [(unsigned short)8] [i_4] = arr_19 [i_0] [i_0 + 1] [i_4 + 1];
                }
                arr_24 [18U] [i_0 + 1] = ((/* implicit */unsigned short) ((arr_2 [i_1 - 1]) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_1])))))));
            }
        } 
    } 
}
