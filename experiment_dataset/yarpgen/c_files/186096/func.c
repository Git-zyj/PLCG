/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186096
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) (~(max((arr_2 [i_1]), (((/* implicit */unsigned long long int) min((-1989783673), (arr_0 [i_0] [i_0]))))))));
                var_11 = ((/* implicit */unsigned short) 262080);
                var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) -262081)) : (((((-703477904388936978LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((arr_2 [(unsigned char)8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)57137)))) ^ (((/* implicit */int) (!(var_3))))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_4)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1)))) == (((/* implicit */int) var_1))))));
    var_14 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (((var_0) ^ (((/* implicit */unsigned long long int) 262080))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (short)32767))));
}
