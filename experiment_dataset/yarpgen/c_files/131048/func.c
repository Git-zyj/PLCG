/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131048
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
    var_20 -= ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) var_11))))), (0LL)))));
    var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_1), (var_18))))))) ? (((/* implicit */int) var_15)) : (((int) (short)(-32767 - 1))));
    var_22 = ((/* implicit */_Bool) (-(var_13)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_23 = (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_18))))))) ? (min((((/* implicit */unsigned int) (unsigned char)65)), (2893065201U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))));
        var_24 ^= ((/* implicit */unsigned int) ((unsigned short) (((_Bool)1) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            {
                arr_9 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2]))))), (arr_6 [i_1])))) * (((/* implicit */int) (unsigned char)196))));
                var_25 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))));
                var_26 = ((/* implicit */unsigned short) ((((unsigned int) (_Bool)1)) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)0))))));
                var_27 ^= ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned long long int) var_4))));
            }
        } 
    } 
}
