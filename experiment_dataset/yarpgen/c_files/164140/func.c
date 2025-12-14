/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164140
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2 - 2])) <= (((/* implicit */int) (_Bool)1))))) << (((((arr_5 [i_0] [i_1]) << (((((/* implicit */int) (unsigned char)55)) - (53))))) - (1830192382U))))) | (((/* implicit */int) (!(arr_2 [i_0] [i_0]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((+(arr_3 [i_2 - 2]))) > (((((/* implicit */int) ((arr_5 [i_2] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54319)))))) >> (((/* implicit */int) ((11487852207957927985ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2 - 1] |= ((/* implicit */short) ((((arr_5 [i_0] [i_0]) != (arr_5 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 2])) ? (((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_1 [i_1])))) : ((~(((/* implicit */int) arr_0 [i_0])))))) : ((+(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned int) var_11);
}
