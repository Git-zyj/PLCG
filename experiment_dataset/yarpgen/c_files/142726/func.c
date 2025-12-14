/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142726
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
    var_13 = var_3;
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [2ULL] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)12)) < (((/* implicit */int) (unsigned short)7458))))), (((unsigned long long int) arr_2 [i_0 + 3] [i_0 + 3])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        var_14 = min((((/* implicit */unsigned short) ((_Bool) (short)(-32767 - 1)))), (var_10));
        arr_5 [i_0] &= ((/* implicit */_Bool) (-(max((arr_1 [i_0 + 2]), (((/* implicit */unsigned long long int) (_Bool)1))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_13 [i_0 + 3] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned short) min(((-(arr_6 [i_0 + 1]))), (((/* implicit */long long int) (short)32767))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (min(((-((-(arr_1 [i_2 - 2]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) (-(var_9)));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (signed char i_5 = 3; i_5 < 11; i_5 += 3) 
        {
            {
                var_17 ^= (unsigned short)34374;
                var_18 = ((/* implicit */signed char) max((var_18), ((signed char)-52)));
            }
        } 
    } 
}
