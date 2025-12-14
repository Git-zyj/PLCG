/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113101
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (((var_6) + (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 3301385993U))))) : (((/* implicit */int) var_8))));
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [3] = min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) | (((((/* implicit */_Bool) 6102031158243148693ULL)) ? (((/* implicit */unsigned long long int) 2974095045U)) : (18446744073709551597ULL))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_13 [13U] [i_1] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (6102031158243148693ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7980)))))) ? (((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_0] [4U])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : ((~(((long long int) var_2))))));
                        arr_14 [(unsigned short)11] [i_0] [i_1] [i_2] [i_1] [i_3 - 1] = min((((((/* implicit */_Bool) arr_8 [(unsigned short)3] [i_0 + 4] [5U])) ? (arr_8 [0ULL] [i_0 - 1] [i_0]) : (arr_8 [i_0 + 1] [i_0 + 1] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_10 [i_0 + 2] [i_0 + 4] [2U])))));
                        var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_1] [i_0]))))) ? (max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0 + 1]))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0 + 4] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_14 *= ((/* implicit */unsigned long long int) var_4);
            var_15 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [3U]);
            arr_18 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) arr_15 [i_0 - 1] [i_4] [i_4 + 1])) & (((long long int) (_Bool)1)))), (((((arr_8 [i_0] [4U] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26298))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 2] [i_0 - 1])))))));
            /* LoopSeq 2 */
            for (int i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                var_16 = ((/* implicit */int) (-(18ULL)));
                var_17 |= ((/* implicit */signed char) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((min((((/* implicit */long long int) var_9)), (arr_1 [i_0]))) <= (((long long int) arr_10 [i_0 + 3] [i_4 + 1] [i_5])))))));
                var_18 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_19 [i_0] [i_0 + 1] [8])))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_19 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_21 [i_0 + 3] [6] [i_4])) ? (6102031158243148696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [i_4 - 1] [i_6] [i_6]))))), (((/* implicit */unsigned long long int) (~(arr_4 [i_4 + 1]))))));
                var_20 = ((/* implicit */unsigned int) (-((+(18446744073709551597ULL)))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_4 + 1] [i_6]) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)23729)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15014))) * (var_4)))) ? (9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 1])))))));
            }
        }
        for (short i_7 = 2; i_7 < 11; i_7 += 1) 
        {
            var_22 = ((/* implicit */short) ((((((/* implicit */int) ((short) var_1))) << ((((+(((/* implicit */int) arr_10 [i_0] [i_0] [(short)3])))) - (42064))))) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-74))))));
            var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((long long int) arr_15 [i_7 + 1] [i_0 - 1] [i_0 + 3]))), (((((/* implicit */_Bool) var_5)) ? (arr_20 [(signed char)10] [i_0] [i_0] [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88)))))));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_34 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5512301U)) && (((/* implicit */_Bool) (unsigned short)45507))))), ((~(arr_9 [i_7 + 2] [i_0 + 3])))));
                            var_24 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_26 [i_0 + 2])) & (((/* implicit */int) (_Bool)1)))));
                            arr_35 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10] [i_9] [i_7 + 1] [i_7 + 1] [i_7] [i_0]))) + (arr_27 [i_10] [(unsigned short)6] [i_8] [i_0]))))), (18ULL)));
                            arr_36 [i_0] [i_7 - 2] [i_8] [i_8] [i_10] [i_10] = ((/* implicit */unsigned short) var_3);
                            arr_37 [i_10] = ((/* implicit */signed char) ((min((6102031158243148690ULL), (((/* implicit */unsigned long long int) 0U)))) / (max((((/* implicit */unsigned long long int) (signed char)63)), (arr_32 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_8] [i_8])))));
                        }
                    } 
                } 
            } 
        }
        var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3234744477312519554LL)) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0]))))) ? (max((((/* implicit */unsigned long long int) arr_19 [i_0 + 3] [i_0 + 3] [i_0 + 2])), (12344712915466402925ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 11126687123318827181ULL))))));
    }
    for (unsigned short i_11 = 2; i_11 < 19; i_11 += 1) 
    {
        var_26 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-9223372036854775789LL)))) ? (9007199254740960LL) : (((((/* implicit */_Bool) arr_38 [i_11])) ? (9007199254740957LL) : (arr_39 [i_11 + 2])))))));
        arr_41 [i_11] [2U] = ((/* implicit */short) var_2);
        var_27 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_40 [i_11 - 1])) << (((((/* implicit */int) arr_38 [i_11 - 2])) - (20847))))));
    }
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_1))));
}
