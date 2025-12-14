/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144215
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((372802791) / (var_9)))) < (15210296640997314694ULL)))))));
    var_19 = ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (max((((/* implicit */int) var_4)), (var_2))) : ((~(((/* implicit */int) var_8))))))));
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_17))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_22 += ((/* implicit */unsigned char) (+(arr_1 [i_2] [i_1])));
                    var_23 = ((/* implicit */signed char) ((696267505334489648ULL) % (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)4958)), (9223372036854775807LL))))));
                }
            } 
        } 
    } 
}
