/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170989
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) & (max((((/* implicit */long long int) ((unsigned short) var_6))), (max((-1LL), (((/* implicit */long long int) 2597577993U))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_12 [9LL] [i_1] [i_1] [9LL] = ((/* implicit */unsigned long long int) 7U);
                        arr_13 [i_0] [(short)13] [i_1] [i_3] [i_3] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_17)))) + (2147483647))) << (((((((/* implicit */int) min((arr_4 [i_3] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_3])))) + (84))) - (9)))))) : (((/* implicit */signed char) ((((((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_17)))) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) min((arr_4 [i_3] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_3])))) + (84))) - (9))) - (129))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_2 [i_3]))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
                        arr_19 [i_0] [i_1] [i_2] [i_2] [i_4] = var_18;
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)17850)), (var_18)))), (max((((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1] [(unsigned char)4])), (var_14)))));
                                var_21 += ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_20 [i_6] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_18))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)67)) << (((/* implicit */int) var_13)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((-2LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_2])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)240)))) : (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2])))))))))));
                    var_23 = (~(((((arr_6 [(unsigned char)6] [i_1] [i_1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2]))))) ? (((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54042))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48785)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))) : (max((-1LL), (((/* implicit */long long int) (signed char)68)))))) == (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_25 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned int) var_6))));
    var_26 = ((/* implicit */int) ((unsigned short) (short)4457));
}
