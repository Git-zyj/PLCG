/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172690
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_1])))) : (((var_16) - (((/* implicit */int) arr_1 [i_0])))))));
            var_19 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) (short)6857)))), (((((var_13) && (((/* implicit */_Bool) var_4)))) ? (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)10] [i_1] [i_1])))))));
            var_20 = ((/* implicit */signed char) min((max((min((var_18), (((/* implicit */unsigned char) var_13)))), (((/* implicit */unsigned char) (!(arr_4 [i_1] [i_1] [i_1])))))), (((/* implicit */unsigned char) arr_1 [i_0]))));
            var_21 = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
            var_22 = ((((/* implicit */int) ((signed char) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))) <= (((/* implicit */int) ((signed char) (unsigned char)245))));
        }
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(var_5)))) && ((!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (unsigned char)227))))))));
            var_23 += ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) 12942137065914813013ULL))))));
        }
        var_24 = ((/* implicit */int) (+((+(max((((/* implicit */unsigned int) arr_1 [i_0])), (var_10)))))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = arr_1 [i_3];
        var_25 *= ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (_Bool)1)))))) ^ (arr_2 [i_3]));
    }
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((short) 3128529398U));
        var_26 *= ((/* implicit */_Bool) arr_14 [i_4] [i_4]);
    }
    for (short i_5 = 3; i_5 < 18; i_5 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)35)))))));
        var_28 -= ((/* implicit */unsigned int) arr_17 [i_5]);
        var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned char)227)) ^ (((/* implicit */int) (unsigned char)211)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_5])) < (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5] [i_5])) <= (((/* implicit */int) arr_17 [i_5]))))))))) : (((((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5]))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))));
        var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22705))) > (0U)))) & (((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_5])), (var_18))))))));
    }
    var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
}
