/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151140
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2] [(short)6] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_2])) >> (((((/* implicit */int) arr_6 [i_1 + 1] [(unsigned short)4] [i_0])) - (10623)))));
                    arr_8 [(unsigned char)10] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2])) + (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned short) (unsigned short)48556));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_13 [i_1] [(unsigned short)7] [(unsigned short)7] [i_3] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 2566061975U)) ? (((4514024227624584390ULL) - (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) min((4294967285U), (((/* implicit */unsigned int) (signed char)-67))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) / (arr_10 [i_1 - 1] [i_1 - 2] [i_1] [i_4 + 2])));
                        var_12 -= ((/* implicit */unsigned char) ((unsigned int) ((signed char) (unsigned short)22073)));
                    }
                }
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min(((((_Bool)1) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19164))))), (((((/* implicit */_Bool) ((signed char) 3765832248U))) ? (max((((/* implicit */unsigned int) var_6)), (arr_15 [6ULL]))) : (((((/* implicit */_Bool) 3022683781U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))))))))))));
                var_14 = ((/* implicit */unsigned int) arr_2 [i_0]);
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 1])) ? (arr_10 [i_1] [i_1] [i_1] [i_1 + 1]) : (arr_10 [(unsigned char)4] [(short)1] [i_1] [i_1 + 1]))) : (((/* implicit */unsigned int) (-(((var_6) - (((/* implicit */int) var_7)))))))));
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((arr_15 [i_1]), (arr_15 [i_1])))) - ((-(-416053116407663735LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((unsigned int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) var_0)))))));
}
