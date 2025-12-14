/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145217
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 |= ((/* implicit */long long int) var_0);
                    var_19 *= ((/* implicit */unsigned int) (unsigned short)24523);
                    var_20 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 1] [i_2] [(signed char)9])), ((~(18446744073709551605ULL)))));
                    var_21 = ((/* implicit */_Bool) ((2016310031555609412ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19841)))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(max((arr_4 [i_2 - 2] [i_0 + 1]), (arr_4 [i_2 - 1] [i_0 + 1]))))))));
                }
            } 
        } 
    } 
    var_23 = var_12;
}
