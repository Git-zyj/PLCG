/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177609
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_7)));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((7864320) & (2147483647))) == (((/* implicit */int) (!(var_1)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 538303833U)) : (((4783217178401751519LL) | (6429915679464180287LL))))) : ((-(var_3))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((-6429915679464180289LL) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_1 [i_0])))) + (16667)))));
        var_21 = (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_22 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) ^ (var_8))));
                        var_23 = 6429915679464180287LL;
                    }
                } 
            } 
        } 
    }
}
