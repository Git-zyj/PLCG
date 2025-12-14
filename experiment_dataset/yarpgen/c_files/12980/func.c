/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12980
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = min((((((/* implicit */_Bool) 11992874815782868431ULL)) ? (18446744073709551615ULL) : (11992874815782868431ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2147483647) : (((/* implicit */int) (unsigned short)47590))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_4] [0ULL] [4] [i_4] |= max((max((0ULL), (6453869257926683184ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6254727347596245799ULL)) ? (((/* implicit */int) (short)-1024)) : (2147483647)))));
                                var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) 0ULL)))) ? ((~(((((/* implicit */_Bool) (unsigned char)241)) ? (12030753041088600238ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-1023))))));
                                arr_15 [i_1] [i_1] [i_2 + 1] [i_1] [i_2 + 2] [i_2] = ((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (2147483643))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)194)), ((unsigned short)55940))))));
                                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)-1020)))), ((unsigned short)14867)))) ? ((+(((/* implicit */int) min(((unsigned short)30828), (((/* implicit */unsigned short) (unsigned char)13))))))) : (((/* implicit */int) min(((short)0), (((/* implicit */short) (signed char)77)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)38084), (((/* implicit */unsigned short) (short)25539))))), (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned short)39702)) : (((/* implicit */int) (short)4)))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)112))))) ? (((((/* implicit */_Bool) 1370171150)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1024))))) : ((((_Bool)1) ? (18446744073709551609ULL) : (11992874815782868431ULL))))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (1932405082872475094ULL)))))));
                    var_21 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)11)), ((unsigned short)29561)))), ((+(18446744073709551615ULL)))));
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned short) var_1);
}
