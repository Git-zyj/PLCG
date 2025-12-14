/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181144
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
    var_14 *= ((/* implicit */unsigned char) 831855075);
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1))))) : (((((/* implicit */_Bool) ((1015066757U) + (var_3)))) ? (var_2) : (((/* implicit */unsigned long long int) (-(var_3))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */short) -831855075);
                    var_17 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)-5085))));
                    arr_9 [(unsigned short)7] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -7725339266533429161LL)) ? (var_4) : (var_8))) % (((/* implicit */unsigned long long int) (+(831855056))))))) ? ((~(2545160091U))) : (((/* implicit */unsigned int) 359695816))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((7667095376327685440ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)18445)) + (-831855053)))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -831855075)) ? (-831855070) : (((/* implicit */int) arr_1 [i_2])))))));
                        arr_15 [5U] = ((/* implicit */unsigned short) ((max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (4294967295U)))))) << (((((/* implicit */int) (unsigned short)53703)) - (53683)))));
                        var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [(short)10] [i_3]), (((/* implicit */unsigned short) (signed char)-113)))))));
                    }
                }
            } 
        } 
    } 
}
