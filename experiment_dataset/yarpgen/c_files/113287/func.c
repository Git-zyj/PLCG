/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113287
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) (short)-8501)) ? (((/* implicit */int) (short)8500)) : (((/* implicit */int) (short)8514)))))) == (((((/* implicit */_Bool) (short)-30479)) ? (((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (short)-8501)) : (((/* implicit */int) (short)-8520)))) : (((var_13) & (((/* implicit */int) var_10))))))));
            var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-8512)), (var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (short)-8493))))) : (((((/* implicit */_Bool) (short)10526)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28673)) ? (2283615918U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13976))) : (((((/* implicit */_Bool) (short)-30320)) ? (355500405U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) (short)-27235)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9623)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_1))))) : (4294967291U)))));
        }
        /* vectorizable */
        for (short i_2 = 4; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_19 = (short)-8512;
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-28693)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (short)19081)) ? (2444061518U) : (((/* implicit */unsigned int) -1043882475))))));
            var_21 = ((/* implicit */short) var_4);
            var_22 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_13)) / (2561611134865232482ULL)));
        }
        for (short i_3 = 4; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_23 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)1024)), (9321009480510835394ULL)));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (short)-32605)))))))) ? (((((/* implicit */int) (short)-8475)) / (((/* implicit */int) (short)32766)))) : (((((/* implicit */_Bool) (short)32156)) ? (((/* implicit */int) (short)-17188)) : (((/* implicit */int) (short)-28673))))));
        }
        /* LoopSeq 1 */
        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 15U)), (var_4)))) ? (((((/* implicit */_Bool) 8U)) ? (var_7) : (((/* implicit */int) (short)32647)))) : (((((/* implicit */_Bool) 9321009480510835426ULL)) ? (((/* implicit */int) (short)0)) : (var_7)))))) ? (((((/* implicit */_Bool) 9125734593198716190ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max(((short)28658), ((short)32757))))));
            var_26 = ((/* implicit */int) max((((((/* implicit */_Bool) ((9321009480510835425ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((3849858359U) >> (((((/* implicit */int) (short)2047)) - (2022))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)23763)) : (((/* implicit */int) (short)(-32767 - 1))))))));
            var_27 = var_1;
        }
        var_28 = ((/* implicit */int) (short)-1);
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) min(((short)28689), ((short)32758))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)4), ((short)1))))) : (var_12)));
    }
    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((short)-32753), ((short)-28673))))));
    var_31 |= ((/* implicit */short) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_2))));
}
