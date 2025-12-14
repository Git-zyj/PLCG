/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115716
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -4)) || (((/* implicit */_Bool) (signed char)36)))))))) - ((+(((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = min((((((/* implicit */_Bool) 8681356033037399487ULL)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (signed char)-9)));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (signed char)37)) == (((/* implicit */int) (signed char)-5)))))))));
        arr_4 [10LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (((/* implicit */int) var_1))))))) < ((-(min((0ULL), (((/* implicit */unsigned long long int) (signed char)4))))))));
    }
}
