/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134770
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
    var_10 = ((/* implicit */unsigned char) ((int) (((!(((/* implicit */_Bool) (unsigned char)51)))) ? ((+(((/* implicit */int) (unsigned char)51)))) : (var_1))));
    var_11 = ((/* implicit */unsigned char) ((int) var_1));
    var_12 &= ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)62)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (var_9)))))))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((max((var_9), (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (arr_0 [i_0] [i_0]))) + (2147483647))) >> (((arr_2 [i_0] [i_0] [i_0]) + (1673336370)))))));
                var_15 = ((/* implicit */int) (+(262143ULL)));
                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) || (((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 25165824)))) && (((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_0]), ((unsigned char)204))))))));
            }
        } 
    } 
}
