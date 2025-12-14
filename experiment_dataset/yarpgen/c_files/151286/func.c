/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151286
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
    var_13 = var_4;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) max((max((var_12), (((/* implicit */unsigned long long int) ((-2003650952054810359LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))), (((/* implicit */unsigned long long int) var_1))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned long long int) (short)7);
        arr_5 [i_0] = ((/* implicit */unsigned char) min((min(((~(0ULL))), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((-9223372036854775807LL - 1LL)))))))));
        arr_6 [(short)12] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            arr_21 [i_1] [i_5] [(unsigned short)14] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (arr_18 [i_1] [i_1] [i_5] [i_4] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)30502)), ((unsigned short)26640)))))))) ? (((((/* implicit */_Bool) arr_14 [i_3 - 4] [i_5 - 2] [i_4 + 1])) ? (((((/* implicit */long long int) arr_15 [i_1] [i_2] [i_3] [i_4] [i_5])) / (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38879))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned short)38896)) : (((/* implicit */int) (signed char)-19)))), (((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [(signed char)5] [i_1])) ? (((/* implicit */int) (short)-2685)) : (((/* implicit */int) var_6)))))))));
                            var_15 = ((/* implicit */unsigned long long int) var_3);
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_1] [i_3 - 2] [i_5 + 3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)32)) ? (arr_15 [i_2] [i_3 + 1] [i_3 - 1] [i_4] [i_4]) : (arr_15 [i_2] [i_3] [i_3 - 3] [i_5] [i_5])))) : (min((arr_18 [i_3] [i_3 - 3] [i_5] [i_3] [i_3 - 2] [i_3 - 4]), (arr_18 [i_3] [i_3 - 4] [i_5] [i_3] [i_3 - 1] [i_3 - 3])))));
                        }
                        for (unsigned char i_6 = 3; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) arr_22 [i_4] [i_2] [i_2] [i_4]);
                            var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(arr_20 [i_1] [i_2] [i_3 + 1] [i_4 - 1] [(short)4])))), (var_12)));
                        }
                        var_19 = ((/* implicit */long long int) arr_20 [i_1] [i_1] [i_3 + 1] [i_4 - 1] [i_4 - 1]);
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_12 [i_4 + 3]))));
                        var_21 |= ((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [(signed char)8]);
                        var_22 = var_6;
                    }
                } 
            } 
        } 
        arr_26 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))));
    }
    /* LoopSeq 2 */
    for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
    {
        var_23 += 17135136472935534292ULL;
        arr_30 [i_7 - 1] = ((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [(unsigned char)2]);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 2; i_9 < 21; i_9 += 4) 
        {
            arr_36 [i_8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_9 + 2])) ? (((/* implicit */int) (unsigned short)38891)) : (((/* implicit */int) (short)-2689))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_32 [i_8] [9LL])))) * (arr_35 [i_8] [i_9])));
            var_25 += ((/* implicit */unsigned char) (+(arr_33 [i_8] [i_9])));
        }
        var_26 ^= ((/* implicit */unsigned short) (signed char)4);
        var_27 += ((/* implicit */short) arr_31 [(signed char)9]);
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)40))))) ? (max((36028797018963936LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)0)))))))) ^ (var_12)));
}
