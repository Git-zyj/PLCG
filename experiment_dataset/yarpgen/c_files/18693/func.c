/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18693
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [(_Bool)1] = var_4;
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1 - 1])), ((unsigned short)65535))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))), (min((var_7), (((/* implicit */long long int) (unsigned short)65534))))))), (((((((/* implicit */_Bool) 2573700159471137195ULL)) || (((/* implicit */_Bool) 747509663U)))) ? (min((((/* implicit */unsigned long long int) var_8)), (8276799772901860316ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65521)) ? (-2016938552408527404LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))))));
                arr_10 [i_0] [9LL] = ((/* implicit */unsigned int) ((unsigned long long int) 2016938552408527403LL));
                arr_11 [(short)2] = ((/* implicit */long long int) (short)-7196);
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((16114900253091431667ULL), (((/* implicit */unsigned long long int) 2016938552408527387LL))));
}
