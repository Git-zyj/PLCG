/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103817
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_1 [i_0])))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (+(max(((((_Bool)0) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2737))))), (((/* implicit */unsigned long long int) arr_0 [10ULL] [i_0 + 1])))))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) -7274445667028813785LL)) ? (2147483643) : ((-2147483647 - 1)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_6) ? (arr_3 [1ULL] [i_2]) : (((/* implicit */long long int) arr_6 [i_2] [i_2] [i_1]))))) < ((+(18446744073709551615ULL)))))) == (((((((/* implicit */_Bool) (short)-2716)) || (((/* implicit */_Bool) (unsigned short)65529)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)61227))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)2718))))));
                    var_15 = ((/* implicit */unsigned long long int) var_8);
                    arr_12 [i_1] = ((/* implicit */unsigned long long int) var_9);
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                }
                arr_13 [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) (+(min((7274445667028813784LL), (((((/* implicit */_Bool) (short)20394)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-6181946809606078518LL)))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_4))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~((~(var_3))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((unsigned int) 10947961633632584450ULL))) ? ((~(var_3))) : ((~(((/* implicit */int) var_9))))))));
    var_20 = ((/* implicit */unsigned short) ((signed char) (short)-322));
}
