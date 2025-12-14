/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165200
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
    var_15 = ((var_13) - (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) -1964904250995132078LL));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(0U))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? ((~(131040LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) 7))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                var_18 ^= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2] [9ULL] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [(unsigned short)15])) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))))) - (((((/* implicit */_Bool) (unsigned short)14236)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)57343)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) -8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (var_5))))));
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (~(arr_10 [7LL]))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [1ULL] [i_3] [i_3]))) != (((unsigned long long int) var_0))))))));
            }
        } 
    } 
}
