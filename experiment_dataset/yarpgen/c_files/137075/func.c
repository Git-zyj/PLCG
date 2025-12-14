/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137075
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) -7595166093968940263LL);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [(unsigned char)4]))) ? ((-(arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)255)), (-1)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_12 [(unsigned short)8] [i_2] [i_3] = ((/* implicit */_Bool) ((signed char) ((16907514186783206137ULL) >> (((1539229886926345490ULL) - (1539229886926345455ULL))))));
                    arr_13 [10] [i_2] = (+(((/* implicit */int) (short)4)));
                    arr_14 [i_1] [(short)7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51122))) : (((max((((/* implicit */unsigned long long int) 7595166093968940263LL)), (11938678387529923324ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_4 [3ULL])) != (22U)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 4; i_4 < 9; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_0 [i_1])), (var_6)))), ((-(arr_2 [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned char)237)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_26 [i_1] [i_4 + 2] [i_7] [(signed char)9] [i_5] [i_6] [5] = ((/* implicit */short) (+(min((((/* implicit */int) (_Bool)1)), (-1)))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_2))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((18446744073709551600ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_4 + 2] [i_4 + 1])) < (((/* implicit */int) arr_22 [i_4 - 4] [i_4 + 3]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 ^= ((/* implicit */short) min(((+(arr_23 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_22 [i_1] [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_1] [(signed char)7]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [(_Bool)1]))))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        arr_29 [(_Bool)1] [i_8] = ((/* implicit */unsigned short) arr_19 [5ULL] [i_8] [i_8]);
        var_22 = ((/* implicit */unsigned char) arr_15 [(unsigned char)7]);
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)247)) ? (var_0) : ((-(-1024653102))))))));
        var_24 = ((/* implicit */unsigned long long int) ((long long int) max((arr_2 [i_8] [i_8]), (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))));
    }
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_12)))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_9))))) + (max((var_10), (((/* implicit */int) var_14))))))))))));
    var_26 = ((/* implicit */long long int) (!(((((18ULL) >> (((var_0) + (617439468))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (7292417333877536110LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_27 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)16)), (var_0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_0)) : (4294967285U))))), ((+(((unsigned int) (unsigned short)6001))))));
}
