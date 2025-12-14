/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108377
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 103563522U)) ? (((((/* implicit */_Bool) arr_2 [(signed char)3])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_0 [i_0] [14])))) : (((/* implicit */int) ((((/* implicit */_Bool) -945511394)) && (((/* implicit */_Bool) -945511394)))))));
        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) ? (-2096770209) : ((~(((/* implicit */int) (signed char)-1))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) (unsigned char)188)) ? (420575573U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))));
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_6 [i_2 - 2] [i_0 + 2]));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) (+(-2140612259)))))))));
            }
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (((-(1555510730U))) * (((var_12) << (((((/* implicit */int) arr_11 [i_0] [18] [i_4])) - (41))))));
                        arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-123)) ? (-1582323487) : (((/* implicit */int) arr_3 [i_0 + 2]))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-945511385) : (((/* implicit */int) arr_2 [(unsigned char)3]))));
                        var_21 = ((unsigned char) 1093086354U);
                    }
                } 
            } 
        }
    }
    var_22 = ((/* implicit */unsigned int) var_10);
    var_23 = ((/* implicit */int) min((4191403773U), (2265000120U)));
    var_24 = ((/* implicit */signed char) ((((min(((+(((/* implicit */int) (signed char)-67)))), (((/* implicit */int) var_2)))) + (2147483647))) << (((((/* implicit */int) var_10)) - (126)))));
    var_25 = var_6;
}
