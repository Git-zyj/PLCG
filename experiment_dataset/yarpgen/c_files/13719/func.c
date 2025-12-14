/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13719
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+(var_0)))) : (((unsigned long long int) var_2))));
    var_16 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) 18446744073709551612ULL);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_1] [(signed char)15] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) var_14))))) ? (((/* implicit */int) (unsigned char)121)) : ((~(((/* implicit */int) var_6)))))), ((+(((/* implicit */int) (_Bool)0))))));
                                arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((var_8) << ((((-(arr_6 [i_0] [i_0]))) - (9245105523614348031ULL)))));
                                arr_16 [i_1] [(signed char)0] = ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_2] [i_1]));
                                arr_17 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) var_14))))), (var_0)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
