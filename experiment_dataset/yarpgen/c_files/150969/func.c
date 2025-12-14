/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150969
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
    var_12 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)51))) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((long long int) ((((/* implicit */_Bool) var_2)) ? (1040153980U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))))));
    var_13 = ((var_9) ? (max(((((_Bool)1) ? (786432) : (((/* implicit */int) (signed char)-56)))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-16)))))) : (((/* implicit */int) var_5)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */long long int) 4294967279U);
                var_15 = ((/* implicit */unsigned int) ((_Bool) min((((((/* implicit */_Bool) 6U)) ? (1152921504590069760LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((long long int) (_Bool)1)))));
                arr_4 [i_0] &= ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (628090344U)))))), (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    var_16 = var_1;
}
