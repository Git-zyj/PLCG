/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188820
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
    var_11 = ((/* implicit */unsigned char) (!(var_3)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) arr_2 [(unsigned char)1] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((((((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (-2032824090693815631LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))))), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]))));
                    var_14 = ((/* implicit */int) (((~(min((-1932504865071105958LL), (((/* implicit */long long int) var_1)))))) % ((-((~(var_4)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 2032824090693815651LL)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_3] [9LL])) : (var_0))))), (((/* implicit */unsigned int) var_1))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) arr_8 [i_0] [i_3 - 2] [i_3 - 1])), (var_7)))) + ((+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_8 [i_0] [i_3 - 1] [i_3])))))))))));
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_3 - 2]) - (arr_9 [i_3 - 2]))))));
            arr_13 [6LL] [6LL] [i_3] = ((unsigned char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */long long int) 2147483632)) + (arr_6 [6U] [i_3 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        }
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        arr_25 [i_6] [i_6] [(short)8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_24 [i_6] [13] [i_6] [i_7]))) || (((/* implicit */_Bool) min((arr_17 [i_4]), (((/* implicit */signed char) arr_15 [i_4 + 1] [5])))))));
                        var_17 = ((/* implicit */long long int) max((var_17), ((((~(var_4))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4 + 1]))))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) (~(6089956719228805331ULL)));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_24 [(_Bool)1] [i_8 + 1] [i_8] [i_8])) >= (((/* implicit */int) arr_22 [i_8] [i_8 + 1] [0LL]))))) << (((min((((/* implicit */unsigned long long int) 507904U)), (133143986176ULL))) - (507904ULL))))))));
        arr_29 [i_8] = ((/* implicit */unsigned char) (signed char)123);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8))) - (var_10))) >= (((min((((/* implicit */unsigned long long int) arr_21 [i_8 + 1])), (var_10))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)23)) - (arr_16 [(unsigned char)13] [i_8] [i_8])))))))))));
    }
    var_20 = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_0)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ^ (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 23; i_9 += 3) 
    {
        var_21 = ((/* implicit */int) ((arr_30 [i_9 + 1]) > (arr_30 [i_9 - 1])));
        var_22 |= (+(((/* implicit */int) arr_32 [i_9 - 1])));
        arr_33 [i_9 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)192))));
        /* LoopNest 2 */
        for (signed char i_10 = 2; i_10 < 23; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((arr_37 [(short)14] [i_10 - 2]) - (((/* implicit */int) arr_36 [7LL] [i_11] [i_10 - 1])))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)7680)) ? (var_5) : (((/* implicit */long long int) 1536601719U)))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_9 + 1] [i_13])) ^ (4194296))))));
                                arr_42 [i_13] [i_12] [i_13] [i_9] [i_13] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_37 [10] [i_10 + 1])) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_8)))));
                                arr_43 [i_9] [i_10] [i_11] [i_13] = ((/* implicit */unsigned char) (+(arr_30 [i_9 - 1])));
                                arr_44 [i_10] [i_10] [(short)22] [i_13] [i_13] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_9 + 1])) >= (arr_39 [i_10] [i_10 - 2] [i_10] [i_10 + 1] [(signed char)14] [i_10 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (signed char i_15 = 4; i_15 < 23; i_15 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_41 [i_15 - 2] [i_9 - 1] [i_10 + 1]))));
                                arr_50 [i_9 + 1] = ((/* implicit */long long int) (~(arr_39 [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((1480885599) == (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) (_Bool)1)))))));
                    var_27 = ((/* implicit */short) (~(((((/* implicit */long long int) arr_40 [i_9] [0LL] [i_11])) | (-1348712729606141818LL)))));
                }
            } 
        } 
    }
}
