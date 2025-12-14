/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108278
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((769107388U) < (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) var_3)) & (((/* implicit */int) var_5))))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)29748)))))));
        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 650130912)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (_Bool)1)))) >= (-650130913)));
        var_13 = ((/* implicit */signed char) var_1);
    }
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)37)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2])))))))) : (((/* implicit */int) max((((-1526085989) >= (((/* implicit */int) (short)-32749)))), ((_Bool)1))))));
                var_16 -= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3565522017992068560LL))))))), ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1 + 3] [i_2] [i_1])) != (arr_3 [i_1]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((var_8) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) * (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_5)))))))) ^ (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_6)))));
}
