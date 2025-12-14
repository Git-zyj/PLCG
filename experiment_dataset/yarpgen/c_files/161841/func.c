/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161841
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
    var_13 &= ((/* implicit */unsigned int) var_3);
    var_14 = min((((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_3)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_5))))) ? (min((11U), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((var_0) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((((var_9) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_5 [i_0] [i_1 - 1] [i_4 + 1] [i_2 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29013))))))));
                                arr_10 [i_0] [i_0] [i_2] [i_3] [2ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (max((arr_7 [i_4] [i_3] [(unsigned short)3] [(unsigned short)3]), (((/* implicit */unsigned int) (short)-31954))))))) ? (((/* implicit */unsigned long long int) 2379632080U)) : (((((/* implicit */_Bool) min((2659663092U), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((var_6), (((/* implicit */unsigned long long int) 3932160))))))));
                            }
                        } 
                    } 
                    arr_11 [7ULL] [(unsigned char)2] = arr_6 [i_0] [i_1] [i_1] [i_1] [i_0];
                }
            } 
        } 
    } 
}
