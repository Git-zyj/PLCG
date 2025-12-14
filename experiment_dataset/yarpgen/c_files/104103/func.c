/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104103
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) min((arr_4 [i_1]), ((signed char)-17))));
                var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (_Bool)0);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */long long int) max((((/* implicit */int) min((arr_9 [i_3] [i_3 + 3] [i_4 - 2] [i_4 - 2]), (arr_9 [i_2] [i_3 + 1] [i_4 + 1] [i_4])))), ((~(((/* implicit */int) arr_9 [i_1] [i_3 + 1] [i_4 - 1] [i_4]))))));
                                var_14 = ((/* implicit */int) max((4294967295U), (max((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967286U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2449505478U)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(signed char)1])) : (((/* implicit */int) (unsigned char)251)))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) >= (arr_12 [i_4] [(short)7] [i_2] [i_1])))) >= (((/* implicit */int) (unsigned char)61))))) >= (((/* implicit */int) ((1845461833U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)48327), (((/* implicit */unsigned short) (unsigned char)251))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (_Bool)0);
    var_17 = max(((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (var_7)))))), (((var_7) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_18 = ((/* implicit */unsigned short) var_2);
}
