/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10230
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_17)), (var_15))))))) ? (min((((-5768883785505842979LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (var_14)))))) : (((/* implicit */long long int) var_14))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_9))) / (max((var_7), (var_6))))) : (min((((/* implicit */long long int) (unsigned char)141)), (((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) var_12)) - (12399)))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_9 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) ((-37550021) / (((/* implicit */int) (unsigned short)6746)))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((var_6) / (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((var_13) != (((/* implicit */long long int) 225247660U))))), (var_8)))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) min((max(((unsigned char)38), (var_4))), (var_11)))) >> (((((((((/* implicit */int) (unsigned short)1023)) > (((/* implicit */int) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((-7754552755116496538LL), (var_3))))) + (7754552755116496563LL)))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) var_10)) ^ (min((var_6), (((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) >> (((((/* implicit */int) var_15)) - (40248))))))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) var_4);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */long long int) max((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_2))))))) / (var_9)));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_3))));
                var_22 = ((/* implicit */unsigned short) var_6);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_17 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
                    {
                        {
                            arr_23 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_17))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_9))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_9))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_5)))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) -1LL);
            }
            var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) + (var_13)));
        }
    }
    var_27 = ((/* implicit */unsigned char) ((var_9) * (min((((((/* implicit */long long int) ((/* implicit */int) var_2))) * (var_13))), (((/* implicit */long long int) var_1))))));
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_1))));
}
