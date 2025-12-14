/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117453
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
    var_16 = ((/* implicit */signed char) ((var_10) >> (((((/* implicit */int) var_0)) - (4891)))));
    var_17 = max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_13))))) : (((((/* implicit */unsigned int) var_11)) % (var_3))))), (((/* implicit */unsigned int) ((((var_15) ^ (var_15))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_2])))), (max((((/* implicit */unsigned long long int) ((arr_2 [i_2] [i_1] [i_0]) | (((/* implicit */int) var_4))))), (max((arr_4 [i_2] [i_1]), (((/* implicit */unsigned long long int) var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (max(((~(var_14))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_1] [i_0])), (arr_10 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])))) && (((/* implicit */_Bool) max((1945822713155796881LL), (((/* implicit */long long int) (short)(-32767 - 1))))))))))));
                                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) != (((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 2])) : (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [i_5 - 2]))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1945822713155796881LL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6])) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 0U)))))))));
                }
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) max((max((2994695525U), (((/* implicit */unsigned int) (signed char)-80)))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_24 [i_8] [i_6] [i_5])))) >= (((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) var_9))))))))));
                    var_26 ^= ((/* implicit */unsigned char) (~((((-(7931279028564734878ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) / (var_8))))))));
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_27 ^= ((var_14) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_22 [i_5] [i_5]) + (((/* implicit */unsigned long long int) arr_25 [i_9] [i_5 - 1] [i_5 - 1])))))))));
                    var_28 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)(-127 - 1))), (35184372088831LL)))), (max((var_15), (((/* implicit */unsigned long long int) var_13)))))))));
                }
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 2])), (var_15)))))));
                var_30 = ((/* implicit */long long int) ((var_11) >= (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), (var_1))))));
            }
        } 
    } 
}
