/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146979
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
    var_11 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) | (((-2032141419290435398LL) & (2032141419290435398LL))))))));
    var_12 |= ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (8860)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((18446744073709551601ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [(unsigned char)6] [i_1] [i_2])), (4294967287U)))))))));
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((unsigned char) max((-1854048223012444774LL), (var_1))));
                    var_13 |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (min((643396906U), (((/* implicit */unsigned int) (unsigned char)65)))))))));
}
