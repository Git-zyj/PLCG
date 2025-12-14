/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170166
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
    var_10 = var_4;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) ((unsigned char) (+(17ULL))));
        arr_2 [i_0] = ((/* implicit */signed char) min((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)10)))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 1])) - (((/* implicit */int) ((4294967264U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))))))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? ((+(2319904265U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) arr_8 [i_1])))))))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)-96)))), (((((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1])) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)123)))))))));
                arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) (short)-32755);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_2)), (var_1))), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) var_6))));
    var_13 ^= ((/* implicit */unsigned long long int) var_9);
}
