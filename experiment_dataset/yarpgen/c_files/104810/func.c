/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104810
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */int) ((_Bool) min((((/* implicit */short) var_12)), (var_6))))), ((+(((/* implicit */int) (unsigned short)0)))));
                                arr_15 [i_0] = ((((/* implicit */_Bool) (unsigned short)54591)) ? (-4345171958943791272LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10944))));
                                arr_16 [i_3] [i_0] = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [13] [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 3] [(_Bool)1])) ? (((/* implicit */int) arr_12 [i_4] [i_4 - 3] [i_4] [i_4 + 3] [(unsigned short)5] [i_4 - 3] [(_Bool)1])) : (((/* implicit */int) arr_12 [i_4] [i_4 + 3] [(_Bool)1] [i_4] [i_4] [i_4 - 3] [(signed char)22]))))), (min((((((/* implicit */_Bool) (unsigned short)836)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-81))))), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned short) arr_7 [i_4] [14LL] [i_4 - 2]))))))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_10 [i_2 + 1] [i_1] [(unsigned char)12] [(unsigned char)12] [22] [i_0]))))))), ((!(((((/* implicit */int) var_5)) != (((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)14] [4U] [i_0] [i_2 + 1]))))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10945))))), (min((((((/* implicit */_Bool) (unsigned short)65533)) ? (var_16) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned short) var_14))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_14);
}
