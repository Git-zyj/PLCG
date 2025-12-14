/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131291
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (short)1193)) : (((/* implicit */int) (short)1193)))))) ? (((/* implicit */int) min((max((((/* implicit */unsigned char) var_9)), (var_5))), (((/* implicit */unsigned char) var_7))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_17)), (var_5))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_4] = min((((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_5)))), (((((/* implicit */_Bool) ((var_12) & (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_2] [i_2]))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_7)))))));
                                var_19 += ((/* implicit */signed char) var_14);
                                var_20 -= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) > (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) ((short) 152218879)))));
                }
            } 
        } 
        arr_15 [i_0 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) max(((short)1193), (((/* implicit */short) (signed char)-66))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (signed char)-55)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (var_16) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_11)) : (var_16)))))));
        var_22 = ((/* implicit */short) var_0);
        arr_16 [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) -4392452977307219998LL)) ? (-2731505737302000501LL) : (((/* implicit */long long int) -874612703))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_17)), (var_5)))) : (((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */int) var_8)), (var_16))) : (((/* implicit */int) (signed char)3))))));
}
