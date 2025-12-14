/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170419
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
    var_13 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0 - 2])))));
        var_15 = ((/* implicit */long long int) ((unsigned int) var_6));
        var_16 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_17 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) (unsigned short)240)) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 4])) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_10)))), (((/* implicit */int) (((+(((/* implicit */int) (unsigned char)0)))) == (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_12))))))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) arr_3 [i_1]);
        var_19 = ((/* implicit */short) min(((+(arr_2 [i_1]))), ((-(arr_2 [i_1])))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_6 [i_2] = ((/* implicit */unsigned short) arr_2 [i_2]);
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2])) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_3 [i_2])))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_7))))));
    }
    var_20 = ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */signed char) (unsigned short)40565);
    var_22 ^= ((/* implicit */unsigned char) var_11);
}
