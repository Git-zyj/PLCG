/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139622
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
    var_15 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) (unsigned char)165)))) ? (arr_1 [i_0 - 1]) : ((+(((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) var_10))));
        var_17 = ((/* implicit */int) (signed char)-52);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((((/* implicit */int) var_13)) >> (((((/* implicit */int) (signed char)-71)) + (71))));
        var_18 = ((/* implicit */short) ((arr_3 [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((max((var_4), (((/* implicit */unsigned long long int) var_3)))) >> (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))))) == (arr_1 [i_2]))))));
        var_20 = ((/* implicit */int) var_8);
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (max((((/* implicit */int) arr_6 [i_3])), (arr_8 [i_3])))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((arr_1 [i_3]) != ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3])))))))));
    }
}
