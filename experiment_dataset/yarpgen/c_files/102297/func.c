/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102297
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)50781)) ? ((+(((/* implicit */int) (signed char)76)))) : (((/* implicit */int) ((unsigned char) var_6)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_8)))))));
                        var_13 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0]))));
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned short i_4 = 4; i_4 < 10; i_4 += 3) /* same iter space */
            {
                var_15 &= ((/* implicit */unsigned int) var_4);
                var_16 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_4 - 2] [i_1] [i_0]))));
                    var_18 = ((signed char) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    var_19 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [(signed char)11]))))) | ((+(((/* implicit */int) arr_15 [(signed char)6] [i_1] [i_5] [i_1])))));
                }
                for (unsigned int i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_5 [(signed char)2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34503))))) + (9223372036854775807LL))) >> ((((-(((/* implicit */int) var_6)))) + (7095))))))));
                    var_21 = ((/* implicit */unsigned short) arr_1 [i_1]);
                }
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_1);
            }
            for (unsigned short i_7 = 4; i_7 < 10; i_7 += 3) /* same iter space */
            {
                var_22 -= ((/* implicit */signed char) var_4);
                var_23 = ((/* implicit */signed char) 534773760U);
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (arr_10 [(_Bool)1] [i_7 + 1] [i_7 + 1] [i_7 - 4]) : (((/* implicit */int) (unsigned short)50781))));
            }
            for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_14 [i_8 - 1] [8] [i_1] [i_0] [i_0])) : (arr_24 [i_8] [i_0])));
                var_26 = ((/* implicit */unsigned int) arr_18 [i_8] [i_0]);
                var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_8 + 1]))));
            }
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_1])))))));
        }
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_9]))));
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_17 [i_0] [i_0] [i_0])));
            var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)46755)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (unsigned short)26385)))) / ((-(((/* implicit */int) var_1))))));
            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)50770)))));
        }
    }
    var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1573420975U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1)))))) : (var_0))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_7))))))));
    var_33 = ((/* implicit */unsigned int) ((max((var_4), (((/* implicit */long long int) (~(var_0)))))) < (((/* implicit */long long int) var_2))));
    var_34 = ((unsigned short) var_7);
}
