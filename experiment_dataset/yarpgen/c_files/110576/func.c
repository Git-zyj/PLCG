/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110576
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
    var_20 = ((/* implicit */unsigned char) ((max((var_19), (((/* implicit */long long int) -566987260)))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) -38618678))), (max((((/* implicit */unsigned long long int) ((((-566987280) + (2147483647))) >> (((3449753754U) - (3449753734U)))))), (max((13756865478287527030ULL), (((/* implicit */unsigned long long int) (signed char)-92))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((max((566987279), (566987262))), (((((min((566987266), (-566987287))) + (2147483647))) << (((1040187392ULL) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (168)))))))));
                                arr_16 [i_0] [i_1] [(signed char)0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (signed char)3)) > (((/* implicit */int) (signed char)3))))) << (((-566987260) + (566987268))))) << ((((~(((/* implicit */int) (short)511)))) + (536)))));
                                var_21 = ((/* implicit */signed char) ((4294967295U) / (4294967282U)));
                                var_22 = ((/* implicit */unsigned int) ((1937533157822263258ULL) * (((/* implicit */unsigned long long int) 3813841991U))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [(signed char)7] = ((/* implicit */int) (((+(((unsigned int) 3265984630U)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1028982645U)), (2179373816068698417ULL)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-40))));
                    arr_19 [i_0] = max((((((-6865600101687462909LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((4294967294U) == (((/* implicit */unsigned int) 566987253)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((1937533157822263258ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32737)))))) || (((/* implicit */_Bool) (signed char)108))))));
                    arr_20 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((6600641076972598435ULL) >= (((/* implicit */unsigned long long int) 566987262))))), (((((((/* implicit */int) (signed char)1)) >> (((4294967293U) - (4294967272U))))) ^ ((-2147483647 - 1))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((var_8) + (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2309115950U)) ? (566987259) : (((/* implicit */int) (unsigned char)255))))) & (((((/* implicit */_Bool) 566987271)) ? (1U) : (1985851334U))))))));
}
