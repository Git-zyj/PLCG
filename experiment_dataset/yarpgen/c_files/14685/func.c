/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14685
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
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((min((((/* implicit */int) (unsigned short)51709)), (var_12))), (((/* implicit */int) (signed char)-124))))), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) + (var_10))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-124)) ? (var_1) : (((/* implicit */int) (short)16383)))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)124)) ? (var_4) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [(_Bool)1] [(_Bool)1]);
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((arr_1 [i_0] [i_0]) ? (-279874059) : (((/* implicit */int) (signed char)-124))));
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */int) max((var_15), ((+(((/* implicit */int) (signed char)98))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_16 = ((/* implicit */_Bool) max(((+(min((var_12), (((/* implicit */int) arr_13 [i_2] [i_2] [i_0])))))), ((-(arr_4 [12])))));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) min((8160271164695025721LL), (((/* implicit */long long int) (short)7012)))))))), (arr_0 [i_3]))))));
            }
        }
    }
    var_18 -= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -8160271164695025721LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) != (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & (var_7)))))) ? (min((((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-124)))))), (var_3))) : (max((((/* implicit */unsigned long long int) var_2)), (var_3)))));
}
