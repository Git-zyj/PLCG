/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166508
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_12 -= ((unsigned long long int) arr_2 [i_0 - 2]);
        var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) > (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_14 = arr_0 [i_1 - 2];
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 4; i_3 < 11; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 2] [i_1 - 2]))) >= (8710746257806332339LL))))));
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1 - 1])) | (((/* implicit */int) arr_3 [i_1 + 1]))));
                var_17 ^= ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_2 [i_1])))) ^ (((/* implicit */int) arr_1 [i_1] [i_1]))));
                arr_12 [i_3] [i_2] [i_1] = ((/* implicit */int) arr_3 [i_1 - 1]);
            }
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_20 [i_1] [i_2] [i_6] = ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22655)) * (((/* implicit */int) var_4))))) ? (arr_19 [i_1] [i_4] [i_4] [i_2 + 3] [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 2])) >> (((/* implicit */int) arr_0 [i_1]))))))))));
                            arr_21 [i_1] [i_6] [i_4] [i_5] [(unsigned short)8] = ((/* implicit */short) arr_11 [i_1] [i_2] [i_4] [i_5]);
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_6] [i_6 + 1])) / (((/* implicit */int) arr_1 [(_Bool)1] [i_6 - 1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
        {
            arr_24 [i_7] [i_7] = arr_10 [i_7 + 3] [i_7] [i_1] [i_1];
            arr_25 [i_1] [i_1] |= ((/* implicit */unsigned short) ((long long int) (_Bool)1));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            var_20 += ((/* implicit */int) ((unsigned int) 4294967295U));
            arr_28 [i_1] = ((/* implicit */long long int) arr_7 [i_8]);
        }
    }
    var_21 = ((/* implicit */unsigned long long int) ((max((var_2), (max((((/* implicit */long long int) var_1)), (2414232871541265934LL))))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) : (((9910404936580414177ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7))))))))) >> (((((/* implicit */int) (unsigned char)255)) - (234)))));
    var_24 = ((/* implicit */unsigned long long int) var_9);
}
