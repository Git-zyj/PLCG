/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10978
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (~(arr_0 [i_1])));
                    var_21 = ((/* implicit */_Bool) ((0LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32753)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
    var_23 = ((/* implicit */int) max((min((140485943965289228LL), (((/* implicit */long long int) (signed char)76)))), (var_4)));
    var_24 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) ((unsigned short) 3811015089U))) : (var_6)))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (short i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 3811015068U)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) arr_9 [i_4 - 2])))))));
                    var_26 += ((/* implicit */unsigned char) (~(arr_7 [i_3])));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned short) (+(max((arr_11 [i_3]), (((/* implicit */unsigned long long int) var_9))))));
                                arr_22 [(unsigned char)9] [(unsigned char)9] [i_5] [i_6 + 1] [i_4] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 - 3])) ? (var_15) : (((/* implicit */unsigned long long int) var_6))))) ? ((+(arr_20 [i_4] [i_3] [1LL] [(unsigned short)14] [6LL] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_3] [12U])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
