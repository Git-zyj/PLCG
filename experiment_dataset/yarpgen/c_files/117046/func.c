/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117046
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(3178577932U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3178577908U)) ? (var_16) : (var_0)))) ? (((/* implicit */int) ((3178577925U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) ((1116389413U) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))) : (((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (((long long int) 8191ULL))))));
    var_19 = ((/* implicit */signed char) var_7);
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_9)), (17994148980022059622ULL))) << (((18446744073709551602ULL) - (18446744073709551576ULL)))));
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((+(1116389371U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)12] [i_0]))))))))) * (((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((arr_3 [i_0] [(_Bool)1] [i_1]) / (((/* implicit */unsigned long long int) var_1))))))));
            }
        } 
    } 
}
