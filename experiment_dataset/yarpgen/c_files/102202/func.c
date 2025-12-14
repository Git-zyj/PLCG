/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102202
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_18))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) == (((/* implicit */int) (unsigned char)162)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) min((var_8), (var_6)))), (max(((unsigned char)105), ((unsigned char)105))))))) : (arr_0 [(short)10])));
        arr_3 [(signed char)13] &= ((/* implicit */long long int) var_12);
        arr_4 [(signed char)15] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (max((-1713910407097343404LL), (((/* implicit */long long int) (unsigned char)104)))) : (((((((/* implicit */_Bool) var_4)) ? (var_0) : (var_3))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [(short)4])) >= (min((var_12), (((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_4] [5LL] [i_3] [5LL])))))) ? ((+(((/* implicit */int) (unsigned char)151)))) : (((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) 630986770U))))))))))));
                                arr_16 [i_4] [3U] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) var_5)) ? (3796552938U) : (arr_13 [i_2] [i_5])))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] [i_1] |= ((/* implicit */unsigned char) (short)2715);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2899651351U))));
    var_23 |= ((/* implicit */unsigned int) (unsigned char)105);
    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_18)) != (((/* implicit */int) var_15)))) ? ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) var_4))));
}
