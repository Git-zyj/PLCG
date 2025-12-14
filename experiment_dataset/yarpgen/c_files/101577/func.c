/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101577
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
    var_11 = (-(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)21872))))), ((short)-17860)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((unsigned long long int) (short)17853);
                arr_7 [i_0] [i_0] [(short)9] = ((/* implicit */signed char) min((((/* implicit */int) var_7)), ((+(((((/* implicit */int) arr_4 [i_0] [i_0])) % (((/* implicit */int) arr_1 [i_0] [(short)10]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((arr_5 [i_1 + 1] [i_1 + 1]) - (arr_5 [i_1 + 1] [i_1 + 1])))) & (max((((/* implicit */unsigned int) var_9)), (var_3)))));
                            arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_0) % (((/* implicit */long long int) 3173962845U))))) == (((((/* implicit */_Bool) 8287065892842266680ULL)) ? (var_8) : (((/* implicit */unsigned long long int) var_0))))));
                            var_13 -= ((/* implicit */unsigned int) (~(min((((2147483647) ^ (((/* implicit */int) (unsigned short)23525)))), (((/* implicit */int) var_9))))));
                            var_14 -= ((/* implicit */short) arr_10 [i_0] [i_1] [i_2] [i_1]);
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) (+(((arr_10 [i_1 + 2] [i_1 - 1] [5U] [i_1]) % (3173962877U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24864)) ? (10159678180867284925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4160))))))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_3)))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */unsigned long long int) var_3)) - (var_8)))))));
}
