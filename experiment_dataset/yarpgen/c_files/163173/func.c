/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163173
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29775)) || (((/* implicit */_Bool) (unsigned short)5))))), (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29761))))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)29788)))))))));
        var_20 = ((/* implicit */_Bool) var_15);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(11020223568852149243ULL)))) ? (((long long int) ((((/* implicit */_Bool) (short)-29759)) ? (arr_1 [i_0]) : (((/* implicit */long long int) 268435456U))))) : (((/* implicit */long long int) ((3360886770U) - ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_3))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_22 = ((/* implicit */signed char) ((_Bool) ((((var_16) >= (arr_3 [i_0] [i_1 + 1] [i_0]))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_17))))))));
            arr_5 [(short)7] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)94)) / (((/* implicit */int) (short)-29759)))))), ((~(min((arr_1 [i_0]), (((/* implicit */long long int) var_14))))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [(short)6] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_2]);
                arr_11 [i_0] [0LL] [0LL] [(_Bool)1] = arr_2 [i_0] [i_1] [i_2];
                arr_12 [i_0] = ((/* implicit */_Bool) ((((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1]))))) ? (min((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65524), (((/* implicit */unsigned short) (signed char)28))))))));
            }
        }
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(268435450U)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned short) (short)-29759))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_24 ^= ((/* implicit */int) ((_Bool) ((unsigned int) var_8)));
                                var_25 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))) % (min((((/* implicit */unsigned long long int) (short)8160)), (var_11))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_4 - 2] [i_6 + 1])) ? (((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) var_16))))))));
                            }
                        } 
                    } 
                    arr_28 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) (short)6863))))), (min((max((var_1), (((/* implicit */long long int) arr_25 [i_5] [(signed char)6] [i_5] [i_5] [5ULL])))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)28)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_26 *= ((/* implicit */short) var_10);
                        arr_32 [5U] [i_5] [i_5] = ((/* implicit */unsigned int) (~(var_10)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_3] [i_3] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */unsigned char) arr_22 [i_3] [(_Bool)1] [i_3] [i_3]);
                        var_27 = ((unsigned int) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_5] [i_9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [(unsigned short)6] [i_4] [i_4 - 3]), (((/* implicit */short) var_14)))))) : (((4026531846U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-30948)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 3; i_10 < 15; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46573))));
                            var_29 = ((/* implicit */unsigned long long int) ((_Bool) (-((-(((/* implicit */int) (short)-29775)))))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_5))));
                        }
                        var_31 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & ((~(max((((/* implicit */unsigned long long int) var_12)), (arr_24 [i_3] [i_4] [i_5 + 2] [i_3] [i_4]))))));
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            {
                                arr_45 [i_5] = ((/* implicit */signed char) ((long long int) (((~(11420486830350277791ULL))) | (((/* implicit */unsigned long long int) (~(769205131554613620LL)))))));
                                var_32 = ((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned short) ((_Bool) (_Bool)0)))));
                                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-18))))) - (((arr_41 [i_3] [i_11 + 1] [i_5 - 1] [i_4 - 1]) / (arr_41 [i_3] [i_11 + 1] [i_5 + 2] [i_4 - 3])))));
                            }
                        } 
                    } 
                    var_34 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_3] [i_5]))) + (arr_29 [i_3] [i_3] [i_3]))) % (min((513508186U), (((/* implicit */unsigned int) (short)29788))))))), (((unsigned long long int) (~(((/* implicit */int) arr_16 [i_4] [i_5 + 2])))))));
                }
            } 
        } 
    } 
}
