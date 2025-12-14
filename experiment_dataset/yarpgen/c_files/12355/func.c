/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12355
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
    var_11 += ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((((/* implicit */int) max((var_0), (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) arr_1 [3LL])))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_13 = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (signed char)37)) + (var_3))), (((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (signed char)-27)) ^ (((/* implicit */int) arr_0 [(signed char)10] [(signed char)10])))));
        var_15 = ((/* implicit */unsigned long long int) (signed char)71);
        var_16 = ((/* implicit */unsigned int) ((signed char) arr_0 [i_1] [i_1]));
    }
    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (signed char)-38))))));
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) max(((signed char)64), ((signed char)71)))), (max(((unsigned char)106), (((/* implicit */unsigned char) (signed char)56)))))))));
}
