/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102221
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned short)23081)) - (23077)))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min(((+(((-3288669935892460349LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-2315))))))), (((/* implicit */long long int) max(((unsigned short)37570), ((unsigned short)17776))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1610026970258402527ULL)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) ((-1) <= (((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [15U] [i_2]))))) - (84)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [15ULL]))))) ? ((-(((/* implicit */int) (short)-13871)))) : (((((/* implicit */int) (unsigned short)27970)) ^ (((/* implicit */int) var_5)))))));
                    var_23 = arr_8 [i_0] [i_0] [i_2];
                }
            }
        } 
    } 
}
