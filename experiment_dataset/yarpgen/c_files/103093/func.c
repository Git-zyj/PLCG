/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103093
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
    var_11 = ((/* implicit */unsigned short) (~(((int) ((((/* implicit */_Bool) (short)26614)) ? (((/* implicit */int) (short)-26621)) : (((/* implicit */int) (short)26620)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (short)-26621))));
                                arr_11 [i_3] [(short)12] [(short)12] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_4)) << (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)11065)) || (((/* implicit */_Bool) var_3)))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))))));
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((10233484567831337073ULL) + (8213259505878214552ULL))) : (((/* implicit */unsigned long long int) 793956594U))))));
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((8213259505878214573ULL), (((/* implicit */unsigned long long int) var_10))))))))));
                var_15 ^= max((((unsigned short) var_4)), (((/* implicit */unsigned short) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */short) var_4);
}
