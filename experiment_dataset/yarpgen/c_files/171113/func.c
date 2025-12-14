/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171113
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [3LL] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) | (arr_0 [i_1])));
                    var_15 -= ((/* implicit */short) ((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_2])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (unsigned short)5241))))) && (((/* implicit */_Bool) arr_3 [i_2]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) != (((/* implicit */int) var_14))))) << (((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)60289)), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))) - (18446744073709550603ULL)))));
}
