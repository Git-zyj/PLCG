/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184031
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_1 + 3])) : (((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [(unsigned char)5]))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (short)4203))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) var_6))));
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) max((var_14), (((/* implicit */unsigned char) var_0))))))));
            arr_13 [i_4] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) var_8))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) arr_11 [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_3]))))) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_12 [i_3] [(short)11])))) : (((((/* implicit */int) arr_7 [(signed char)7] [i_4])) % (((/* implicit */int) var_14))))))));
            var_19 ^= ((/* implicit */signed char) ((unsigned char) (signed char)-65));
        }
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_16 [i_5] [i_5] = ((/* implicit */short) (!(((((/* implicit */int) arr_14 [(unsigned char)13] [i_5] [i_5])) == (((/* implicit */int) var_6))))));
            var_20 = ((/* implicit */short) ((((/* implicit */int) (signed char)25)) % (((/* implicit */int) (short)29504))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)18)))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((max((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_12)))))) + (((((/* implicit */_Bool) arr_12 [i_6] [i_6 + 1])) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_12)) - (46)))))))));
                    var_23 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_10 [i_6 + 1] [i_6 - 1])))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */short) var_10)), (var_8))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) (-(((/* implicit */int) var_6))))))));
                                arr_26 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_7)))), ((+(((/* implicit */int) (unsigned char)112))))))) ? (((/* implicit */int) arr_9 [i_6 - 1])) : (((((/* implicit */_Bool) (short)-29504)) ? (((/* implicit */int) (short)-10656)) : (((/* implicit */int) (short)-16385))))));
                                var_25 = ((/* implicit */signed char) ((unsigned char) (short)-29504));
                            }
                        } 
                    } 
                    arr_27 [i_3] [i_7] [(signed char)2] &= var_13;
                }
            } 
        } 
        var_26 ^= ((unsigned char) var_8);
        arr_28 [i_3] [i_3] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-121))))), ((unsigned char)201));
    }
    var_27 = ((unsigned char) (!(((/* implicit */_Bool) var_5))));
}
