/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171273
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)104))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)69)) || (((/* implicit */_Bool) 4026531840U))))), (var_13)));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122)))))) == (max(((+(arr_1 [i_0]))), (((long long int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned long long int) var_18)), (var_11))) : (((/* implicit */unsigned long long int) min((-1171298840), (((/* implicit */int) (_Bool)0)))))))) ? (var_8) : (var_11)));
}
