/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126897
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
    var_12 = ((/* implicit */_Bool) max((var_12), (var_4)));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((var_5), (var_9)))));
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1456369861)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (9223090561878065152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((arr_6 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((unsigned long long int) var_10)))) : (max((var_9), (((/* implicit */unsigned long long int) var_7)))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_7 [i_2 - 1] [i_1] [i_1] [i_2 + 3]) : (((/* implicit */int) arr_1 [i_2 + 3] [i_2 + 3]))))) ? ((+(arr_0 [i_1]))) : (((/* implicit */unsigned long long int) (-(((arr_6 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)249))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_6 [i_0])))));
                }
            } 
        } 
    }
    for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_3 + 2])))) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 3])) || (((/* implicit */_Bool) arr_11 [i_3 - 1])))))));
        arr_14 [i_3] = ((/* implicit */_Bool) ((signed char) var_10));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    var_18 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3] [i_3 - 1] [i_5])) + (((/* implicit */int) arr_17 [i_3]))))), ((+(var_11)))));
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 11; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_26 [i_3 - 1] [i_3] [i_5] [i_6 - 1] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) var_11))), (((((/* implicit */_Bool) arr_23 [i_3 + 2] [i_3])) ? (((/* implicit */int) arr_23 [i_3 + 2] [i_3])) : (((/* implicit */int) arr_23 [i_3 + 2] [i_3]))))));
                                arr_27 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_18 [i_3] [i_3] [i_6 - 2] [i_6]), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */signed char) arr_15 [i_3 + 3] [i_3] [i_6 + 1])))))) : ((-(((((/* implicit */_Bool) var_6)) ? (arr_18 [i_3] [i_3] [i_5] [i_3]) : (var_11)))))));
                                arr_28 [i_3] [1U] [i_5] [1U] [(_Bool)1] [(_Bool)1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_6 + 2])), (max((var_11), (((/* implicit */unsigned long long int) var_1))))))) ? (var_11) : (var_11)));
                                arr_29 [i_3] [i_3] [i_5] [i_6 - 1] [i_3] [i_7] [i_7] = ((((/* implicit */_Bool) (((_Bool)1) ? (arr_22 [i_3] [i_6] [i_6] [i_6 + 1] [i_6 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((var_4) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6 - 3]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_7]))))), (arr_16 [i_3] [i_3 - 3])))));
                            }
                        } 
                    } 
                    arr_30 [i_3] [i_3] = ((/* implicit */unsigned int) (+((~((~(arr_25 [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                    arr_31 [i_3] [i_3] [i_3] [6] = max((((/* implicit */signed char) (!((_Bool)0)))), (max((arr_11 [i_3 + 3]), (arr_11 [i_3]))));
                    arr_32 [i_3] [i_4] [i_3] [(signed char)11] = ((/* implicit */signed char) min((var_0), (((/* implicit */int) (!(arr_17 [i_3 - 3]))))));
                }
            } 
        } 
        arr_33 [i_3] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_6)) ? (arr_19 [i_3 - 2] [i_3 - 2]) : (524224ULL))), (min((arr_18 [i_3] [i_3] [4ULL] [i_3]), (((/* implicit */unsigned long long int) var_1)))))) >> (((24468893543555691ULL) - (24468893543555630ULL)))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) arr_34 [i_8]))));
        var_20 = ((/* implicit */unsigned short) var_9);
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            var_21 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
            arr_39 [i_8] = ((((/* implicit */_Bool) max((14166404533352833918ULL), (((/* implicit */unsigned long long int) 6007189396665500003LL))))) ? (((/* implicit */unsigned int) 178403035)) : (1290662373U));
        }
        for (short i_10 = 1; i_10 < 20; i_10 += 2) 
        {
            arr_43 [i_8] = ((/* implicit */long long int) max(((~(min((var_10), (((/* implicit */unsigned long long int) var_3)))))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (4085566989475601377ULL)))));
            var_22 = ((/* implicit */unsigned long long int) ((arr_42 [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned long long int) arr_42 [i_8]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)1)))))));
        }
        var_24 -= ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_8])) | (((/* implicit */int) var_4))))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524224ULL)) ? (((/* implicit */int) arr_38 [i_8])) : (((/* implicit */int) arr_37 [i_8] [i_8] [16ULL]))))));
    }
}
