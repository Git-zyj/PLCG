/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127652
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((3023311367U), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 18374686479671623680ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8250))) : (16270847718061634763ULL)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_18 = var_8;
                            var_19 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20206)) ? (((/* implicit */int) arr_10 [i_3] [i_0])) : (((/* implicit */int) (unsigned char)106))))) - (((18374686479671623680ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [0] [i_0])) % (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_3 [i_1] [i_1 - 2] [i_0])) > (((/* implicit */int) arr_0 [i_1]))))))));
                var_21 = ((/* implicit */unsigned short) (-(max((1271655929U), (3023311367U)))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 268427264)) ? (72057594037927928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_8))))))))), (((max((2305842459457880064LL), (((/* implicit */long long int) (short)8179)))) >> (((((/* implicit */int) var_0)) - (69)))))));
    var_23 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */signed char) var_13)), (((signed char) var_3)))));
}
