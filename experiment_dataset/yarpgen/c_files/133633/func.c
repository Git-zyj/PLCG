/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133633
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)43627)), (4182498189534488041LL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((unsigned char)235), (((/* implicit */unsigned char) var_7))))), (max((min((4933549321025083492ULL), (((/* implicit */unsigned long long int) (short)30128)))), (((/* implicit */unsigned long long int) (unsigned short)20456))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max(((unsigned short)20456), (((/* implicit */unsigned short) (signed char)-68))))) ? (((((/* implicit */_Bool) 4367013951925840121LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36777)))) : (((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) (unsigned short)20439))));
                    var_20 ^= ((/* implicit */unsigned short) min((35747322042253312ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1223)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (18446744073709551615ULL)))) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (signed char)37))))))))));
                    var_21 = ((/* implicit */unsigned long long int) min((min((var_14), (min(((unsigned short)63), ((unsigned short)20456))))), (((/* implicit */unsigned short) (short)26712))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) min((min((min((var_10), (((/* implicit */unsigned long long int) var_7)))), (170566330647019468ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_17))))) ? (((/* implicit */int) (short)-1224)) : (((/* implicit */int) var_0)))))));
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            var_22 -= ((((/* implicit */_Bool) min((((/* implicit */int) var_17)), (var_16)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))));
            var_23 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (short)-1200)), ((unsigned short)46522)))), (min((var_2), (((/* implicit */long long int) (signed char)32))))));
            var_24 = ((/* implicit */unsigned short) min((max((15074711849756547424ULL), (15654047942680652099ULL))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) max(((short)-8192), ((short)-1223)))))))));
            var_25 *= ((/* implicit */short) -7946026788619122028LL);
        }
        var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)13033)))), (((((/* implicit */_Bool) (unsigned short)36111)) ? (((/* implicit */unsigned long long int) var_6)) : (17113073594745493292ULL)))));
    }
}
