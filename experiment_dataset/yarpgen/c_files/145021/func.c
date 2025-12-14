/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145021
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
    var_15 = var_1;
    var_16 = ((/* implicit */signed char) ((unsigned short) (signed char)1));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1 + 2] [(unsigned short)12] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_0)))), ((~(arr_0 [i_1 + 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1182129894))))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) >= (((/* implicit */int) var_3))))), (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) 2013265920U)))))));
            }
        } 
    } 
    var_17 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (3425127299515449582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) max(((short)9874), (((/* implicit */short) var_12))))))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)-32750)), (((unsigned short) var_8))))));
}
