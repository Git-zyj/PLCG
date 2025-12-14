/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110962
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) | (2489254331U)));
                    var_20 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)10349))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2120492804U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 2] [i_2 + 2])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 4; i_4 < 14; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_22 ^= ((/* implicit */signed char) ((unsigned int) (-(1073741824))));
                    arr_18 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */short) arr_11 [i_3])), (((short) (unsigned char)184))));
                    var_23 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) (unsigned char)7))))) | (max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)255))))), ((-(((/* implicit */int) (short)32704))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)25)) ? (((((/* implicit */_Bool) var_13)) ? (-5716852521954893756LL) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))))))), (((/* implicit */long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            {
                var_25 += ((/* implicit */short) (((((-(2147483647))) | (((/* implicit */int) (signed char)-47)))) <= (((/* implicit */int) arr_8 [i_6] [i_6] [i_7]))));
                var_26 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((arr_5 [i_6] [i_6] [7LL]) <= (((/* implicit */int) arr_19 [i_6] [i_6]))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_9 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))) ? ((~(((/* implicit */int) (unsigned short)62785)))) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_16 [i_6] [i_6])))))))));
                var_27 = ((/* implicit */short) (~(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) var_0)) : (407976486))) < (((/* implicit */int) arr_3 [i_6] [i_6])))))));
                var_28 -= ((/* implicit */short) max((max((((((/* implicit */_Bool) -8516389973938857497LL)) ? (((/* implicit */int) (unsigned char)30)) : (arr_10 [i_7]))), (((/* implicit */int) ((unsigned char) arr_9 [i_6]))))), (((/* implicit */int) ((_Bool) (signed char)36)))));
                var_29 *= ((/* implicit */unsigned char) var_17);
            }
        } 
    } 
}
