/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130156
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
    var_19 = ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (signed char)-84)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)102))))) ? (max((16035178568080836510ULL), (16035178568080836510ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)49793))) || (((/* implicit */_Bool) (signed char)83)))))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */int) var_4);
                                var_22 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)65535)))) : (max((arr_5 [i_0]), (((/* implicit */long long int) (signed char)83)))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(2971624889U)))) % (((arr_10 [i_0] [i_4 - 1]) << (((arr_10 [i_0] [i_4 + 1]) - (9127651773114059193ULL))))))))));
                                var_24 += ((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)84)));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_3 [i_2 - 3] [i_2 - 2] [i_4 - 1])))), (((((/* implicit */int) min((var_5), ((unsigned short)27299)))) * (((var_12) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) arr_9 [i_0] [i_0])))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)24992)), (2134891592U)));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((_Bool) var_15))))))))));
}
