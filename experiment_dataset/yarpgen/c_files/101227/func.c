/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101227
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (short)-13757)) : (-2142236168))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 + 3] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 4] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_8 [i_0 + 4] [i_0 - 1] [i_2 - 2] [i_2]))))));
                    var_16 &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))) > (var_4))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-13773), (((/* implicit */short) arr_7 [i_2 + 2] [i_2] [i_2] [i_2]))))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)13757))))), ((~(var_7)))))));
                    var_17 -= ((/* implicit */unsigned int) (short)32755);
                    var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13757)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_1)))))) : (arr_3 [17U] [i_1])))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(8649230590575506279LL)))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_4 [12])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                arr_15 [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -8649230590575506261LL)) ? (-2832343763802317018LL) : (((/* implicit */long long int) arr_9 [i_3] [i_4]))))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_4]))))))));
                arr_16 [i_4] |= ((/* implicit */long long int) (unsigned char)187);
            }
        } 
    } 
}
