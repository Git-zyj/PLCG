/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105673
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_17 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32745)) ? (-8502032299293013230LL) : (-711044470181114454LL)))) ? (((((/* implicit */_Bool) 3483773688U)) ? (((/* implicit */int) (signed char)108)) : (-2147483637))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6)))))))), (max((0U), (((/* implicit */unsigned int) (unsigned char)162)))));
                    var_18 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) 2147483648U)), (arr_6 [i_2] [i_2] [i_2] [i_2 + 4]))) * (max((((/* implicit */long long int) var_16)), (var_12)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max(((-(max((((/* implicit */unsigned int) (_Bool)0)), (1810179962U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (-1)))))))));
}
