/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104118
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
    var_10 *= ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_3))) + (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)13042))))) > (((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)4))))))) : (var_2));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_2 - 2] = ((/* implicit */signed char) min((var_0), (((160175642) % (160175642)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) arr_5 [i_1]))));
                                var_12 = (signed char)-122;
                                arr_12 [i_4] [7] [i_2] [i_3] [i_4] [i_4] [i_0] = ((/* implicit */signed char) -160175624);
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_4] [(signed char)10] = ((/* implicit */signed char) min((((((/* implicit */int) (!(((/* implicit */_Bool) 2042627265))))) + (((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) || (((/* implicit */_Bool) (unsigned short)42066))))))), (((/* implicit */int) ((unsigned short) (unsigned short)25689)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)42898)), (-160175647)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(((/* implicit */int) max(((signed char)-88), ((signed char)79)))))))));
                                var_15 = ((/* implicit */unsigned short) (signed char)127);
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    arr_20 [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((((((((/* implicit */int) var_5)) & (1579545163))) ^ (((/* implicit */int) var_7)))) | (((/* implicit */int) ((unsigned short) var_8)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 4; i_8 < 13; i_8 += 2) 
                    {
                        var_16 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) 160175647))) : (((int) (unsigned short)23470)));
                        var_17 = (unsigned short)45330;
                    }
                    var_18 -= ((/* implicit */signed char) min((((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */int) var_1)) > (33554416)))), (var_4)))), (var_7)));
                }
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        arr_28 [i_9] [0] [(signed char)2] [i_10] = (i_9 % 2 == 0) ? (((/* implicit */signed char) min((((((((/* implicit */int) arr_21 [i_0] [i_9] [i_9] [5] [i_9 + 1])) + (2147483647))) >> (((((/* implicit */int) var_4)) - (58))))), (((/* implicit */int) (unsigned short)45321))))) : (((/* implicit */signed char) min((((((((((/* implicit */int) arr_21 [i_0] [i_9] [i_9] [5] [i_9 + 1])) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) var_4)) - (58))))), (((/* implicit */int) (unsigned short)45321)))));
                        var_19 = ((1010897357) / (((/* implicit */int) (signed char)81)));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (signed char)-11);
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
                        {
                            var_21 += ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_2))) < (((var_2) % (-33554416)))));
                            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) (unsigned short)35905)) * (((/* implicit */int) (signed char)0))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)64979)) < (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)-42)))))));
                        }
                        arr_33 [i_9] [i_1] [i_1] = ((/* implicit */signed char) arr_8 [i_0] [11] [i_9] [i_9]);
                    }
                    for (int i_13 = 3; i_13 < 12; i_13 += 1) 
                    {
                        arr_37 [i_9] [i_9] [i_9] = max((min((min((((/* implicit */int) (signed char)-93)), (var_0))), (((((/* implicit */int) (unsigned short)26254)) * (((/* implicit */int) var_4)))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-2)) || (((/* implicit */_Bool) (unsigned short)65535))))))));
                        var_24 += ((/* implicit */signed char) (unsigned short)35890);
                    }
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) -160175670)) && (((/* implicit */_Bool) (-2147483647 - 1)))))), (((unsigned short) arr_8 [i_9 - 1] [i_9 + 1] [i_9 - 1] [(unsigned short)4])))))));
                        arr_40 [i_9] [i_1] [i_9 - 1] [i_9 - 1] = ((((/* implicit */int) (signed char)-88)) / (((/* implicit */int) ((signed char) ((-435108315) % (((/* implicit */int) (unsigned short)65535)))))));
                    }
                    arr_41 [i_0] [(signed char)10] [i_9] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) 1860083136)) ? (((/* implicit */int) (signed char)117)) : (arr_7 [i_0] [i_0] [(signed char)1]))) : (arr_3 [i_0] [i_1] [i_9])))));
                }
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)29645)) < (((/* implicit */int) (unsigned short)35901)))))));
                arr_42 [4] [i_0] [(signed char)2] = ((/* implicit */signed char) ((((int) (signed char)60)) << ((((~(((/* implicit */int) (unsigned short)10120)))) + (10131)))));
            }
        } 
    } 
}
