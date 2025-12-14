/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165937
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)31670), (((/* implicit */short) var_8))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [(short)5] = var_9;
                    arr_10 [i_0] [i_1 - 2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 3] [(signed char)15])) ? (var_10) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2] [i_2]))))) ? (((int) var_14)) : ((-(((/* implicit */int) (short)-27589))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((_Bool) (signed char)11)) || (((/* implicit */_Bool) (unsigned short)20))));
                    arr_12 [i_0] [i_1 + 2] [i_1] [i_2 - 3] = ((unsigned short) ((unsigned short) (signed char)64));
                    var_17 = ((/* implicit */_Bool) (signed char)59);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)0)))) : (((int) min(((signed char)0), ((signed char)-1))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned short) var_1)))));
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */int) ((signed char) ((_Bool) 678974239)));
                var_21 = ((/* implicit */int) ((signed char) ((((/* implicit */int) ((short) var_0))) % ((~(((/* implicit */int) (signed char)-12)))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 4; i_5 < 14; i_5 += 3) 
                {
                    for (short i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((short) (+(((/* implicit */int) var_9))))), (min((((/* implicit */short) arr_17 [i_3 - 1])), (var_13))))))));
                            arr_25 [i_3] [i_3] [i_5 - 2] [i_6] = ((/* implicit */unsigned short) ((signed char) max((arr_20 [i_3 - 1]), (((/* implicit */unsigned short) arr_2 [i_3 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((signed char) (unsigned short)10133));
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        arr_31 [i_3] [(signed char)13] [(unsigned short)1] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-22))));
                        var_24 = ((/* implicit */unsigned short) arr_17 [i_3 + 2]);
                        arr_32 [i_3] [i_3] [i_3 + 2] [i_3] = ((/* implicit */signed char) ((unsigned short) ((var_10) | (var_0))));
                        arr_33 [i_3] [i_8] [i_7] [i_8] [i_3 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)66)) | (((/* implicit */int) (signed char)-3))));
                    }
                    for (short i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        arr_36 [i_3] = ((/* implicit */short) (+(var_6)));
                        var_25 = ((/* implicit */short) (signed char)-59);
                        arr_37 [i_3] [i_3] [i_7] [i_3] = ((/* implicit */short) arr_6 [i_3 - 1] [(_Bool)1] [i_3 - 1] [i_3 - 1]);
                    }
                    for (short i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_3] [i_10]))));
                        arr_42 [i_3] [i_4] [i_7] [i_3] = ((/* implicit */_Bool) (unsigned short)65018);
                        var_27 = ((/* implicit */signed char) ((int) (unsigned short)5547));
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_3 + 2])) <= (var_15)));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_3] [i_3 + 2] [(unsigned short)1] [i_3] [13])) / (((/* implicit */int) arr_29 [i_3] [i_4] [(unsigned short)14] [i_10] [i_11]))));
                            arr_46 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (signed char)-73)))));
                        }
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))));
                            var_31 = ((/* implicit */unsigned short) ((signed char) (!((_Bool)1))));
                            var_32 = ((/* implicit */int) arr_30 [i_12 - 1] [i_12] [i_12] [i_12 - 2] [i_12] [i_12 - 1]);
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)0))))))));
                        }
                    }
                }
            }
        } 
    } 
}
