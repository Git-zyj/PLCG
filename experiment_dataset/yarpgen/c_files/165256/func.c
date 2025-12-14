/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165256
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-36)), ((-(((/* implicit */int) var_7))))));
    var_13 = ((/* implicit */_Bool) var_11);
    var_14 = ((/* implicit */signed char) ((unsigned long long int) var_9));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (signed char)39);
                var_15 = ((/* implicit */short) min((max((11033286147382867376ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)61)) + (((/* implicit */int) (unsigned char)250))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1 - 1])))))));
                arr_8 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (arr_5 [14] [i_1 - 1])))), (((1683277384U) >> (((((/* implicit */int) arr_1 [i_0] [i_1 - 1])) - (4998)))))));
                var_16 = ((/* implicit */unsigned long long int) (unsigned short)8191);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)-27)))), (((/* implicit */int) ((signed char) var_6)))))) != (min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) var_3))))));
}
