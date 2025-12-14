/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177111
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
    var_18 = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_13), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_6)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_4] [i_4 - 2])) : (max((-2147483633), (-134217728))))));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_11)), (var_16)))), (9223372036854775807LL))))));
                                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 1] [i_4] [i_3 + 2] [i_3 + 3] [(unsigned short)1])))), (((/* implicit */int) ((short) max((10068674467733436911ULL), (((/* implicit */unsigned long long int) 1632239204))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_1])), (960ULL)))) ? (((-9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)31), (((/* implicit */short) var_14)))))))));
                    var_24 |= ((/* implicit */_Bool) (~((-(-1528939118293313198LL)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (short)-46);
    var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32035))) + (2293806961423243363ULL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((long long int) 2277475632U)))))));
}
