/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110108
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
    var_15 = ((/* implicit */int) min((((/* implicit */long long int) -598321997)), (-5863992850507425659LL)));
    var_16 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073740800)) ? (((/* implicit */long long int) ((598321997) - (1073740819)))) : (((((/* implicit */_Bool) -243197557158460459LL)) ? (((/* implicit */long long int) 1724204008U)) : (4525666534972686185LL))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_17 &= ((/* implicit */unsigned short) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31841))) + (2940847825328957748ULL))), (((/* implicit */unsigned long long int) max((2570763288U), (((/* implicit */unsigned int) 598321997))))))), (((/* implicit */unsigned long long int) max(((+(598321997))), (max((-938045349), (598321997))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 6; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1073740794)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2570763287U))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 598321996)) ? (598322021) : (1073740837)))), (((((/* implicit */_Bool) -598321985)) ? (((/* implicit */unsigned int) -1073740794)) : (2570763288U)))))) ? (((/* implicit */unsigned int) max((-99955749), (((/* implicit */int) (unsigned short)15485))))) : ((+(1724204008U)))));
                                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1073740819)), (-2741312870608873148LL)))) ? (((((/* implicit */_Bool) 2570763287U)) ? (((/* implicit */unsigned int) -1073740820)) : (2570763287U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30989)))))) / (((((/* implicit */_Bool) (+(-1073740819)))) ? (max((((/* implicit */unsigned long long int) 598321996)), (28ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -598321997)) ? (((/* implicit */unsigned int) -1073740842)) : (2570763288U))))))));
                                arr_15 [4ULL] [i_3] [i_2] [4ULL] [4ULL] [4ULL] = ((/* implicit */unsigned short) (((+(max((((/* implicit */unsigned long long int) 1073740836)), (18446744073709551588ULL))))) <= (((/* implicit */unsigned long long int) min((max((3762945212U), (((/* implicit */unsigned int) -1073740801)))), (((/* implicit */unsigned int) (~(-1073740820)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1 - 1] [i_2 - 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)7742)), (-598321997))) | (max((((/* implicit */int) (unsigned short)50050)), (1490598475)))))) ? (18446744073709551587ULL) : (((((((/* implicit */int) (unsigned short)50023)) <= (598321986))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4483))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (28ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */int) 532022072U);
        var_21 = ((/* implicit */int) max((min((4749521728183409696ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) (short)-19979))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) /* same iter space */
    {
        arr_24 [i_6] [i_6 + 1] = max((((/* implicit */unsigned int) ((min((1073740837), (2147483647))) ^ (min((2147483647), (((/* implicit */int) (short)-12703))))))), (((3221225472U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)15485))))))));
        arr_25 [9U] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((-270684001), (1821560116))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16722)))))))) ? (max((max((((/* implicit */unsigned long long int) 1073740818)), (0ULL))), (((/* implicit */unsigned long long int) (short)-16754)))) : (max((18446744073709551588ULL), (((/* implicit */unsigned long long int) 1073740825))))));
    }
}
