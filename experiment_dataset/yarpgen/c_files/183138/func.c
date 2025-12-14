/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183138
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (-(2367793501U))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((long long int) (~(((/* implicit */int) (unsigned short)0))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 3] [i_0 - 3])) : (((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_0 + 1]))));
                    var_14 = ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0]));
                    var_15 = ((/* implicit */signed char) var_9);
                    arr_12 [i_0] = ((/* implicit */_Bool) arr_11 [i_0 - 2]);
                }
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_16 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) (short)32767))), (((arr_11 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((((arr_6 [i_1]) >> (((((/* implicit */int) var_6)) - (13781))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 3] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)6)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                    arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) arr_0 [i_4])) : (((int) min((((/* implicit */unsigned int) (short)7)), (2744564345U))))));
                    arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 - 3]))) ? ((-(arr_5 [i_0 - 3] [i_0] [i_0 - 2]))) : (((arr_5 [i_0 - 3] [i_0] [i_0 - 2]) / (arr_5 [i_0 + 3] [i_0] [i_0 + 3])))));
                }
                var_16 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1]);
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                arr_19 [i_0] = ((/* implicit */unsigned int) ((signed char) (short)508));
                arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((arr_15 [i_0] [i_0]) / (arr_15 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3382)))));
            }
        } 
    } 
}
