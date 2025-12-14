/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106920
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_16))) ? (-8242137514467377789LL) : (((/* implicit */long long int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8242137514467377803LL)))))) : (((((/* implicit */_Bool) -5603472539158469238LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        var_19 &= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1405103706)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-33))))) ^ (((((/* implicit */_Bool) ((((arr_1 [i_0 - 4] [i_0 - 4]) + (2147483647))) >> (((((/* implicit */int) var_18)) - (36559)))))) ? (((/* implicit */unsigned int) var_10)) : (arr_2 [i_0 - 3]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)-13))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] = min((((((/* implicit */long long int) ((((/* implicit */_Bool) 1292044448U)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_11))))) & ((~(arr_11 [i_1] [i_3 + 2] [i_2] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) max((2147483647), (((/* implicit */int) (unsigned char)72))))));
                        var_21 += ((/* implicit */short) arr_11 [10U] [10U] [i_1] [(unsigned short)13] [10U] [10U]);
                        var_22 = ((/* implicit */long long int) arr_8 [i_1] [i_2] [i_1] [i_1]);
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) -8242137514467377794LL))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) / (6286342132348752708LL)));
        var_25 = ((/* implicit */unsigned short) min((var_25), (arr_5 [i_5])));
        arr_15 [i_5] = ((/* implicit */unsigned int) (unsigned short)6035);
    }
    var_26 |= var_10;
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) / (((/* implicit */unsigned int) (+(-23))))))) ? (var_1) : (((/* implicit */int) var_13))));
}
