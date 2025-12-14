/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137338
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
    var_12 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_1)))), (var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [(unsigned char)12] [i_0] [i_0] |= max((((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_8))))) | (((((/* implicit */int) var_7)) >> (((((/* implicit */int) (signed char)-69)) + (99))))))), (((/* implicit */int) var_6)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */signed char) max((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_0 [i_2] [i_3]))))), ((~(1896864209)))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1896864189))))), (((unsigned char) arr_0 [i_1] [(unsigned char)5]))))) ? (-1896864225) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (signed char)-109))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)142)) && (((/* implicit */_Bool) (unsigned char)179))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_14 = ((/* implicit */unsigned char) 1896864213);
                    var_15 = max((min((((int) arr_3 [i_0] [i_0] [i_4])), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)106)))))), (((int) arr_17 [i_0] [i_1] [(unsigned char)3])));
                }
                for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    arr_20 [i_0] [i_0] [i_5] [i_1] = ((/* implicit */int) (!(((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)93))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((int) max(((+(((/* implicit */int) arr_7 [12] [i_1] [i_1] [i_5])))), (((((/* implicit */_Bool) -436043158)) ? (((/* implicit */int) arr_11 [i_0] [i_5])) : (((/* implicit */int) arr_1 [i_0]))))))))));
                    var_17 += ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)106), (((/* implicit */unsigned char) (signed char)-7))))), ((~(((/* implicit */int) (signed char)82))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) max((var_2), (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)107))))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (((+(min((1996411116), (((/* implicit */int) (signed char)-22)))))) != (((/* implicit */int) var_3))));
                                var_19 = ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) arr_15 [i_0] [i_1] [i_7]))), (arr_10 [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_8] [i_5] [(unsigned char)6]))))) : (((/* implicit */int) ((signed char) var_1)))));
                        arr_29 [(signed char)15] = ((/* implicit */signed char) (unsigned char)88);
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_0))));
                    }
                }
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((1165762648) | (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (signed char)87)))))));
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_27 [i_11] [i_9] [i_1] [i_0])) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_9] [i_10])) : (((/* implicit */int) var_3)))) > (((/* implicit */int) min((min((arr_1 [i_1]), (((/* implicit */unsigned char) arr_32 [i_1])))), (((/* implicit */unsigned char) ((signed char) var_10))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((int) ((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (unsigned char)109)))) / (var_10))));
    var_25 -= var_5;
    var_26 = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) max((var_6), (var_8)))), ((unsigned char)177)))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) -1)) ? (var_10) : (((/* implicit */int) (unsigned char)253)))));
}
