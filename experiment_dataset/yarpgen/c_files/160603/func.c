/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160603
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
    var_18 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((((4925521793050446557LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_5 [i_1] [i_0]);
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_2] [i_3]);
                            var_21 = ((/* implicit */signed char) ((((((((/* implicit */int) (short)768)) >= (((/* implicit */int) (unsigned char)159)))) && (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)33)) << (((arr_5 [i_0] [i_0]) - (1541343949U)))))) | (max((((/* implicit */long long int) 4294967295U)), (var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)89)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)90)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(arr_0 [i_1] [i_1])))))))));
                            var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1] [i_1]))))) : ((-(1997951533U))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)21962)) ? (3392563738U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 4; i_4 < 13; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_23 = ((/* implicit */short) ((int) 4294967295U));
                                arr_18 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44155)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_2 [i_5 + 1] [i_6]))))) ? (((/* implicit */int) max((arr_3 [i_0 - 1] [i_0 - 1]), (((/* implicit */short) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */int) (unsigned char)197))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (1808887794128230559ULL)));
                    arr_21 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)5))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))));
                    var_26 = ((/* implicit */signed char) var_4);
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1]))));
                }
                for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_28 = ((/* implicit */unsigned char) ((2711255716724116913ULL) ^ (((/* implicit */unsigned long long int) -2051973246643712623LL))));
                    var_29 += ((/* implicit */signed char) var_1);
                    var_30 = ((/* implicit */unsigned char) min((arr_9 [i_1 + 3] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)162)))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) (~(var_7)))) - (var_2))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))) < (var_10))) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_13)))))));
}
