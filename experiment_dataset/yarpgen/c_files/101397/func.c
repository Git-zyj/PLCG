/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101397
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
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) max((max((((/* implicit */long long int) var_4)), (24LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) < (((/* implicit */int) (unsigned short)2047))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_3] [i_2] [i_1])) & (((/* implicit */int) arr_9 [i_1] [i_2] [i_1] [i_4])))))));
                                var_20 = ((/* implicit */int) min((var_20), ((((((-(((/* implicit */int) (signed char)113)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) (~(3377807616651713578ULL))))) - (41941)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (-(((((/* implicit */int) arr_13 [i_0])) >> (((3377807616651713578ULL) - (3377807616651713567ULL)))))));
                                arr_17 [i_0] [i_1] [(signed char)19] [i_1] &= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_3] [i_0])))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) max((((((((/* implicit */_Bool) (unsigned short)63481)) ? (3377807616651713578ULL) : (15068936457057838037ULL))) | (((/* implicit */unsigned long long int) (~(var_5)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 748471594325662621LL)) > (6785387882101764954ULL)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_11);
}
