/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103142
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
    var_12 = ((/* implicit */_Bool) ((unsigned char) (signed char)-2));
    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)511)))))))), (var_7)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-20017)) + (2147483647))) >> (((((((/* implicit */_Bool) -1569247816)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) 719685560)))) - (758139605U)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(signed char)7] [i_1] [i_0])) >> (((((/* implicit */int) var_11)) - (111))))))))) % (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3968))))) || (((/* implicit */_Bool) max(((unsigned short)3992), ((unsigned short)3968)))))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))));
                }
            } 
        } 
    }
}
