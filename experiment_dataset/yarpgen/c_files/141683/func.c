/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141683
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_5 [i_0])), ((signed char)-117)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)126))))) : (((unsigned long long int) var_10)))));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((+(min((((/* implicit */unsigned long long int) (signed char)94)), (arr_0 [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (var_0)))) ? (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (15306208558702913886ULL))) : (((/* implicit */unsigned long long int) (+(var_4))))))));
                    var_12 = ((/* implicit */short) ((unsigned long long int) var_4));
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned long long int) 8521094380932598025LL)) : (6590782428538010291ULL))), (((/* implicit */unsigned long long int) max(((short)-13936), (((/* implicit */short) (signed char)-67)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (14460496011480430586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_2);
}
