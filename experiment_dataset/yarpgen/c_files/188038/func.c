/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188038
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
    var_19 = ((/* implicit */short) var_6);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (4000202498235908826ULL)))))) ? (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (-5254113611967069167LL)))) : (((unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_21 &= ((/* implicit */signed char) var_14);
                            arr_11 [i_3] [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) min((((/* implicit */long long int) max((var_5), ((short)16641)))), (max((0LL), (-9223372036854775803LL)))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) var_5)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-1)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)229)), (min((4179662231U), (((/* implicit */unsigned int) (short)-10)))))))));
                            var_23 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) min(((short)-64), ((short)32736)))), (4000202498235908826ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_11)))))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)223)) ? (3713854268U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) - (5254113611967069146LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-21684))))) : (((var_17) ? (((/* implicit */long long int) -1498257518)) : ((-9223372036854775807LL - 1LL))))))) ? ((((!(((/* implicit */_Bool) 7374295591813870044ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 11072448481895681563ULL)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (-(268434944)))), (min((((/* implicit */unsigned int) var_0)), (var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)30))) ? (min((((/* implicit */int) (short)-28223)), (-268434945))) : (((int) var_11)))))));
}
