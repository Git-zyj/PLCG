/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122796
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
    var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) : (((unsigned long long int) (short)31851))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] [i_1] = ((/* implicit */unsigned char) var_6);
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)48460)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_2 [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) : (max((((/* implicit */long long int) (signed char)(-127 - 1))), (((long long int) arr_12 [i_1] [i_1] [i_2] [i_0]))))));
                    arr_18 [i_2] [i_1] [i_0] |= ((/* implicit */signed char) ((_Bool) (+(((int) var_6)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (-(((long long int) ((int) (signed char)(-127 - 1))))));
    var_15 = ((/* implicit */_Bool) var_3);
}
