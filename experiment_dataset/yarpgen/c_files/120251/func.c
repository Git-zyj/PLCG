/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120251
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                arr_8 [(unsigned char)12] |= ((((/* implicit */_Bool) (unsigned short)50653)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (_Bool)1)));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)119)), (2147483647U)))), (max((262143LL), (((/* implicit */long long int) var_5))))))) && (((/* implicit */_Bool) ((signed char) ((unsigned short) (short)511))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_15))) ? (max((((/* implicit */int) (signed char)-121)), (31))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7)))))))), (262131LL)));
}
