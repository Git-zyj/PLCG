/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103439
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_19 ^= (unsigned char)255;
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_15)))))));
        var_21 *= var_11;
        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)206))))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-((+(((/* implicit */int) var_4)))))))));
    var_24 -= ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            {
                var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)96))))))) && (((/* implicit */_Bool) var_1))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_26 += ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_2 [i_2 - 2] [i_2 - 2]))))));
                            var_27 -= var_8;
                            var_28 *= max(((signed char)1), (((signed char) arr_12 [i_1] [i_2] [i_3])));
                        }
                    } 
                } 
                var_29 ^= ((/* implicit */unsigned char) ((signed char) var_11));
                arr_13 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)15))));
            }
        } 
    } 
}
