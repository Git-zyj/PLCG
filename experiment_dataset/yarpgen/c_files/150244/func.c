/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150244
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_17)), (arr_0 [i_0 - 2]))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)30389)))) < (((int) arr_1 [i_0] [i_0])))))));
                    var_20 = ((/* implicit */unsigned long long int) ((int) (~(max((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) var_11)))))));
                    arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) max((((unsigned int) 5539793471051899076ULL)), (((((/* implicit */_Bool) 2301339409586323456ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2699))) : (arr_1 [i_1] [i_0])))))) : (((((/* implicit */long long int) 1792)) / (4425878616274886672LL))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) 5539793471051899086ULL);
    var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_9)), ((~(((/* implicit */int) (short)4)))))) & ((~(((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))))))))));
}
