/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148911
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
    var_10 = (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_2)))), (var_4)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_4))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */signed char) var_4);
                        var_13 = ((/* implicit */unsigned char) max((var_13), (var_3)));
                    }
                }
                for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    var_14 -= ((/* implicit */unsigned long long int) min(((unsigned short)51698), (((/* implicit */unsigned short) var_3))));
                    var_15 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                    var_16 = ((/* implicit */unsigned char) (signed char)-75);
                    arr_16 [i_0] [i_1 + 2] = ((/* implicit */_Bool) 4449006022513361417LL);
                }
                var_17 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((arr_12 [i_0]), (((/* implicit */int) (unsigned char)224)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)88)))))))));
            }
        } 
    } 
}
