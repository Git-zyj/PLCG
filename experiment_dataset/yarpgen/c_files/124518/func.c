/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124518
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned char)226))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 - 1]))) : (-214930974009219893LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))))) ? ((-(min((((/* implicit */long long int) var_17)), (-4576083441482325666LL))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) (short)20679))))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)3))))) ? ((~(arr_5 [(short)9]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(short)0] [4U] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_14)))))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), ((+(max((((((/* implicit */_Bool) var_2)) ? (3185011582U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)3635)))))))))));
}
