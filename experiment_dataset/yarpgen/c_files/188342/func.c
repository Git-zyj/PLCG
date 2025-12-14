/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188342
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
    var_11 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16128)) >> (((-3704019135497710521LL) + (3704019135497710547LL)))))) ? (((/* implicit */int) (short)-29952)) : ((-(((/* implicit */int) (unsigned char)129)))))));
    var_12 = ((/* implicit */unsigned short) var_10);
    var_13 = ((/* implicit */short) (+(var_2)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) ((((_Bool) -3704019135497710521LL)) ? (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [i_0])))) : (min((((int) var_3)), ((+(var_2)))))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */long long int) (+(((int) (_Bool)1))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_1)))) ? (((((/* implicit */_Bool) (unsigned short)28819)) ? (-3704019135497710549LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_2)))))))));
                var_16 = (-(((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [(unsigned char)3] [i_0]))))) + (-3704019135497710521LL))));
                arr_6 [i_1] [i_1] [8] = ((/* implicit */long long int) (short)-9857);
            }
        } 
    } 
}
