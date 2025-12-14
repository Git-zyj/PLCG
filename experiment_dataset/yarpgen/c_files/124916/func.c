/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124916
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
    var_20 += ((/* implicit */long long int) ((7110276239764308590ULL) + (((/* implicit */unsigned long long int) 2147483647))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_2] [i_0]))) / (arr_6 [14LL] [i_1])));
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_11);
    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    var_25 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (17419089830035281847ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_2))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_10)) : (var_18))))));
}
