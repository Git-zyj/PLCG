/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17053
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4225609992U)) ? (((/* implicit */int) (short)21127)) : (((/* implicit */int) (unsigned short)11))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)148)))))))) ? (256293584) : (((/* implicit */int) var_15))));
    var_20 = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned int) (((-(-256293565))) ^ (((/* implicit */int) var_16)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) var_4)), (arr_6 [i_0 + 1])))), (((((/* implicit */_Bool) (unsigned short)52578)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3193507969412196748LL)))));
                var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (256293613) : (((/* implicit */int) var_14))))))) > (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
            }
        } 
    } 
}
