/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178606
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2 + 2] [i_2 + 2] = (+((-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)253)))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_2 [i_0] [i_1 - 1]) : (13813361278315360535ULL)))) ? (((/* implicit */int) min(((unsigned char)224), (arr_0 [i_1 - 1])))) : (min((var_18), (((/* implicit */int) arr_3 [i_1]))))))) ? (arr_2 [i_2] [i_0]) : (((unsigned long long int) (~(1900828557))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((/* implicit */unsigned long long int) var_16)), (arr_4 [i_0] [i_0] [4ULL])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (-((~((-(2358636227U)))))));
                                var_23 = ((/* implicit */unsigned int) (unsigned short)4402);
                                var_24 ^= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (arr_1 [i_4] [i_1]))), (((max((3910826854988071741ULL), (((/* implicit */unsigned long long int) (unsigned char)66)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 2])))))));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)253))))) / ((+(var_0))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))) : (((unsigned long long int) arr_10 [i_0] [i_1] [i_2 + 2] [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((11204121U) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)6)))))));
}
