/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182643
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
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 288147628U))))));
                var_21 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)6146)) : (var_11))), (((((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) > (var_15)))) | (((/* implicit */int) ((unsigned short) var_5)))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_17)) | (((/* implicit */int) var_3)))), ((~(6)))))) ? (arr_1 [9U]) : (((/* implicit */long long int) var_15))));
            }
        } 
    } 
    var_24 = max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (unsigned char)111)))))))), (max((((2147483647) >> (((((/* implicit */int) (signed char)-1)) + (25))))), (((/* implicit */int) (unsigned short)55679)))));
}
