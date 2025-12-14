/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101475
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) var_12)), (var_14)))));
                var_19 ^= (!(((/* implicit */_Bool) (unsigned char)224)));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) (signed char)125))))), ((~(var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5681757551368422200LL))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) > (((var_0) >> (((-5681757551368422202LL) + (5681757551368422228LL))))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 0U)) : (var_0))), (var_0))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((-7402917889133153865LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)21))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)21)) ? (-514486874202542957LL) : (((/* implicit */long long int) var_5))))))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (var_14)))) ? (((/* implicit */unsigned long long int) ((-9223372036854775804LL) + (((/* implicit */long long int) var_6))))) : (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (var_3)))))))) != (max((((14637715830282855035ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (unsigned char)222)))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_24 [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (3809028243426696564ULL)))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)9355)))) : (((/* implicit */int) ((((/* implicit */_Bool) -514486874202542946LL)) && (((/* implicit */_Bool) var_13)))))))) % (var_10)));
                                arr_25 [(_Bool)1] [i_6] [(_Bool)1] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((long long int) var_6))));
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (short)9355)))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) 2066297436U);
}
