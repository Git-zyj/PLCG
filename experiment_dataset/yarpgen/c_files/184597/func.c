/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184597
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))))), (1906715740U)))))));
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_0])), (((((/* implicit */_Bool) arr_8 [17U] [(signed char)19] [i_1] [17U])) ? (((10020651468930119336ULL) & (arr_3 [i_2] [i_2] [i_2]))) : (arr_3 [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = (+((~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_2)))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) ((min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))))))) ^ (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_0)), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_12 = ((/* implicit */unsigned short) max((min((((((/* implicit */int) var_7)) & (var_3))), (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))));
    var_13 ^= ((/* implicit */int) var_1);
}
