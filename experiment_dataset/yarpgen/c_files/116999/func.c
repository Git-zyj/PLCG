/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116999
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
    var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) min((var_12), (((/* implicit */long long int) var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)63))));
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_15))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_1)))))))), (((((/* implicit */long long int) ((/* implicit */int) var_15))) | (9223372036854775800LL)))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1692300398725191515ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (9223372036854775791LL)));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [(signed char)2] [12ULL])) >= (arr_5 [i_1] [i_1] [i_0]))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)46283));
    var_21 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)61236))));
}
