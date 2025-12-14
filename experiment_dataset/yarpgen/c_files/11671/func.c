/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11671
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
    var_10 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned char)2] [(unsigned char)8] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [(unsigned short)4] [i_1]), (((/* implicit */long long int) (unsigned short)15785))))) ? ((+(arr_5 [i_0] [(unsigned short)6] [10ULL] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((9189560180839427291LL) < ((-9223372036854775807LL - 1LL))))))));
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) << (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (274877906432LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) - (274877906432LL)))))) ? (((((/* implicit */_Bool) -9189560180839427306LL)) ? (-274877906433LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_6))))) + (((((/* implicit */int) (unsigned short)36028)) >> (((((/* implicit */int) (unsigned short)41210)) - (41205))))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(2730348728892114789LL)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)227))))) * (max((((/* implicit */long long int) (unsigned short)58149)), (var_7)))))));
}
