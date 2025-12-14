/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165911
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
    var_20 ^= (+(((/* implicit */int) (_Bool)0)));
    var_21 = ((/* implicit */signed char) var_5);
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1645550302U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_23 -= ((/* implicit */unsigned char) var_19);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned char)35), (((/* implicit */unsigned char) (_Bool)1)))))));
                                var_24 = ((/* implicit */int) (-(min((((/* implicit */long long int) var_12)), (var_3)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
