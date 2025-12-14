/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170425
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
    var_18 = ((((/* implicit */_Bool) (~(min((var_0), (((/* implicit */unsigned long long int) var_11))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-36)), (var_9)))) ? (((/* implicit */long long int) var_14)) : (min((3829739642812096198LL), (((/* implicit */long long int) var_12))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned short) ((_Bool) 2043917089))))));
                    arr_9 [8ULL] [(unsigned short)16] [(unsigned char)18] [2LL] |= ((/* implicit */int) var_16);
                    var_20 = ((/* implicit */unsigned short) var_14);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) arr_7 [0ULL] [i_1] [i_2])));
                }
            } 
        } 
    } 
}
