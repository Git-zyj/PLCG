/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161200
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_14)) + (82)))))));
            var_16 = ((/* implicit */long long int) ((signed char) (unsigned short)16261));
        }
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) ((11435915844125441995ULL) / (((/* implicit */unsigned long long int) var_15))));
            var_18 = ((/* implicit */unsigned short) ((signed char) var_0));
            arr_9 [4] |= ((/* implicit */signed char) var_11);
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */long long int) arr_8 [i_0]);
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_23 [i_6] [i_5] [i_0] [i_3] [7ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) + (arr_12 [i_0])));
                            var_19 ^= ((/* implicit */unsigned short) var_4);
                            var_20 = ((((/* implicit */int) arr_2 [i_4])) | (var_13));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */long long int) ((var_1) <= (((/* implicit */unsigned long long int) var_5))));
                            arr_27 [i_0] [i_7] [i_7] [12] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7010828229584109627ULL)) ? (arr_25 [i_7] [i_0] [6] [2] [i_0] [i_0]) : (arr_25 [i_3] [i_0] [i_4] [i_3] [i_0] [i_0])));
                            arr_28 [(signed char)4] [i_0] [i_4] = ((/* implicit */unsigned short) var_3);
                        }
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_22 = 11435915844125441995ULL;
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [10LL] [i_5])) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)8128)) : (((/* implicit */int) var_3))))));
                        }
                    }
                } 
            } 
            var_24 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [14] [i_0] [i_3])))));
            arr_33 [4] &= ((/* implicit */signed char) var_4);
        }
        arr_34 [16LL] [6] |= ((((((/* implicit */_Bool) 11435915844125441966ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [10] [4LL]))) : (var_10))) % (((/* implicit */long long int) ((/* implicit */int) var_6))));
    }
    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] = ((/* implicit */unsigned long long int) var_5);
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [0] [(signed char)7] [1] [i_9] [i_9] [i_9] [i_9])) ^ (((/* implicit */int) (signed char)61))))) ? (((((/* implicit */_Bool) (unsigned short)27361)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_6 [i_9] [i_9])))) : (((/* implicit */int) (unsigned short)27361))))), (arr_25 [i_9] [i_9] [i_9] [14] [6ULL] [i_9]))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        arr_43 [6LL] = ((/* implicit */int) (signed char)-5);
        var_26 = ((/* implicit */int) var_3);
        arr_44 [i_10] = ((((/* implicit */_Bool) min((arr_39 [i_10]), (((/* implicit */unsigned long long int) var_10))))) ? (var_15) : (((int) ((var_4) == (((/* implicit */int) (signed char)-5))))));
    }
    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_16 [(signed char)5] [i_11] [i_11])), (var_15)))) ^ (max((((/* implicit */unsigned long long int) var_14)), (var_2)))));
        arr_47 [i_11] = ((/* implicit */long long int) arr_45 [(signed char)7]);
        arr_48 [i_11] |= var_5;
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (7049773894532451059LL)))) >= (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) 0)))))))));
    var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_13) : (var_11)));
}
