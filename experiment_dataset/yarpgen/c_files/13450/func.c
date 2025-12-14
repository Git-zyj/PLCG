/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13450
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((unsigned int) var_13))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (((long long int) (unsigned char)221)))) ? (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))) : (((((/* implicit */int) (unsigned char)59)) - (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)188))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) min((((((/* implicit */int) arr_1 [i_2])) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_3))))))) : (min((arr_6 [i_1] [i_0 - 1] [i_0 + 3]), (((/* implicit */long long int) arr_5 [i_0 - 2])))))))));
                    arr_9 [i_0] [i_2] = (~((-(arr_5 [i_0 + 1]))));
                    arr_10 [i_2] [i_2] [i_2] = ((unsigned long long int) 11609050521975594590ULL);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) arr_4 [1U] [1U] [1U]);
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((-(((unsigned long long int) (signed char)24)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) % (((/* implicit */int) arr_1 [i_0 + 3]))))))))));
        var_21 = ((/* implicit */int) ((((((/* implicit */int) arr_8 [i_0])) >= (((/* implicit */int) arr_1 [i_0 - 2])))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) ^ (var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) -6340691558578274177LL)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188)))))));
    }
}
