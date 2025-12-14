/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170893
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
    var_15 = ((/* implicit */unsigned char) ((var_10) / (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)106)) ? (3815387768U) : (4109470955U)));
                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3815387765U)) ? (var_1) : (var_3))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) % ((~(var_3)))))));
                var_18 = 18446744073709551603ULL;
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0 + 1]))) ? (arr_3 [i_0] [i_1] [i_0]) : (((((/* implicit */_Bool) arr_7 [i_0 - 4])) ? (((/* implicit */int) arr_7 [i_0 + 2])) : (((/* implicit */int) arr_7 [i_0 - 2]))))))));
                    var_20 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2]))) % (3815387754U))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 3]))) : (arr_2 [i_0 - 3])))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_12);
    var_22 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                arr_15 [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_3] [i_4])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) & (479579508U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                arr_16 [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) >= (4294967295U)))), (((((/* implicit */int) arr_13 [i_3] [i_3] [i_3])) >> (9U)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_6] [4U] [i_4] [i_3] [i_3])))));
                            arr_21 [i_6] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_3]))));
                        }
                    } 
                } 
                var_24 *= ((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)15705)) * (((/* implicit */int) (unsigned short)43186)))))))), (arr_19 [i_3] [i_3] [i_3] [i_3] [(signed char)20])));
            }
        } 
    } 
}
