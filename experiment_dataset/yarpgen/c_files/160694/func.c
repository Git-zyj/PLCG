/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160694
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */signed char) ((arr_7 [i_0 + 1] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)5946))) : (arr_8 [i_2 - 1] [i_0 + 1] [i_2 - 2] [i_1])));
                        var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) arr_8 [i_1] [i_2 - 2] [i_2 - 2] [i_3])) || (((/* implicit */_Bool) arr_8 [i_1] [i_2 - 2] [i_1] [i_1]))))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3157117050556501986LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(signed char)9] [2] [i_0]))) : (-428942736612273424LL)))) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((var_10) < (var_10))));
    }
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((301797491), (((/* implicit */int) var_11)))))));
}
