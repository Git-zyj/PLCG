/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160454
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_1))));
    var_18 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3755716253109483839ULL))))), (((4290692156U) & (((/* implicit */unsigned int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [(unsigned short)19] [i_0 - 1] = ((/* implicit */_Bool) ((signed char) (-((-(362998095325065024LL))))));
                var_19 ^= max((((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0 - 1])) ? (14691027820600067776ULL) : (arr_5 [i_0] [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2])) / (((/* implicit */int) (signed char)(-127 - 1)))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((3755716253109483858ULL) << (((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) - (38845))))))))));
                arr_8 [i_1] = ((/* implicit */unsigned short) ((max((362998095325065026LL), (((/* implicit */long long int) (short)-11015)))) << (((max((362998095325065026LL), (((/* implicit */long long int) arr_1 [i_0] [i_0 - 1])))) - (362998095325065025LL)))));
            }
        } 
    } 
}
