/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160131
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) max(((short)-15503), (((/* implicit */short) var_2))))) != (((/* implicit */int) (_Bool)1)))))));
            var_21 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-15526)) || (((/* implicit */_Bool) var_14)))))));
            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))));
            var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), (-583091360)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)84)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15523))) : (var_5)))))));
            var_24 = ((/* implicit */signed char) (short)15503);
        }
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)15496)))))))), (((long long int) (short)15510)))))));
        var_26 *= ((/* implicit */_Bool) (+(max((9223371899415822336LL), (((/* implicit */long long int) var_3))))));
        arr_6 [(_Bool)1] [(unsigned short)5] = min(((((+(((/* implicit */int) var_15)))) + ((+(((/* implicit */int) var_14)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_27 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? ((-(((/* implicit */int) (signed char)-21)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
                    var_28 = min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)32714)) : (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_9 [i_2] [10LL])))))));
                    arr_13 [9LL] [i_3] [2U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (signed char)62))))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_17)) % (((/* implicit */int) (unsigned short)32821))))) % ((~(var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-61))))))))));
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        arr_16 [i_4] = min((min((-9223372036854775807LL), (((/* implicit */long long int) (signed char)-1)))), (((/* implicit */long long int) 568910573U)));
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_19))));
    }
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                {
                    var_30 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_5] [i_7]))));
                    var_31 = ((((/* implicit */int) ((((/* implicit */_Bool) (short)-15500)) && (((/* implicit */_Bool) max((1177152739U), (((/* implicit */unsigned int) (signed char)-63)))))))) < (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_5])), (var_14)))), (((((/* implicit */int) (signed char)-102)) * (((/* implicit */int) var_1)))))));
                    var_32 = ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)-62)))), (max((arr_19 [i_5]), (arr_19 [i_5])))));
                    arr_25 [i_5] = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    } 
}
