/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160358
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) (short)5733))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((/* implicit */int) max((var_5), (((/* implicit */short) var_15))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))))))))))));
                                var_19 = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)2))) ? (arr_13 [i_1] [10U] [i_1 - 1] [10U] [i_1]) : (105934404U)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (short)-10694);
}
