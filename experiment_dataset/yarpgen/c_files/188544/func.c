/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188544
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
    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) var_2))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))) >> (((var_10) + (241295474)))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((3818603692U) << (((/* implicit */int) (unsigned char)7)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) var_10)) : (476363594U)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3818603710U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (3495785303U)))) || (((/* implicit */_Bool) ((int) var_18)))));
                    var_22 *= ((/* implicit */unsigned char) ((unsigned short) var_9));
                    var_23 = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_0] [i_0 + 3]));
                }
                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)50813)) ? (-7237645843767968182LL) : (((/* implicit */long long int) -1841012161)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) 30720ULL))) : (((/* implicit */int) var_14)))))));
                var_25 = ((((long long int) (unsigned short)21722)) <= (((long long int) (short)-15098)));
                var_26 &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 13092355235437774969ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_14)))));
            }
        } 
    } 
    var_27 += ((/* implicit */int) var_18);
}
