/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166308
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
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_2 + 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4658111479563462959ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0] [i_0 - 1])) : (max((13788632594146088670ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((short)21345), (((/* implicit */short) arr_3 [i_0] [i_1] [(short)3])))), (((/* implicit */short) arr_0 [i_0]))))))));
                    var_13 &= ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)64913)) : (((/* implicit */int) arr_5 [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) 13788632594146088670ULL))))))), ((~((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
}
