/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104434
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) var_13);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (!(arr_4 [i_0] [(unsigned short)12] [i_2])))) >> (((((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) var_12)))) - (9552948324471541496ULL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (short)-21460)) : (((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) -6200277541920353135LL)))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (var_9)))) ? (((/* implicit */int) var_11)) : (((((((/* implicit */_Bool) 6200277541920353155LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)85)) : (var_0))) - (64)))))));
    var_21 = ((/* implicit */unsigned char) (-(var_9)));
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
