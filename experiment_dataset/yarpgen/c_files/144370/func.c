/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144370
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
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)31732))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) min(((~(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-127))))))), ((+((~(((/* implicit */int) var_5))))))));
            arr_6 [i_1] = min((((/* implicit */unsigned short) (signed char)117)), (max((min(((unsigned short)52246), ((unsigned short)65535))), (((/* implicit */unsigned short) (signed char)9)))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) (unsigned short)0);
            arr_11 [i_0] [i_2] = ((signed char) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 2])));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_17 = max((((unsigned short) arr_3 [i_2] [i_2] [i_3])), (((/* implicit */unsigned short) max((var_6), (arr_4 [i_0 - 1] [i_0 + 1])))));
                var_18 ^= var_3;
                arr_14 [i_2] = min(((signed char)(-127 - 1)), ((signed char)-87));
            }
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) var_12);
                            arr_23 [i_6] [i_6] [i_2] [i_4] [i_2] [i_2] [(signed char)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18657))))), ((-(((/* implicit */int) (signed char)-107))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)127), (arr_17 [i_0] [i_2] [i_4] [i_2]))))))) : (((/* implicit */int) max((max((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_0 [i_0])))), (max((arr_9 [i_4]), (var_0))))))));
                        }
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)9)) & (((/* implicit */int) arr_22 [i_4] [i_2] [i_4] [i_2]))));
                    }
                } 
            } 
        }
        var_21 = max((arr_2 [i_0]), (((signed char) (~(((/* implicit */int) (unsigned short)52246))))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 21; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                arr_30 [i_7] [i_7] [i_7 - 1] [i_7] = arr_21 [i_7] [(unsigned short)14] [i_7] [i_7] [i_7 - 1];
                arr_31 [i_7] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)90)))) & (((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)65535)) - (65520)))))));
                var_22 = ((/* implicit */signed char) ((unsigned short) arr_7 [i_0 + 2] [i_7] [i_0 + 1]));
            }
            var_23 = ((/* implicit */unsigned short) max((var_23), ((unsigned short)0)));
            arr_32 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_0)))), ((-(((/* implicit */int) (unsigned short)8))))))) ? (((/* implicit */int) min((arr_3 [i_7] [i_0] [i_7 + 1]), (((/* implicit */unsigned short) arr_26 [i_0 + 1]))))) : ((~(((/* implicit */int) arr_21 [(unsigned short)15] [i_0 + 1] [i_0] [(unsigned short)15] [i_7 - 2]))))));
        }
        for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            var_24 ^= ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) (unsigned short)46322))), (((unsigned short) (signed char)-25)))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                var_25 = var_1;
                /* LoopNest 2 */
                for (signed char i_11 = 4; i_11 < 21; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            arr_45 [i_0] [i_0] [i_9] [i_10] [i_11] [i_12] [i_12] &= ((/* implicit */unsigned short) (~(((/* implicit */int) max(((signed char)-7), (var_1))))));
                            arr_46 [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_9] [i_9])) | (((/* implicit */int) (unsigned short)2))));
                        }
                    } 
                } 
                var_26 = ((unsigned short) ((((/* implicit */_Bool) max((arr_28 [i_0] [i_0 + 3] [i_0 + 3] [i_0]), (arr_17 [(signed char)0] [(signed char)0] [i_10] [i_0])))) ? (((/* implicit */int) arr_18 [i_10] [i_10] [i_0] [i_0])) : (((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) var_5)))))));
                var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2653)) + (((/* implicit */int) (unsigned short)47090))));
            }
            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_0] [i_9] [i_0] [i_0])), (var_10))))))) && (((/* implicit */_Bool) ((unsigned short) ((signed char) (unsigned short)10767))))));
        }
    }
    for (signed char i_13 = 1; i_13 < 19; i_13 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) arr_24 [(unsigned short)2] [i_13]);
        var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min(((signed char)0), (var_6)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_28 [i_13] [i_13] [i_13 + 1] [i_13 - 1])) ? (((/* implicit */int) (unsigned short)7971)) : (((/* implicit */int) (signed char)17)))))), (((((/* implicit */int) ((unsigned short) (signed char)104))) % (((/* implicit */int) var_9))))));
    }
    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), ((unsigned short)6033)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((var_14), (var_14)))))))));
}
