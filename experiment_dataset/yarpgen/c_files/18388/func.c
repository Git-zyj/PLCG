/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18388
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
    var_18 |= ((/* implicit */unsigned short) ((max((var_1), (((/* implicit */long long int) (~(var_17)))))) == (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((var_17), (((/* implicit */unsigned int) (+(var_10)))))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) ((max((3969305479U), (((/* implicit */unsigned int) (unsigned short)3)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_14)))))))), (min((((/* implicit */long long int) (unsigned short)3072)), (var_12)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0 + 1] [i_1] = ((/* implicit */int) ((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)3))))), (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))) != (((((/* implicit */_Bool) 2LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)29183)))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (var_9)))))));
                arr_7 [i_0 + 1] = ((/* implicit */long long int) (short)1920);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((var_1), (((/* implicit */long long int) (unsigned short)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36366))) : (5531969681225219215LL)));
                            var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned short)65532)))), (((/* implicit */int) ((var_7) > (((/* implicit */long long int) var_10)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
