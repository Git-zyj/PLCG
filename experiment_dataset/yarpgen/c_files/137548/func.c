/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137548
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                    arr_6 [(short)14] [i_1 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((-2122528959167547406LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768)))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [(short)22])) : (((/* implicit */int) (signed char)-61)))))) : (var_12)));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) % ((-(min((((/* implicit */unsigned int) var_5)), (var_13)))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((max((var_7), (((/* implicit */unsigned long long int) var_5)))) / (((unsigned long long int) 1808344619U)))), (((/* implicit */unsigned long long int) max(((signed char)-55), ((signed char)57)))))))));
}
