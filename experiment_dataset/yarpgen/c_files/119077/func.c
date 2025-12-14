/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119077
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (((((unsigned int) (_Bool)0)) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(unsigned char)7] [i_1])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)18)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) (~(((arr_4 [5] [i_1] [0]) / (((/* implicit */int) (unsigned char)128))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(((((963295263U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28027)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65535)))))))));
    var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((-1234803301) | (((/* implicit */int) (signed char)-4)))), (((((/* implicit */_Bool) (unsigned short)37539)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (((+(arr_8 [i_3 - 1] [i_3 + 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)511)) && ((!(((/* implicit */_Bool) arr_12 [i_3] [i_3]))))))))));
                var_21 = ((int) ((unsigned short) ((((/* implicit */int) (unsigned short)2048)) / (((/* implicit */int) (unsigned short)16907)))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 1812375846))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((unsigned short)10), ((unsigned short)36525)))), (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
