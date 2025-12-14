/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140044
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
    var_11 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)150))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1] [15ULL])) ? (((/* implicit */long long int) (~(((/* implicit */int) max((arr_6 [i_2] [8ULL] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_2])) << (((/* implicit */int) var_9))))), (min((-5207597754552315896LL), (((/* implicit */long long int) arr_5 [i_0] [5ULL]))))))));
                    arr_9 [3LL] [(unsigned short)6] [i_0] = ((/* implicit */_Bool) arr_7 [6U] [6U]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_4);
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (var_5)));
}
