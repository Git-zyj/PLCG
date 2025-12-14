/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126553
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
    var_19 = ((/* implicit */short) var_15);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((((/* implicit */_Bool) -1582458674)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : ((~(((/* implicit */int) (short)3570)))))), (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (min((((/* implicit */int) arr_3 [i_1] [i_0] [i_0])), (arr_2 [i_0] [i_1]))) : (((((/* implicit */_Bool) 569701626)) ? (569701626) : (((/* implicit */int) (signed char)49)))))))))));
            var_21 = ((/* implicit */int) min((var_21), ((((~(arr_2 [i_0] [i_1 - 1]))) / (((/* implicit */int) arr_3 [(signed char)10] [i_0] [i_1 + 1]))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))), (arr_8 [i_1 + 1] [i_1 - 1] [i_4 + 2] [i_4 - 3])))) | (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-49)) + (1582458664)))) ? (min((var_2), (((/* implicit */int) arr_13 [i_2] [i_4])))) : (min((((/* implicit */int) arr_5 [i_1] [(signed char)16] [5])), (-1257533996)))))));
                            arr_17 [i_1] [i_0] [i_1] [i_2] [i_2] [i_4] = (signed char)-113;
                            arr_18 [i_0] [i_2] [i_2] [i_2] [i_4] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) min(((signed char)3), ((signed char)-120)))) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_0] [14] [i_0] [i_0])) : ((-(((/* implicit */int) arr_11 [i_2] [i_0] [i_1 - 1] [i_2] [i_3] [i_4 + 2]))))));
                            arr_19 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))), (-1582458674)))), (min((0U), ((+(arr_15 [i_1])))))));
                        }
                    } 
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((arr_6 [i_0]) - (min((arr_6 [i_0]), (arr_2 [i_0] [i_0]))))))));
    }
    for (short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_25 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) var_10)) : (var_17))))) < (((/* implicit */int) arr_12 [i_6] [i_5] [i_6] [i_5] [i_5]))));
            var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_6])) && (((/* implicit */_Bool) arr_1 [i_5])))), (((((/* implicit */int) arr_9 [i_6])) < (((/* implicit */int) arr_9 [i_6]))))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_24 += ((short) (short)127);
                    arr_31 [i_5] [i_6] [i_6] [i_8] = arr_26 [i_5] [i_7] [i_8];
                    arr_32 [i_8] [i_6] |= ((/* implicit */int) max((((((((/* implicit */_Bool) (short)118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (4294836224U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)102)) && (((/* implicit */_Bool) (signed char)127)))))))), ((+(arr_0 [i_5] [i_6])))));
                }
                var_25 = ((/* implicit */int) var_12);
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (arr_6 [i_6]) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_13 [i_5] [i_7])))) : (((/* implicit */int) ((signed char) 569701626))));
                var_27 = (i_6 % 2 == 0) ? (((/* implicit */signed char) max((((arr_4 [i_6] [i_6]) << (((arr_4 [i_6] [i_6]) - (669471488U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-118)))))))) : (((/* implicit */signed char) max((((arr_4 [i_6] [i_6]) << (((((arr_4 [i_6] [i_6]) - (669471488U))) - (520032275U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-118))))))));
                arr_33 [i_6] [i_6] [i_6] [i_6] = (~(max((min((272302945U), (((/* implicit */unsigned int) 1582458688)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_5] [16]))))))));
            }
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
            {
                arr_36 [i_5] [i_6] [i_6] [i_9] = min(((signed char)0), ((signed char)3));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_28 = ((/* implicit */signed char) max((min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */unsigned int) -1150901179)) < (4294967293U)))))), (((/* implicit */int) var_16))));
                    arr_39 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) min(((signed char)0), (arr_29 [i_5] [i_6] [i_5] [i_6] [i_10])))) : (((/* implicit */int) ((arr_14 [i_5] [i_6] [i_9] [i_6]) > (((/* implicit */int) (short)-1796))))))))));
                    arr_40 [i_10] [i_6] [i_6] [i_5] = ((((/* implicit */int) min((((signed char) arr_15 [i_6])), (arr_30 [i_6])))) * ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) <= (arr_0 [i_6] [i_9])))))));
                }
            }
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) arr_26 [i_11] [i_6] [10])) : (((/* implicit */int) var_1))))) ? (var_12) : (min((25288718U), (3U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [18U] [i_11]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) | (25288718U)))) ? ((+(-1853696921))) : (((/* implicit */int) (signed char)24))))));
                var_30 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_9 [i_6]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-78)))))))), (min((((/* implicit */int) (signed char)127)), (0)))));
                arr_44 [i_6] [i_6] [i_11] = (+(((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_6] [i_11])) ? (((/* implicit */int) ((signed char) var_9))) : (min((((/* implicit */int) (signed char)-109)), (654358093))))));
                var_31 = arr_29 [i_5] [i_6] [i_5] [i_5] [i_5];
                var_32 = ((/* implicit */int) max((((((/* implicit */unsigned int) min((((/* implicit */int) (short)-842)), (-1589119736)))) + ((~(12U))))), (((/* implicit */unsigned int) (signed char)127))));
            }
        }
        for (short i_12 = 2; i_12 < 20; i_12 += 1) 
        {
            var_33 = ((/* implicit */int) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)34)) ? (arr_37 [i_5] [i_5] [i_12] [i_5] [i_5]) : (arr_4 [i_12] [i_12]))))))))));
            var_34 = ((/* implicit */int) ((min((arr_42 [i_5] [i_5] [i_5] [i_12]), (arr_27 [i_5]))) % (((((/* implicit */_Bool) arr_26 [i_12 + 1] [i_12 + 1] [i_12])) ? (arr_22 [i_12 - 2] [i_12] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_5])))))));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 19; i_13 += 1) 
            {
                for (signed char i_14 = 1; i_14 < 17; i_14 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) arr_24 [i_12] [i_14]);
                        arr_53 [i_5] [i_5] [i_5] [i_12 - 2] [i_13 - 2] [i_12] = (signed char)91;
                        arr_54 [4] [4] [i_13 + 1] [i_12] = ((/* implicit */signed char) (~(1969338456)));
                    }
                } 
            } 
        }
        arr_55 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-1))));
        arr_56 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)91)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
        arr_57 [i_5] |= ((((/* implicit */_Bool) (short)15407)) ? (2147483647) : (((/* implicit */int) (signed char)100)));
    }
    for (short i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) ((short) (short)32767));
        arr_61 [14] = ((/* implicit */int) arr_5 [i_15] [i_15] [i_15]);
    }
    for (short i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
    {
        var_37 = (((+(arr_37 [i_16] [i_16] [i_16] [i_16] [i_16]))) - (((/* implicit */unsigned int) ((arr_50 [i_16]) / (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (signed char)96)))))))));
        var_38 = ((/* implicit */short) arr_42 [i_16] [i_16] [i_16] [i_16]);
    }
}
