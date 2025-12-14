/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17677
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (1918258605U)))) ? (((((/* implicit */_Bool) var_11)) ? (751647519) : (((/* implicit */int) (unsigned char)221)))) : (((/* implicit */int) ((short) var_6)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)99))))))) << (((((unsigned long long int) var_7)) - (101ULL)))));
                arr_4 [i_0] [i_0] = (((_Bool)1) ? (((((/* implicit */int) (unsigned char)221)) ^ (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) > (((/* implicit */int) var_5))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_14 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)65519)))) * (((/* implicit */int) (!((_Bool)1))))));
                    var_15 = ((/* implicit */_Bool) ((((min((((/* implicit */unsigned long long int) var_5)), (6323768828163892323ULL))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5))))))) : (((/* implicit */int) var_7))));
                    var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
}
