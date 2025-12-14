/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161805
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [1LL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (5693862945414943779ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))) : (min((((/* implicit */long long int) (unsigned short)30)), (-1485663377626559328LL)))));
                                arr_15 [17] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) (((+(((unsigned long long int) 4503599493152768ULL)))) / (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) (unsigned char)63))), (max((max((var_16), (var_3))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))))));
                    var_21 = ((/* implicit */short) (~(max((((/* implicit */long long int) (signed char)100)), (((((/* implicit */_Bool) 7694716503134503516LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13826))) : (-7694716503134503519LL)))))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)24))))) : (((/* implicit */int) ((_Bool) var_10)))))), (((((/* implicit */_Bool) (unsigned char)68)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), (var_2)))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-1)), (-4133674847933800139LL)))) ? (8498552228401356385LL) : (((/* implicit */long long int) (-(1149314817U))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)0)), (18446744073709551615ULL)));
}
