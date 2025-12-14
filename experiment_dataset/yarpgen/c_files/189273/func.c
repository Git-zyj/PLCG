/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189273
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
    var_11 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-100))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned char)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)0] [(signed char)13])))));
                var_12 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18))) : (9223354444668731392ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9903)) / (-1908218121))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [(unsigned char)17] = ((/* implicit */unsigned char) arr_7 [3ULL]);
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)41))))) : (min((arr_1 [i_0] [i_0 + 4]), (arr_1 [i_0] [i_0 + 1]))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) arr_4 [i_3] [12U] [i_0]);
                    var_15 = ((/* implicit */long long int) (~(((unsigned int) (signed char)-1))));
                    arr_12 [i_1] [i_1] [i_3] [0ULL] = ((/* implicit */unsigned char) var_0);
                    arr_13 [4ULL] = ((/* implicit */unsigned short) var_6);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
}
