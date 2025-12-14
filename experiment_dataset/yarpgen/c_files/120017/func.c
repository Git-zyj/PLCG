/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120017
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) -9223372036854775800LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))))), (((arr_1 [5]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((unsigned char) arr_1 [(signed char)8])))));
        var_13 = ((/* implicit */int) arr_1 [i_0]);
        var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((0U), (((/* implicit */unsigned int) (unsigned char)0))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)148)) ? (3114904735408375326LL) : (1871294410291942972LL))))) : (((/* implicit */long long int) var_8))));
        var_15 |= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)8191))))))) || (((/* implicit */_Bool) arr_1 [i_0 - 1]))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] |= ((/* implicit */signed char) ((unsigned short) arr_3 [i_1] [i_1]));
        var_16 = ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
        arr_5 [0] = ((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)0)));
    }
    var_17 = ((/* implicit */int) var_11);
    var_18 |= ((/* implicit */int) var_0);
    var_19 = ((/* implicit */unsigned int) min((min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_7)))), (min((var_2), (var_2))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
    var_20 = ((/* implicit */_Bool) var_11);
}
