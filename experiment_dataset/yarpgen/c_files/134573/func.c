/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134573
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) min(((+((~(((/* implicit */int) (signed char)32)))))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) < (16678193274925358872ULL)));
                        arr_12 [i_3] [i_2] [i_0] [i_3] = ((/* implicit */long long int) 0U);
                        var_18 = ((/* implicit */_Bool) min((var_18), ((!((!(((/* implicit */_Bool) 4294967295U))))))));
                        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (686713670U)))));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)12616))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        arr_17 [i_4] [i_4] [i_2] [10ULL] [i_0] [(signed char)0] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), ((-(arr_8 [i_4 + 1] [i_2] [i_2] [(unsigned short)16])))))) / (min((((/* implicit */unsigned long long int) (short)-16612)), (560750930165760ULL)))));
                        arr_18 [i_0] [i_0] = (!(((/* implicit */_Bool) 0U)));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-115)) + (2147483647))) << (((6924877862559520554ULL) - (6924877862559520554ULL)))))), (min((20ULL), (12272540327904581633ULL))))))));
                        var_22 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)127))) ^ (2362036211U)));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_5] [i_0])), (min((((/* implicit */int) arr_9 [i_1])), ((+(((/* implicit */int) (_Bool)1))))))));
                        var_24 = ((/* implicit */signed char) (-(2663374016U)));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_24 [i_2] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned long long int) (!((((+(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned short)9983))))));
                        arr_25 [i_0] [i_0] [i_6] [i_0] = (unsigned short)2013;
                    }
                    var_25 = (unsigned short)51201;
                }
            } 
        } 
    } 
    var_26 += ((/* implicit */signed char) 127U);
    var_27 = 0ULL;
}
