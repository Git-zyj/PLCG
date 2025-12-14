/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108710
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
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) min(((-(var_12))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned int) var_6)), (3099709114U))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (var_0))))));
        var_19 = ((/* implicit */unsigned char) (+(min((max((((/* implicit */unsigned long long int) var_1)), (var_13))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) (signed char)-122);
        var_21 += ((/* implicit */unsigned int) (+((+((+(var_3)))))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= ((+(min((((/* implicit */unsigned int) (signed char)118)), (var_10)))))));
    var_23 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (signed char)-127))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) | (var_12))))) & (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_14)), (var_0))))))));
    var_24 = var_15;
}
