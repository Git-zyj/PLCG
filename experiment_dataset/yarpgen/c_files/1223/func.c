/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1223
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
    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (min((var_10), (((/* implicit */unsigned int) var_3)))))))) >= (var_2)));
    var_12 = ((/* implicit */int) ((unsigned long long int) min((min((918218795U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) var_5)))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), ((-(3515173925467343910ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 7; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) 4179508585528116596ULL);
                    var_15 -= ((/* implicit */unsigned int) var_4);
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) min((-243936337953447700LL), (((/* implicit */long long int) (+(var_0))))));
                    arr_11 [i_0] [i_0] [6U] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-101)))))))));
                    var_16 = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
}
