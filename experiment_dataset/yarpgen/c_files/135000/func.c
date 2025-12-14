/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135000
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((unsigned int) var_14)) < (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)78), ((signed char)78)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) < (max((arr_5 [i_0] [4U]), (((/* implicit */unsigned int) arr_4 [(signed char)8]))))))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 6; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_1] = max((((unsigned int) (+(var_16)))), (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-87)) % (((/* implicit */int) (signed char)111))))) & (3490084687U))));
                            arr_16 [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) max(((signed char)107), ((signed char)78))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (max((((signed char) 470691942U)), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)43))) && (((/* implicit */_Bool) var_15)))))))));
                            arr_17 [i_0] [i_0] = ((/* implicit */signed char) (~(3824275354U)));
                        }
                    } 
                } 
            } 
            var_19 *= ((unsigned int) ((arr_5 [i_0] [4U]) << (((((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_1)))) + (130)))));
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (var_6)));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(arr_20 [(signed char)6]))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3824275330U)))))) : (((unsigned int) 3665360233U)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3124013563U)))))))));
        }
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))))))))));
        var_24 = ((/* implicit */unsigned int) max((((signed char) arr_3 [i_0] [i_0])), (((signed char) max((var_14), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_25 = ((/* implicit */signed char) min((629607046U), (2661425155U)));
    }
    for (signed char i_6 = 3; i_6 < 8; i_6 += 3) /* same iter space */
    {
        arr_24 [i_6] &= ((/* implicit */signed char) ((unsigned int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6]))) <= (arr_20 [0U])))), (((signed char) (signed char)118)))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-111))));
        var_26 = max((2661425155U), (4002755118U));
        /* LoopSeq 2 */
        for (signed char i_7 = 4; i_7 < 8; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                arr_34 [i_8] [i_7] [i_8] |= ((signed char) 3641474231U);
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14)))))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
            }
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                arr_37 [(signed char)6] [(signed char)6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((arr_22 [i_7] [i_6 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_6] [i_9] [i_9])))))));
                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_18 [i_6] [i_7]) >> (((/* implicit */int) arr_31 [i_6] [i_7 + 2] [i_6])))))));
                var_29 = arr_7 [i_7 + 1] [i_7];
                arr_38 [i_6] [(signed char)6] [i_9] |= var_3;
            }
            var_30 = max(((~(((unsigned int) var_16)))), (((/* implicit */unsigned int) ((signed char) var_7))));
        }
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_31 = ((/* implicit */signed char) max((var_15), (((unsigned int) ((unsigned int) (signed char)-50)))));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_32 [i_6] [i_10] [i_6 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6] [i_10])) || (((/* implicit */_Bool) var_11)))))) : (max((((/* implicit */unsigned int) var_12)), (var_4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_13)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_6))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (1806120645U)))))))));
            var_33 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)125)) << (((((/* implicit */int) arr_23 [i_10])) + (100)))));
        }
    }
    for (signed char i_11 = 3; i_11 < 8; i_11 += 3) /* same iter space */
    {
        arr_43 [i_11] [i_11] = arr_19 [i_11] [i_11];
        arr_44 [2U] |= 4294967289U;
    }
    var_34 = ((/* implicit */unsigned int) min((max(((signed char)54), ((signed char)-78))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_2))))))))));
}
