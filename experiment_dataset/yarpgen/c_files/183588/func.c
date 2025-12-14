/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183588
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_18)) > (((/* implicit */int) var_18))));
                            arr_11 [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-256)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (arr_7 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) -1790793443))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) arr_4 [i_1 - 3] [i_0 + 2])))))));
                        }
                    } 
                } 
                arr_12 [i_1 + 2] [(unsigned short)4] [i_0] = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) arr_9 [(short)8] [i_1] [(signed char)8] [(unsigned short)10])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14))))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((_Bool) var_16)))));
                arr_13 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_0 + 2] [i_1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && ((_Bool)1)))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)89))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((1889201421201311715ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))))) * (var_7))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((((-249687950186054610LL) - (((/* implicit */long long int) 492854658)))) + (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-29905)))));
    var_22 = ((/* implicit */unsigned long long int) var_4);
    var_23 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-113)))))));
}
