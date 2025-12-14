/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187884
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
    var_14 += ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))));
        var_16 &= ((/* implicit */int) ((unsigned short) arr_0 [10LL]));
    }
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) ((var_13) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)))))));
    /* LoopSeq 2 */
    for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_18 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_1 [i_1 - 1]) >> (((arr_2 [i_1] [i_1]) + (146340537))))) | (arr_1 [i_1 + 2])))) ? (((arr_3 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (((arr_6 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6879))))))) : (((/* implicit */long long int) ((int) arr_0 [i_1])))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_1 [i_1 - 1]) >> (((((arr_2 [i_1] [i_1]) + (146340537))) - (1331288551))))) | (arr_1 [i_1 + 2])))) ? (((arr_3 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (((arr_6 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6879))))))) : (((/* implicit */long long int) ((int) arr_0 [i_1]))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_5 [i_1 + 2] [i_1]), (arr_5 [i_1 - 1] [i_1])))) + (((/* implicit */int) ((_Bool) arr_5 [i_1 + 1] [i_1])))));
        var_20 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_1 [i_1 + 2])) && (arr_3 [i_1])))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_3]));
                var_22 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_9 [i_1 + 1] [i_2] [i_2])))) | (((/* implicit */int) ((4142362599U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_2]))))))));
                /* LoopSeq 1 */
                for (int i_4 = 3; i_4 < 11; i_4 += 4) 
                {
                    var_23 = ((/* implicit */int) ((arr_0 [i_1]) || (((/* implicit */_Bool) min((min((((/* implicit */int) arr_5 [i_2] [i_1])), (arr_2 [i_1] [i_2]))), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_4])) > (((/* implicit */int) (signed char)-1))))))))));
                    var_24 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_4 [i_1 + 2]))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4])) ? (min((arr_11 [i_4 + 1] [i_4 + 3] [i_4 + 3] [(short)5]), (arr_11 [i_4 + 1] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7487)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)-106))))))))));
                    arr_14 [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((arr_2 [i_1] [i_2]) - (arr_2 [i_1] [i_2]))) << (((((/* implicit */int) ((short) (-(((/* implicit */int) arr_4 [i_3])))))) + (13079)))));
                }
                arr_15 [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((var_0) * (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_0 [i_1])) : (((arr_2 [i_1] [i_1]) % (((/* implicit */int) arr_7 [i_1]))))))));
            }
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_5 [i_1 + 2] [i_2]))));
            arr_16 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((arr_13 [i_1]), (((/* implicit */long long int) (unsigned char)225)))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)195)) % (((/* implicit */int) arr_7 [i_1])))))))) ? ((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)195)))))) : (((/* implicit */int) (signed char)48))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_27 = ((/* implicit */short) ((arr_13 [i_1]) == (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15280))) : (arr_11 [i_5] [i_5] [i_5] [i_5]))))));
            var_28 = ((/* implicit */short) arr_5 [i_5] [i_1]);
            arr_19 [i_1] [i_5] [i_5] = ((/* implicit */int) arr_4 [i_1]);
            var_29 ^= ((/* implicit */long long int) ((unsigned char) (signed char)27));
        }
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_30 = max((((/* implicit */unsigned char) ((_Bool) 6U))), (arr_22 [i_1]));
            var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) arr_10 [i_1] [(unsigned char)7] [i_6] [(unsigned char)7])), (arr_7 [i_1])))))));
            var_32 = (+(((((arr_3 [i_1]) && (((/* implicit */_Bool) arr_4 [i_6])))) ? (arr_1 [i_1]) : (((/* implicit */int) arr_7 [i_1])))));
            var_33 = ((/* implicit */unsigned char) arr_17 [i_1 - 1] [i_6] [i_1]);
            var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */int) arr_20 [i_1 - 1] [i_1 + 2] [i_1 + 1])), (arr_2 [i_1] [i_6])))) / (max((arr_6 [i_1]), (arr_6 [i_1])))));
        }
        var_35 -= (!(((/* implicit */_Bool) 5417215858004529699LL)));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */signed char) arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
        var_36 = ((/* implicit */short) ((((352096898U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_7 - 1] [i_7 - 1]))))) > (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1]), (((/* implicit */short) arr_10 [i_7 - 1] [i_7] [i_7] [(unsigned short)12]))))))));
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) -1859760031)))))));
        /* LoopSeq 4 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
        {
            var_38 += ((((arr_21 [(signed char)6]) > (arr_21 [(unsigned char)0]))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [4U])) <= (((/* implicit */int) var_11)))) ? (((/* implicit */long long int) arr_21 [(signed char)10])) : (arr_8 [i_7] [(signed char)0])))));
            var_39 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned char)31), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) | (((int) arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
            arr_29 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_1 [i_8]);
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
        {
            var_40 = ((((/* implicit */int) arr_10 [i_7 - 1] [12U] [i_7 - 1] [i_7 - 1])) | (((/* implicit */int) arr_25 [i_7 - 1])));
            var_41 ^= ((/* implicit */unsigned char) var_8);
        }
        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_42 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_5 [i_7] [(unsigned short)4])) : (((/* implicit */int) arr_5 [i_7 - 1] [(_Bool)0])))) / (((/* implicit */int) arr_3 [0U]))));
            var_43 = ((/* implicit */long long int) arr_2 [(_Bool)1] [i_10]);
        }
        for (unsigned char i_11 = 2; i_11 < 11; i_11 += 2) 
        {
            var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_11 - 2] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)195))))) : (arr_23 [(signed char)0] [i_7 - 1] [i_11 - 2])));
            var_45 = ((max((((/* implicit */long long int) arr_10 [i_7 - 1] [10ULL] [i_11 - 2] [i_11 - 2])), (min((((/* implicit */long long int) (short)-6)), (arr_32 [i_11] [i_7 - 1]))))) <= ((((-(arr_6 [i_11]))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_7]))))))));
        }
        var_46 = ((/* implicit */unsigned char) var_12);
    }
}
