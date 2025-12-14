/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178944
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
    var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8734)) ? (4253416921U) : (var_6)))) : (max((((/* implicit */long long int) var_8)), (-4071269825598609705LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)119)) && (((/* implicit */_Bool) ((562949953421311LL) & (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
    var_13 *= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (-4071269825598609705LL)))) ? ((+(17614959402355499807ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (-9223372036854775796LL)))))), (((((4087668904917343003ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4335))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)19096)) ? (((/* implicit */unsigned long long int) -1220813236)) : (5499328398697981208ULL))) : (((/* implicit */unsigned long long int) 4071269825598609705LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)197)))))))) : ((((!(((/* implicit */_Bool) 8589934592LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 0)), (1689036446U)))) : (min((var_3), (((/* implicit */unsigned long long int) 3380032540U))))))));
                    arr_8 [i_0 - 1] [3U] = ((/* implicit */signed char) min(((+((-(((/* implicit */int) (short)25067)))))), (((/* implicit */int) (unsigned char)11))));
                    var_15 = ((/* implicit */short) (_Bool)1);
                    var_16 *= ((/* implicit */short) arr_1 [i_2] [i_0 + 2]);
                }
            } 
        } 
    } 
}
