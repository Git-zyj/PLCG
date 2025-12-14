/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127119
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0]))))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) -268505388))), (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4 - 3])) ? (arr_9 [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2]) : (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4 + 1] [i_2 + 2])))));
                        arr_13 [i_0 - 1] = ((/* implicit */short) max((((signed char) 1703926543U)), (((signed char) (short)2047))));
                        arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] &= ((/* implicit */long long int) ((((arr_4 [i_0] [i_0 + 1]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2044)) ? (71776119061217280LL) : (3208158026059333122LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4])), (arr_2 [i_2 - 2]))))))));
                        arr_15 [i_0] [i_0] [i_2 + 1] [i_4] [i_0 + 1] &= ((/* implicit */unsigned char) min((((long long int) (!(((/* implicit */_Bool) -4331929271937209527LL))))), (max((arr_12 [i_0 + 1]), (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_12 [i_1])))))));
                    }
                    var_19 = ((/* implicit */long long int) ((((4331929271937209549LL) > (-4331929271937209540LL))) && ((!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (-(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */signed char) var_12);
}
