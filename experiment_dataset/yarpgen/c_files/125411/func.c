/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125411
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
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_17 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_1])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0])))), (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2])) % (((/* implicit */int) (signed char)107))))));
            var_18 = min((min((var_15), (2013535784U))), (((/* implicit */unsigned int) min((((((/* implicit */int) var_3)) - (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_4 [i_0 - 3] [(signed char)7]))))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0 - 3]);
            /* LoopNest 3 */
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_15 [i_0] [i_2] [(unsigned char)8] [(unsigned char)8] [i_2] [i_2] [i_5] &= ((/* implicit */unsigned int) arr_12 [i_5] [i_2] [10U] [i_2] [i_0]);
                            arr_16 [i_0] [i_5] [i_5] [(signed char)12] [i_5] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 + 1] [i_4 - 1]))) / (4026531840U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))));
                        }
                    } 
                } 
            } 
            var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_0])))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
        {
            var_20 -= ((/* implicit */unsigned int) arr_2 [i_6]);
            arr_19 [i_0] [i_0] [i_0] = var_0;
        }
        var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_7 [i_0])))) ? (arr_17 [i_0] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2]))))), (min((arr_6 [i_0 - 2]), (((/* implicit */unsigned int) (unsigned char)224))))));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (signed char)95)))))))));
        arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((~(((((/* implicit */_Bool) (signed char)-123)) ? (arr_6 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) : (((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (min((4294967274U), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)85))))))));
        arr_23 [i_7] = ((/* implicit */unsigned char) arr_9 [i_7] [i_7] [i_7]);
        var_23 += ((/* implicit */unsigned char) (signed char)0);
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_3)), (var_14)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_25 = ((/* implicit */signed char) ((((arr_13 [i_8]) >= (((((/* implicit */_Bool) 22U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))) : (4286578688U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_8]), (((/* implicit */unsigned char) var_7))))) ? (((((/* implicit */int) (unsigned char)58)) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) (signed char)61)))))) : (var_9)));
        arr_26 [i_8] = ((/* implicit */unsigned char) var_0);
    }
}
