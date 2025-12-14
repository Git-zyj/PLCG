/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157272
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
    var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((3833400654U) == (2713998413U)))), (var_12))) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)10025)) == (((/* implicit */int) (short)13806))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_7 [i_2] [(short)3] [(short)3] [(short)3] = ((/* implicit */unsigned short) (short)-29129);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] = ((/* implicit */short) (+(min((((((/* implicit */long long int) ((/* implicit */int) (short)13834))) - (arr_9 [i_2] [i_3] [i_2] [i_2] [i_1] [i_0]))), (((/* implicit */long long int) ((unsigned short) (short)29128)))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)13806)) == (((((/* implicit */_Bool) (short)29129)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (short)-13806)))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) (+(((max((((/* implicit */long long int) (_Bool)0)), (var_2))) / (min((((/* implicit */long long int) (short)-29112)), (arr_9 [8U] [i_1] [i_2] [i_3] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [6] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (((((/* implicit */_Bool) arr_9 [i_0] [10LL] [i_1] [i_1] [i_0] [i_0])) ? (-7463397045740649961LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))));
                }
                /* vectorizable */
                for (int i_5 = 4; i_5 < 13; i_5 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */signed char) (_Bool)0);
                    var_22 |= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (short)11171)))));
                }
                var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-29135)) : (((/* implicit */int) (unsigned char)11))))), (((arr_3 [i_1]) * (arr_3 [i_0])))));
                arr_18 [i_1] [12U] [i_0] = ((/* implicit */short) (+(((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)7), (((/* implicit */unsigned short) (short)-4585)))))) : ((~(32767ULL)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)29138)) & (((/* implicit */int) (unsigned short)7))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (9223372036854775807ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -657979103091784363LL)) && (var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-2147483647 - 1))), (3072U)))) || (((/* implicit */_Bool) ((unsigned int) 2384870759U))))))));
}
