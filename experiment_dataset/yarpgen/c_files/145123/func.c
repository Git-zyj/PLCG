/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145123
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */signed char) ((unsigned int) arr_0 [i_0]));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (1044880034U)));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (unsigned char)142)) : (arr_3 [22] [i_2 + 3])));
                            var_16 &= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(signed char)21])) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (signed char)99)))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) arr_11 [(signed char)22] [(signed char)22] [14U] [i_3]);
                            var_18 -= ((/* implicit */unsigned int) ((unsigned char) arr_9 [i_2] [17U]));
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            arr_14 [(unsigned char)8] [20U] [(signed char)8] [i_3] [11U] [i_0] [0U] = ((/* implicit */int) var_7);
                            arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)100)) ? (arr_0 [i_0]) : (arr_7 [i_6] [11] [(unsigned char)8] [i_1] [(unsigned char)22])));
                            var_19 = ((/* implicit */unsigned char) (+(arr_4 [i_0] [11U] [i_2 + 3])));
                            arr_16 [i_0] [i_0] [i_0] [16U] [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3052768988U)) ? (arr_5 [(signed char)3] [i_0] [i_2 - 3] [5U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169)))));
                        }
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)158)) ? (arr_12 [i_0] [i_1] [i_2 - 3]) : (((/* implicit */int) (unsigned char)101)))))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */signed char) arr_5 [11] [i_0] [i_0] [i_2 - 2]);
                    }
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        arr_21 [i_7] [i_1] [i_2] [(unsigned char)20] &= arr_3 [(signed char)12] [(signed char)12];
                        var_21 = ((/* implicit */unsigned char) -1198772490);
                        arr_22 [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned char) (((-2147483647 - 1)) / (((/* implicit */int) (signed char)122))));
                    }
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)114)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((var_2) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)99)))))));
    var_24 -= var_11;
    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (signed char i_8 = 2; i_8 < 24; i_8 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_23 [i_8]), (((/* implicit */unsigned char) (signed char)-91)))))));
        arr_26 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_8])) || (((/* implicit */_Bool) max((arr_25 [i_8]), (arr_25 [i_8]))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8])) ? ((-(((/* implicit */int) arr_25 [i_8])))) : ((-(((/* implicit */int) (signed char)-123))))));
        arr_27 [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1)))))));
    }
}
