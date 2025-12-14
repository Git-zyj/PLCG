/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164597
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4313541335253507669ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14133202738456043947ULL)) ? (var_2) : (var_0)))) : (((((/* implicit */_Bool) var_9)) ? (14133202738456043947ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned char) ((var_11) ^ (((/* implicit */int) arr_1 [i_0 - 4]))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] |= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_1 - 2])));
                    var_16 = arr_3 [i_0] [i_1] [i_2];
                }
            } 
        } 
        var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1665453994U))))));
        arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(0U))))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) -1522825959)))), (((var_13) < (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))))))) != (var_6)));
}
