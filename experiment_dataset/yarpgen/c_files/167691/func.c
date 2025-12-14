/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167691
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
    var_15 = (((!(var_7))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))) : (((long long int) (unsigned short)45419)));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_2) < ((~(var_12)))))), (var_3)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)25402))));
                    var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_3 [i_0] [i_1] [i_2]) | (((/* implicit */unsigned long long int) 207562322U)))), (arr_7 [(unsigned char)10])))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)15198))))) ^ ((-(arr_7 [2LL]))))) : (((((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [11ULL] [i_0 + 1])))))) % (((850088648402001163ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100)))))))));
                }
            } 
        } 
    } 
}
