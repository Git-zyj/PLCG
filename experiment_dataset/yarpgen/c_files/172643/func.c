/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172643
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [15LL] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) -5263561422024280810LL);
                                arr_16 [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)64)) : (arr_8 [i_3] [i_3] [i_3] [i_3])))) ? ((-(1037760968904407813LL))) : (((/* implicit */long long int) arr_8 [i_0 + 1] [16] [i_0 + 1] [i_0 + 2])));
                                var_14 = ((/* implicit */signed char) 0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) arr_6 [i_5] [i_2] [i_0]);
                                var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (-2147483645)))) ? (((/* implicit */long long int) ((/* implicit */int) ((18364934335714666869ULL) <= (18ULL))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_3)) : (arr_5 [i_6])))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min((var_0), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))));
                                var_17 = arr_3 [i_0] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_7);
    var_19 = ((/* implicit */unsigned short) (short)(-32767 - 1));
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) (signed char)120)) ? (-1386846124475297898LL) : (((/* implicit */long long int) 2624184956U))))))) ? (((/* implicit */int) (signed char)110)) : ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)32)) : (var_3))))))))));
}
