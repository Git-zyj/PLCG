/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149557
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2 - 1] = ((/* implicit */_Bool) max((min((arr_8 [i_1]), (arr_8 [i_1]))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) var_4))))) ? (arr_8 [i_1]) : (min((10295502030168976819ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    var_10 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_1)))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_6), (((/* implicit */signed char) var_2))))) << ((((~(arr_1 [i_0]))) + (6619113))))))));
                    arr_10 [i_1] [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_3)) != (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned short)31))))), (((((/* implicit */_Bool) -86514761)) ? (arr_7 [i_0] [i_1 - 1] [i_2]) : (((/* implicit */unsigned long long int) 7781315060389905857LL))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))), (var_7)));
    var_12 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_1)));
}
