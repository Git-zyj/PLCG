/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157524
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
    var_10 = (signed char)-111;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) 1132634743U)))))), ((short)12348)));
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)34)) ? ((-((+(4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))) && (((/* implicit */_Bool) arr_2 [(unsigned short)15] [i_0])))))))))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (unsigned char)34))));
            }
        } 
    } 
    var_13 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)31)), ((~(8392926773556745447ULL)))));
    var_14 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) var_8)))) ? ((((_Bool)1) ? (-23771520) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_4), (var_2))))))));
}
