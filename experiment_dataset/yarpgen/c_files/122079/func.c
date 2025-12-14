/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122079
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
    var_17 = ((/* implicit */unsigned long long int) (unsigned char)0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) (unsigned char)222)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)173)) : (-1736705660))) : (((((((/* implicit */int) (unsigned char)240)) - (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_8)))))));
        var_19 |= ((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_2))))));
    }
    var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((20LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (min((1736705660), (((/* implicit */int) var_6)))) : (((/* implicit */int) var_15))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (137074061U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((long long int) (-2147483647 - 1)))))) / (max((((/* implicit */unsigned long long int) var_8)), (arr_7 [6LL] [i_3] [i_3])))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (((arr_3 [(short)8]) % (((/* implicit */unsigned long long int) var_3))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (((var_3) - (7010516541944077317LL)))))), (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)57)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((1804095616197289698LL) < (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                arr_16 [(unsigned short)6] [(signed char)4] [(signed char)4] &= ((/* implicit */unsigned char) ((unsigned short) 1529585630U));
            }
        } 
    } 
    var_24 = ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))))) ? ((((!(var_4))) ? (((/* implicit */int) var_11)) : (((2147483647) | (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((unsigned char) var_2))));
}
