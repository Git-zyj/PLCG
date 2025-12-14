/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139194
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) min((var_1), (var_9))))))) : (max((((/* implicit */unsigned long long int) (!((_Bool)1)))), ((-(arr_6 [i_0] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (short)7479)))));
                        arr_12 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [(short)16] [i_3 - 1] [(short)16])) & (((/* implicit */int) arr_10 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_2] [i_2])))))));
                        arr_13 [5ULL] [i_2] [(short)5] [(short)5] = arr_0 [i_1];
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) var_2);
            arr_16 [i_0] [i_4] [i_0] = ((/* implicit */int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_12)) : ((-2147483647 - 1))))) / (min((-9223372036854775784LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))), (((((/* implicit */_Bool) min((arr_4 [12LL]), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) arr_14 [i_4] [i_0])) : ((~(var_10)))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    {
                        arr_23 [i_6] [i_6] [i_6] [i_5] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_21 [i_0] [i_0] [5] [19ULL] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2144))))), (((/* implicit */unsigned long long int) arr_15 [i_6 + 1] [i_6 - 1] [i_6 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23042)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42468))) : (9223372036854775778LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-316))) : (arr_6 [i_5] [(_Bool)1] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) <= (var_3)))) + (((/* implicit */int) arr_7 [11LL] [(short)13] [i_6] [i_6 + 2]))))), (min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_7))))), (max((((/* implicit */unsigned long long int) var_6)), (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [8LL])))))));
                    }
                } 
            } 
            arr_24 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min(((-2147483647 - 1)), (var_6)))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))), ((-(((/* implicit */int) arr_19 [i_0]))))));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned long long int) ((short) var_10))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        }
        for (int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) max((min((arr_6 [i_7] [i_0] [(unsigned char)9]), (((/* implicit */unsigned long long int) ((arr_27 [(short)4]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16517)))))))), (((/* implicit */unsigned long long int) (short)0))));
            var_18 = ((/* implicit */unsigned short) max(((+(max((((/* implicit */unsigned long long int) var_9)), (arr_18 [i_0]))))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_8)))))));
            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) % (((/* implicit */int) (short)29703)))) <= ((~((~(((/* implicit */int) var_11))))))));
        }
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)11109))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)-9842)) ? (5030410997691001606LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (var_12)))) ? (arr_17 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0])), ((unsigned short)42468)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1))))) ^ (((unsigned long long int) -8008424024317353541LL)))));
        arr_28 [(unsigned short)8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-88)), ((unsigned short)59976)))) ? ((~(var_4))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_0] [(_Bool)1] [(short)10] [(_Bool)1] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 3594164530U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))) + (2147483647))) << (((max((var_3), (arr_18 [i_0]))) - (15106983491652510101ULL)))))) : ((~(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_21 [i_0] [i_0] [i_0] [i_0] [(signed char)10] [i_0])))))));
    }
    /* LoopNest 2 */
    for (short i_8 = 2; i_8 < 16; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            {
                arr_34 [i_8 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-588333998233212063LL), (min((((/* implicit */long long int) (signed char)0)), (8191LL))))))));
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28138)) ? (arr_27 [(short)2]) : (((/* implicit */long long int) 4294967289U))))), (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_6 [i_8] [(unsigned short)11] [i_8]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                                arr_44 [i_8] [i_8] [i_8] [i_8] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]), (min((((/* implicit */short) var_9)), (var_2)))))) ? (arr_9 [i_8 - 2] [i_9] [i_9] [i_10] [i_11] [i_12]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_42 [i_8] [i_9] [(short)11] [(short)11] [i_9]), (((/* implicit */short) var_0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_8 - 1])))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_9] [i_8])) + (((/* implicit */int) var_2))))) + (arr_43 [i_8] [i_9] [i_8] [i_8] [i_9] [i_8])));
                /* LoopSeq 1 */
                for (signed char i_13 = 2; i_13 < 17; i_13 += 3) 
                {
                    var_23 = min(((~(arr_46 [(short)6] [i_13 - 2] [16LL] [i_13 - 2]))), (((arr_46 [i_13] [5] [5] [i_13 - 2]) >> (((arr_46 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13 - 2]) - (17826996601472866976ULL))))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_40 [i_8] [i_8 - 2] [i_8 - 2] [i_13 - 2] [i_8 - 2] [i_8])), (arr_32 [i_8 + 2] [i_13 - 1] [i_13 + 1]))))));
                }
                arr_47 [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))))) * (((((/* implicit */_Bool) arr_6 [13LL] [i_8 + 2] [i_9])) ? (arr_6 [i_8 + 1] [16ULL] [i_8 + 1]) : (arr_6 [i_8 - 2] [i_9] [i_9])))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_2);
}
