/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11835
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
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 871629625U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) : (871629636U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-20111)) ? (-1472326773) : (1472326772))))))) ? (((((/* implicit */_Bool) 1472326765)) ? (((/* implicit */int) min(((unsigned char)3), ((unsigned char)10)))) : (((((/* implicit */_Bool) 3751832779U)) ? (((/* implicit */int) (unsigned char)5)) : (-671814000))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max(((short)-17788), (var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1472326773)) ? (2884120807U) : (((/* implicit */unsigned int) -1472326772))));
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */_Bool) -281003753880183714LL)) ? (arr_2 [i_0] [i_0] [(short)8]) : (((/* implicit */unsigned int) 1472326747)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) 1472326772)) : (arr_1 [i_1])))))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned int) max((((/* implicit */short) arr_0 [(_Bool)0])), (var_2)))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1743248515U))), (((/* implicit */unsigned int) -2065918969))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_6);
}
