/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110208
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((_Bool) arr_7 [i_0 - 2] [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0])))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17129834939814298869ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (13857995164788750548ULL)));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_2]) : (arr_3 [i_2])))));
        var_20 = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (var_2)))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 16; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) var_12)))) : (((int) 17196532061250100999ULL))));
                        var_22 = ((/* implicit */int) var_13);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_19 [i_4]))))) : (((/* implicit */int) arr_0 [i_4 + 1]))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((int) 402653184U));
    }
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_22 [1U])))), (((/* implicit */int) (unsigned short)62363))));
                                var_26 = ((/* implicit */signed char) arr_15 [i_8]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_38 [i_7] [i_8] [i_8] [i_7] = ((((/* implicit */int) ((var_6) > (((((/* implicit */_Bool) arr_18 [i_7] [i_9] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11699))))))) - (((/* implicit */int) ((short) ((var_16) ? (((/* implicit */unsigned int) var_14)) : (arr_36 [i_7] [i_7] [(short)2] [i_9] [i_12]))))));
                        arr_39 [i_8] [i_8] [i_9] [i_12] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_8] [i_9] [i_9] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)2] [2U]))) : (var_10))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 402653185U))))))) ? ((((+(var_6))) & (((/* implicit */int) ((unsigned char) (signed char)102))))) : ((+((~(((/* implicit */int) arr_14 [8] [i_12])))))));
                        var_27 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-40));
                        arr_40 [i_12] [i_8] [(signed char)6] [i_8] [i_7] = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)5638))))) > (((((/* implicit */_Bool) arr_12 [i_7] [i_8])) ? (3551352536U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_8] [i_9] [10] [i_7] [i_7] [i_8])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((((long long int) arr_1 [i_13 + 1] [i_13 + 1])), (((/* implicit */long long int) (short)32531))));
                            arr_43 [i_7] [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) ((((arr_23 [i_13 + 1]) > (((/* implicit */unsigned long long int) max((2147483618), (((/* implicit */int) var_9))))))) && (((arr_34 [i_13] [i_13 + 1] [i_8] [i_13 + 1] [i_13]) != (arr_34 [i_13 + 1] [i_13 + 1] [i_8] [i_13 + 1] [(unsigned char)13])))));
                            var_29 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((2117066930U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8])))))) & (((unsigned long long int) var_4)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) arr_30 [i_8] [3U] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (((long long int) arr_17 [i_9] [i_8])))) - (19619LL)))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (short)-32752)))) & (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) var_1)))))))) ? (((/* implicit */int) (unsigned short)65535)) : ((-(((/* implicit */int) (unsigned short)65535))))));
                        }
                    }
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        arr_47 [(short)8] [i_8] [(short)8] [i_8] [i_8] = (-(((402653185U) - (402653185U))));
                        arr_48 [1U] [i_8] [i_8] [i_8] [i_14] = ((/* implicit */unsigned int) var_18);
                    }
                    arr_49 [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7)) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (2929032656U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))))) : (3288452937U)));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned int) ((arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? ((((!(((/* implicit */_Bool) 2097151U)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (_Bool)0))))) : ((-(((/* implicit */int) (unsigned short)65533)))))) : ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) : (var_1)))))));
    }
    for (unsigned int i_15 = 3; i_15 < 23; i_15 += 4) 
    {
        arr_53 [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_6 [20ULL] [i_15 - 3] [i_15])))));
        var_32 = arr_52 [i_15 - 2] [i_15 - 2];
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_1 [i_15 + 1] [i_15 + 1]))))) > (((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_15])))))) : (((((/* implicit */_Bool) -1453268284)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_15 - 1])))))));
    }
}
