/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116988
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
    var_15 += ((/* implicit */short) var_1);
    var_16 = 6504501094129149667LL;
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)65530))))))) >= (-6504501094129149666LL)));
                    var_17 = (((!(((/* implicit */_Bool) 830265331U)))) ? (arr_6 [i_0 + 2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-32747)), ((unsigned short)22362)))))))));
                    var_18 = arr_8 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2];
                }
            } 
        } 
    } 
}
