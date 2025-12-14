/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167747
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
    var_13 = ((/* implicit */signed char) var_2);
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-124)), ((short)13464)))) : (((/* implicit */int) arr_3 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (+(1140969327)));
                                var_17 |= 9267226948091485400ULL;
                                var_18 = (signed char)7;
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_0)))))) % (min((((/* implicit */long long int) ((short) arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2]))), (((((/* implicit */long long int) var_1)) + (arr_5 [i_0] [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_4);
    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) -702305244865717944LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) : (6664129649493113146LL)))));
}
