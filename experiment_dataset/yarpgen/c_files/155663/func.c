/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155663
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
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_12 = -1478418940;
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (332592934))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)(-32767 - 1))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16380)) ? ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))) : (var_11)));
            var_13 = (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])));
            var_14 = ((/* implicit */signed char) var_7);
        }
        var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) var_3);
        arr_10 [16] |= (-(arr_0 [i_2 + 2]));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1] [i_2])) ? (-1943795008) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2 - 2] [i_2]))));
    }
    for (short i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_17 = min((min((((/* implicit */int) var_8)), (arr_2 [i_3] [i_3]))), (((/* implicit */int) ((arr_2 [i_3 - 1] [i_3]) >= (arr_2 [i_3] [i_3])))));
        arr_15 [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3 + 1] [i_3]))) : (arr_1 [i_3 - 2]))) >> (((arr_13 [i_3 + 1]) - (1300417819)))))) ? (((/* implicit */int) arr_4 [i_3 - 1] [(unsigned short)5] [i_3])) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_3 + 1])), (arr_0 [i_3])))) ? (min((((/* implicit */int) var_9)), (arr_13 [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1943795008))))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_12 [i_4]))))) ? (((((/* implicit */_Bool) arr_14 [i_3])) ? (1943795007) : (arr_14 [i_3]))) : (min((((/* implicit */int) arr_5 [13] [i_4 - 1] [i_3])), (arr_20 [i_3 - 1] [i_4 + 1] [i_5])))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_20 [i_3] [i_3] [i_5]) : (var_1))) : ((-(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))));
                arr_21 [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((min((var_11), (((/* implicit */int) arr_12 [i_3 - 1])))), (((/* implicit */int) min((var_6), (arr_12 [i_4 - 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 + 1])) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)11432)))))));
                    var_20 -= ((/* implicit */signed char) -442575184);
                    var_21 = ((/* implicit */unsigned short) (_Bool)0);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [i_3 + 1] [i_3] [i_5] [i_3 + 1] [i_3] [i_7] = min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)(-32767 - 1))))))))), (((((/* implicit */_Bool) max((arr_14 [i_3]), (arr_16 [i_3] [i_3] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3 + 1] [i_5] [i_7]))))) : (((/* implicit */int) arr_25 [i_3] [i_4] [i_3])))));
                    arr_28 [i_3] [i_4 + 1] [(short)4] [i_7] &= ((/* implicit */int) var_6);
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (arr_2 [i_3 - 1] [0]) : (((/* implicit */int) (_Bool)0)))), (min((((/* implicit */int) var_6)), (arr_16 [0] [i_4] [(short)8])))))) ? (1943795007) : (((((/* implicit */_Bool) arr_14 [(signed char)6])) ? (var_11) : (arr_14 [10])))))));
                }
            }
            arr_29 [i_3] = ((/* implicit */int) ((arr_24 [4] [i_3] [i_3] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        }
    }
    for (short i_8 = 2; i_8 < 11; i_8 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), ((short)32767)))) ? ((((+(((/* implicit */int) var_3)))) * (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)26470)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_0)))) == (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)896), (((/* implicit */unsigned short) (short)(-32767 - 1))))))))))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                        var_25 = arr_37 [i_8 - 2];
                        arr_38 [i_8 - 1] [i_8] [i_9] [i_9] [i_8] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((((/* implicit */_Bool) min((var_11), (((/* implicit */int) arr_5 [i_9] [i_10] [i_8]))))) ? (((/* implicit */int) arr_32 [i_8 - 1] [i_8 - 1] [i_8])) : ((-(((/* implicit */int) var_5))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_13 [i_13 + 1]))))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_8 - 2] [i_12] [i_8])) ? (((/* implicit */int) var_7)) : (arr_18 [i_8] [i_12] [i_13 + 1]))) == (((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_36 [i_12] [i_13 + 1])))) ? (-922481689) : (((/* implicit */int) arr_7 [i_8 + 1]))))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_12])) * (((/* implicit */int) var_4)))))));
                        var_29 = ((/* implicit */unsigned char) max((min((min((((/* implicit */int) var_8)), (arr_16 [i_8] [i_12] [i_8]))), (((((/* implicit */_Bool) arr_11 [i_13 - 1])) ? (((/* implicit */int) arr_5 [i_8] [i_12] [i_8])) : (arr_18 [i_14] [i_12] [i_8 - 2]))))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (min((((/* implicit */int) arr_40 [i_8])), (arr_18 [i_8] [i_12] [i_14]))))))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) min((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1943795007))))))))));
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (var_1) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
}
