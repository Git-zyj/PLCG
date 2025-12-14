/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165609
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(18446744073709551611ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_1)), (var_11))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1195997551U))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((max((min((10842411105215938577ULL), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) arr_4 [i_0] [(short)2] [i_1])))), (13527961461190498553ULL)));
                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_1 - 1] [i_1 + 1]))) || (((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned char)99))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_10);
}
