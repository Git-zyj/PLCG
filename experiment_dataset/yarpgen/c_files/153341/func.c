/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153341
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_10 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)0)), (8U)));
                    arr_8 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) max(((_Bool)0), (arr_1 [i_0 + 1])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0]))) | (arr_4 [i_0 - 1])))));
                    var_11 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (unsigned char)133))))), (max((arr_5 [0U] [i_1 + 2] [i_1 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2])))))))));
                    arr_9 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)110))))), (min((min((var_4), (arr_0 [i_0]))), (max((((/* implicit */unsigned short) var_2)), (arr_0 [7U])))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) max((0), (0)));
    var_13 -= ((/* implicit */_Bool) var_5);
}
