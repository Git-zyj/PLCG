/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12958
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
    var_17 = ((/* implicit */int) ((((unsigned long long int) (signed char)-72)) * (((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (((arr_5 [16ULL] [i_1] [16ULL]) % (((/* implicit */unsigned long long int) var_16))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */int) arr_3 [i_0])))))) <= (max((((/* implicit */unsigned long long int) (signed char)72)), (9532918983886215601ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    var_20 = ((/* implicit */signed char) max(((+(arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 2]))), (arr_1 [i_1])));
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((2782043093U), (((/* implicit */unsigned int) (_Bool)1)))), (1512924202U)))), ((+(arr_5 [i_2 + 2] [i_2 + 2] [i_2 - 1])))));
                }
                var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [12])) : (arr_7 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (arr_6 [i_1])));
            }
        } 
    } 
}
