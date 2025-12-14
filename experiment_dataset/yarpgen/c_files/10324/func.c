/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10324
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
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                                arr_17 [i_0] [i_3 - 3] [i_2] [i_3] [i_4] [2LL] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))));
                                arr_18 [5] [i_1] [i_1] [5] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (min((2147483647), (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_9)))))) : ((~(2147483647)))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), ((unsigned short)65535)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) ? (((/* implicit */int) max((arr_14 [i_2 + 2] [i_2] [i_2 - 1]), (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 2])))) : (((((/* implicit */_Bool) 17671852942082608151ULL)) ? (((/* implicit */int) arr_14 [i_2 + 1] [i_2] [i_2 - 1])) : (((/* implicit */int) (signed char)-1))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_9);
                                arr_25 [i_0] [i_1] [i_5] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)19)))), ((+(((/* implicit */int) (unsigned short)65535))))));
                                var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (var_14)));
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (arr_7 [i_1])));
                            }
                        } 
                    } 
                    arr_26 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_0)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_3))));
    var_24 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4503599627370495LL));
    var_25 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
