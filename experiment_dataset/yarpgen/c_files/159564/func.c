/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159564
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
    var_20 = ((/* implicit */int) var_5);
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) + (var_8)))) && (((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_7)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1715)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35)))))) ? (var_8) : (((/* implicit */unsigned long long int) max((209469897), (((/* implicit */int) (unsigned char)29)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) var_15);
                    arr_8 [i_1] [i_1] [i_1] = min((max((((/* implicit */unsigned long long int) (signed char)-1)), (min((((/* implicit */unsigned long long int) (unsigned char)139)), (16619397803551199532ULL))))), (((/* implicit */unsigned long long int) min((((long long int) (unsigned char)80)), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)148)), (var_10))))))));
                    arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (~((-(13603523074715037052ULL)))));
                }
            } 
        } 
    } 
}
