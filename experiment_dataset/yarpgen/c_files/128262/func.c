/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128262
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
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) var_8);
        var_17 = ((/* implicit */unsigned long long int) ((max((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)60713)))), (max((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_0]))))) == (((/* implicit */unsigned long long int) max((var_0), (2277033660U))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((arr_2 [i_1] [i_4]), (((/* implicit */long long int) var_4)))) << (((max((var_15), (((/* implicit */unsigned long long int) var_4)))) - (13178980135083826217ULL)))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((int) arr_9 [i_1] [i_1] [13LL] [i_4] [i_3 - 4]))), (((((/* implicit */long long int) 0)) % (arr_8 [i_1]))))))));
                        var_18 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_7 [i_3 - 3] [i_3] [i_2 + 1])))));
                        var_19 = ((/* implicit */unsigned char) arr_2 [i_1] [i_2 - 1]);
                    }
                } 
            } 
            var_20 += ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)140)) ? (((arr_5 [i_1] [i_1]) + (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [4LL] [i_1] [i_1]))))))), (((/* implicit */int) ((_Bool) max(((unsigned short)57606), (((/* implicit */unsigned short) var_8))))))));
            arr_12 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -1675603579)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (0LL))), (((/* implicit */long long int) arr_5 [i_1] [i_2]))));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (((unsigned long long int) (unsigned char)140))))), (max((max((var_6), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) max((var_12), (((/* implicit */short) (_Bool)0)))))))));
            /* LoopSeq 2 */
            for (signed char i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 4; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_25 [i_1] [i_1] [i_6] [i_1] [i_8] = ((/* implicit */signed char) max((((/* implicit */int) ((max((((/* implicit */int) var_14)), (2147483647))) == (((/* implicit */int) arr_23 [i_6 - 2] [i_1]))))), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_8] [i_7] [i_1])))), (((((/* implicit */_Bool) 5882103158403666143LL)) ? (var_1) : (((/* implicit */int) (signed char)-127))))))));
                            arr_26 [i_8] [i_1] [9U] [9U] [9U] [i_1] [9U] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (short)-30712))))), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)104)) << (((((/* implicit */int) max(((unsigned char)172), (((/* implicit */unsigned char) (signed char)-127))))) - (163))))))));
                        }
                    } 
                } 
                arr_27 [i_1] [i_1] [4U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_6] [i_6 + 1] [i_6])) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_6 + 1] [i_6 - 2])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_15 [i_5] [i_6 + 1] [i_6]))) : (max((arr_15 [i_6 - 2] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned long long int) 1422744413071373329LL))))));
                var_22 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_8)), (arr_22 [i_6] [i_6 - 3] [i_6 - 2] [i_6] [i_6 - 2]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_10))), ((-(((/* implicit */int) (short)-30731)))))))));
            }
            /* vectorizable */
            for (signed char i_9 = 3; i_9 < 16; i_9 += 2) /* same iter space */
            {
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) == (arr_10 [i_9 - 2] [12U] [i_5] [i_9] [i_9 + 2])));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    var_24 = ((/* implicit */long long int) (-(arr_19 [i_9] [i_9 - 3] [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9])));
                    var_25 = ((/* implicit */long long int) ((arr_22 [i_9 - 1] [i_9] [i_9] [i_9] [i_9]) >> (((arr_22 [i_9] [(signed char)12] [i_5] [i_9] [i_5]) - (12588695597496452742ULL)))));
                    var_26 *= ((/* implicit */short) ((signed char) (signed char)(-127 - 1)));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_9 - 3] [i_1] [i_9 - 3])) ? (((/* implicit */int) arr_7 [i_9 + 3] [i_1] [i_9 - 3])) : (((/* implicit */int) arr_7 [i_9 - 3] [i_1] [i_9 + 1]))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31050)) ? (((/* implicit */int) arr_32 [i_9] [i_9] [i_9 - 2] [i_9 + 3])) : (((/* implicit */int) arr_32 [16ULL] [i_9] [i_9 + 3] [i_9 - 2]))));
                }
            }
        }
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((min((-1536843584946893801LL), (((/* implicit */long long int) (unsigned char)6)))), (((/* implicit */long long int) min((((/* implicit */int) arr_3 [18] [18])), (((((/* implicit */_Bool) 1310033159)) ? (((/* implicit */int) arr_3 [i_1] [2])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))))))))))));
        arr_33 [i_1] = ((/* implicit */short) max((((_Bool) ((int) (short)2707))), (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_17 [i_1] [i_1] [(_Bool)1]), (((/* implicit */signed char) var_14)))))) >= (var_10)))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 18; i_11 += 1) 
        {
            for (signed char i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-8057)) ? (((/* implicit */unsigned long long int) (~(2139025197)))) : (arr_29 [i_12]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)240)) + (((/* implicit */int) (signed char)84))));
                                arr_46 [i_1] [i_12] [i_13] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (arr_18 [3] [3] [i_14]))))) / (((long long int) 2067722046U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 *= ((/* implicit */_Bool) max(((~(arr_4 [i_1] [i_1] [(short)10]))), (((((/* implicit */_Bool) arr_4 [8U] [i_1] [8U])) ? (arr_4 [4] [i_1] [(_Bool)1]) : (arr_4 [i_1] [i_1] [(unsigned short)14])))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) ((int) var_8));
        var_34 = ((/* implicit */long long int) arr_40 [i_15] [i_15] [i_15] [(_Bool)1]);
    }
    var_35 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_10)), (min((-1279372208900632267LL), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) min((((unsigned int) var_7)), (((/* implicit */unsigned int) ((signed char) (signed char)124))))))));
}
