/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172013
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
    var_17 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_5 [i_0]))))) : (((/* implicit */int) (((+(124775588U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_0]))) <= (7857198030470110517ULL))))))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]);
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1]), ((unsigned short)2001))))) ? (((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))))) + (((/* implicit */long long int) ((/* implicit */int) (!(var_8))))))) : (((/* implicit */long long int) arr_6 [i_0 + 2] [i_0 + 3] [(_Bool)1]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((((var_8) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))), (var_12)));
}
