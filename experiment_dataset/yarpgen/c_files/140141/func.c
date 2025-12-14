/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140141
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
    var_15 = ((/* implicit */int) 4150706070U);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((int) (unsigned char)251)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 2]))))) : (((((/* implicit */_Bool) (short)-9311)) ? (18010207568399343607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_5))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(max((max((arr_6 [i_1 + 1] [i_2]), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (~(3345523148U)))))))))));
                }
            } 
        } 
    } 
}
