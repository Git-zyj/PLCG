/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133054
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (signed char)-93);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [5ULL] [i_0] [i_0] [1LL] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_2]))));
                        arr_12 [i_3] &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38308)) >> (((((/* implicit */int) var_3)) - (2967))))))));
                    }
                    arr_13 [2ULL] [i_0] = ((/* implicit */short) (((~(((unsigned long long int) arr_2 [i_0])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) != (arr_5 [i_0] [i_0] [i_0])))) >> (((/* implicit */int) (unsigned short)0))))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0])))) ^ (((/* implicit */int) ((signed char) (unsigned short)58069))))))));
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((int) arr_3 [i_0])) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) || ((_Bool)1))))));
        var_21 += ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) && ((!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0 - 1] [i_0])))))));
    }
    var_22 += ((/* implicit */int) var_3);
}
