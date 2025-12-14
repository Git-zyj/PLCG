/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152172
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_8 [i_2] = ((/* implicit */unsigned long long int) min((min((16646144), (((/* implicit */int) (unsigned char)127)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2199006478336LL) : (((/* implicit */long long int) 1517130593))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) ((_Bool) var_9)))))));
                            var_13 = ((/* implicit */short) min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (max(((-(2199006478349LL))), (((/* implicit */long long int) arr_1 [i_3 - 1] [i_1 + 3]))))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) 2199006478324LL);
                            var_14 |= ((((/* implicit */_Bool) ((signed char) max((arr_2 [i_1]), (((/* implicit */int) arr_5 [i_0])))))) ? (((((/* implicit */_Bool) -1115123521)) ? (-636473262) : (((/* implicit */int) (unsigned char)235)))) : ((+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1 - 1] [i_3] [i_3])))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_5 [i_0])) : (1115123509)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_1])))))))) ? (max((2199006478343LL), (((/* implicit */long long int) (signed char)103)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_7 [i_1] [i_1] [i_1] [i_0] [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 4294967295U)) : (2199006478349LL))), (max((((/* implicit */long long int) var_5)), (-2199006478319LL))))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
    var_18 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) max(((unsigned char)190), (((/* implicit */unsigned char) (signed char)-15))))), (((((/* implicit */_Bool) var_6)) ? (17593568211813183296ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535))))) ? (((unsigned int) var_1)) : (((((/* implicit */_Bool) var_7)) ? (2870452194U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (var_10)))))))))));
}
