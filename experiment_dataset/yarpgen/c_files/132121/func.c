/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132121
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned int) (((!(((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (min((((/* implicit */unsigned short) (signed char)103)), (arr_0 [i_1]))))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)90))))), ((+(0LL)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 3; i_4 < 18; i_4 += 3) 
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) (signed char)-56))));
                                var_15 -= ((/* implicit */unsigned int) (signed char)-104);
                            }
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (1405076461126337803LL)))) ? (min((1232453368U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])))) : (var_4)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)-84))) ? (min((((((/* implicit */int) var_1)) & (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (signed char)-95)))))) : (((((((/* implicit */int) var_10)) < (((/* implicit */int) (unsigned char)127)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) < (arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)56199))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_13))))) / (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27047)))))))));
    var_19 = ((unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-95)))) ^ (((/* implicit */int) var_10))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)204)) >> (((((/* implicit */int) (signed char)-21)) + (30)))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (var_12))))))))));
}
