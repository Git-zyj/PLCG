/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107614
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
    var_14 += var_9;
    var_15 = ((/* implicit */_Bool) (+(((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(_Bool)0] [i_0] = ((/* implicit */unsigned long long int) ((-2503396811677108681LL) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3])))));
        var_16 = ((/* implicit */long long int) 7012972049391366764ULL);
        var_17 = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 + 4]));
        var_18 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_1])))) : (arr_4 [i_1])));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [16ULL] [i_2] [(short)17])) ? (arr_7 [i_1 + 2] [i_3]) : (((/* implicit */int) arr_10 [16LL] [6ULL] [i_3] [i_3])))))));
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(-2503396811677108681LL))))));
                }
            } 
        } 
    }
}
