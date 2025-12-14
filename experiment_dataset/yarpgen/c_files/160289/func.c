/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160289
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
    var_15 = ((/* implicit */long long int) min(((~(((int) var_2)))), ((~((+(((/* implicit */int) (signed char)-113))))))));
    var_16 -= var_12;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (699405590)))))) | (((/* implicit */unsigned long long int) ((max((699405596), (((/* implicit */int) arr_0 [i_0] [i_0])))) + ((~(((/* implicit */int) (unsigned char)210))))))))))));
        var_18 ^= ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) var_2)) : (var_12))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))))));
        var_19 = ((/* implicit */unsigned char) (~(699405596)));
        arr_3 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (699405590) : (699405594))))));
    }
    for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-60);
        var_20 *= ((/* implicit */signed char) (((+(arr_5 [i_1] [i_1 - 1]))) << (((((long long int) var_1)) - (7675205461158778992LL)))));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_2]), (max((((/* implicit */unsigned long long int) var_10)), (var_7)))))) ? (((((-699405583) <= (1406885477))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) % (arr_9 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_8 [i_2]))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(arr_9 [i_2]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) ((_Bool) 675687138373832300ULL))), (min((var_2), (((/* implicit */unsigned int) -1049219067)))))) : (((/* implicit */unsigned int) ((arr_14 [i_3 - 2] [i_3 + 2]) ? (((/* implicit */int) arr_14 [i_3 - 2] [i_3 + 2])) : (((/* implicit */int) arr_14 [i_3 - 2] [i_3 + 2])))))));
        var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14)));
        var_23 = ((/* implicit */unsigned int) arr_9 [i_3 - 1]);
        var_24 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0))), (var_1))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        arr_18 [(unsigned short)18] |= arr_15 [(unsigned char)16] [i_4];
        var_25 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) arr_17 [i_4])) : (var_12))));
    }
}
