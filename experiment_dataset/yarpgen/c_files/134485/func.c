/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134485
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? ((+(((/* implicit */int) (unsigned char)76)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)98))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_4])) : (((/* implicit */int) var_0)))))));
                                arr_15 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3148987312U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53642)) ? (((/* implicit */int) (unsigned short)15131)) : (((/* implicit */int) (unsigned char)202)))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)228))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)60621))));
        arr_17 [i_0] = ((/* implicit */unsigned short) 5879663U);
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)43982)))) : (((/* implicit */int) arr_14 [i_0] [i_0]))));
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        arr_22 [(unsigned char)12] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [(unsigned short)4] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) arr_9 [i_5] [(unsigned char)16] [i_5] [i_5])))))) > (((((/* implicit */_Bool) ((unsigned char) arr_12 [10U] [10U]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) (unsigned short)37489)) ? (4114671476U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
        var_22 = ((/* implicit */unsigned int) arr_1 [i_5]);
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) var_7);
        arr_27 [i_6] = arr_1 [(unsigned short)6];
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_11)), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_17))));
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) 2086316891U))));
}
