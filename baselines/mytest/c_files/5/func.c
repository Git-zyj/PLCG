/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/5
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (~(var_16)));
        var_19 = (+(((/* implicit */int) ((unsigned char) 2607637449U))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = (unsigned short)52055;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) (+(max((arr_6 [(unsigned short)12]), (arr_6 [i_1])))));
        var_21 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) var_7))))), (((arr_6 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))))));
        var_22 += (-(max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (unsigned char)99)) ? (1687329846U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48085))))))));
    }
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_23 *= ((/* implicit */int) ((arr_2 [i_2] [i_2]) / (2607637449U)));
        var_24 = ((/* implicit */int) (-(max((((((/* implicit */_Bool) 650742567U)) ? (2900448609U) : (((/* implicit */unsigned int) -2048984710)))), (1065353216U)))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (max((min((6282607856679375379ULL), (((/* implicit */unsigned long long int) (signed char)-6)))), (((/* implicit */unsigned long long int) (signed char)119))))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_26 *= ((/* implicit */unsigned int) (unsigned char)210);
        var_27 += ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)48101), (((/* implicit */unsigned short) (signed char)119)))))) / ((~(-3906699016264426204LL)))))));
        arr_13 [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 2900448609U)), (6282607856679375394ULL))), (((/* implicit */unsigned long long int) arr_12 [i_3]))))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-119)), (-789829928))))));
    }
}
