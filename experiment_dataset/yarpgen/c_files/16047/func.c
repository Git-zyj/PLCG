/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16047
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
    var_20 = ((/* implicit */long long int) ((short) max((((unsigned char) var_15)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)3826))))))));
    var_21 = ((/* implicit */_Bool) var_6);
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)32130))), (max((35184372088768ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (1016203951093246510LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13149)))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967275U)) ? (max(((~(var_9))), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (-17)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) -3377603885782880261LL)), (arr_5 [i_0] [i_1] [i_2] [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_2]))))))), (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-77)))))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_6);
                    var_25 |= max(((-(((/* implicit */int) ((unsigned short) -238259479))))), (((/* implicit */int) arr_2 [i_2])));
                }
            } 
        } 
    } 
}
