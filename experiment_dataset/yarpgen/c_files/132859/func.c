/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132859
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) min(((unsigned short)59562), (((/* implicit */unsigned short) var_12)))))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_7))) == (((/* implicit */int) min((var_7), (((/* implicit */short) var_12)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) var_3);
                    arr_9 [i_2] [i_1] [i_1] [i_1] &= (-(((/* implicit */int) (unsigned short)13617)));
                }
            } 
        } 
    } 
    var_18 = 17683085841934793586ULL;
}
