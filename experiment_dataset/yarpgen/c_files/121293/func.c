/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121293
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)23490)) ? (2234489967504280390LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) var_10)))))));
    var_14 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) (signed char)24)))))), (((/* implicit */int) max(((unsigned short)0), ((unsigned short)55615))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-4194304), (((/* implicit */int) (unsigned short)42218))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 0ULL)) ? (arr_10 [i_4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                                arr_15 [i_0] [i_4] = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)58911)), (4194303))) % (arr_4 [i_1 - 1] [i_4 + 1])));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) (short)-22536)), ((unsigned short)0))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_11))));
}
