/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159849
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((arr_1 [i_1]), (((/* implicit */int) arr_3 [i_0] [i_1])))) | (((/* implicit */int) var_1))))) ? (((/* implicit */int) max(((unsigned short)14207), (((/* implicit */unsigned short) (short)-24074))))) : (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)6)) ? (3709352841105467164LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) 6840326428248156038LL);
}
