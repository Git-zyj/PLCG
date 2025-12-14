/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186527
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_3))))));
                arr_5 [10LL] [(signed char)2] [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) arr_3 [i_0 - 3]))))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_3 [i_0 - 2])))))))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) (-(102686374)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (-(var_3)));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_0))))));
                    var_17 ^= (-((~(arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1]))));
                    arr_15 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)109))))))))));
                    arr_16 [i_4] [i_3] = (~((+(var_6))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_19 [i_5] = ((/* implicit */unsigned char) (+((+(var_6)))));
    }
    for (short i_6 = 3; i_6 < 8; i_6 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)2409)))))));
        var_20 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_1))))));
    }
}
