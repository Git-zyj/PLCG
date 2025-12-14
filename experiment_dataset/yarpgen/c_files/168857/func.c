/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168857
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) | ((+(-32768)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_8 [i_0 + 1] [i_0 - 1] [i_1] [i_2 + 2] [i_0 - 1] [i_1] = (short)12;
                        arr_9 [i_0] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) max((958488604), (((/* implicit */int) (unsigned char)15))));
                        var_19 &= ((/* implicit */int) (unsigned char)4);
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)34)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-28075)) : (((/* implicit */int) var_9))))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2009562254)) ? (1895657304) : (((/* implicit */int) (signed char)-61))))), (18446744073709551606ULL))))))));
                                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1])) >> (((/* implicit */int) arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1]))))) ? (min((-522958527), (((/* implicit */int) arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1])))) : (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1])) ? (((/* implicit */int) (short)9863)) : (373837926)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
        {
            var_22 += ((/* implicit */unsigned long long int) (unsigned char)188);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 0))) ? (arr_13 [i_6] [i_0 + 2] [i_6] [i_0 + 2] [i_6] [i_6]) : (min((-408688482), (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) var_10)) : (-1952122308))))))))));
        }
        for (short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
        {
            var_24 ^= ((/* implicit */int) ((unsigned char) min(((+(((/* implicit */int) (signed char)112)))), (((((/* implicit */_Bool) 1720139899283150013ULL)) ? (1895657304) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_7])))))));
            var_25 = ((/* implicit */signed char) var_2);
            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
        }
        for (short i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            var_27 ^= ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-59))))))));
            var_28 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) var_9)), (arr_15 [8] [i_0 - 1] [i_8 - 1] [i_0] [i_8])))));
        }
        for (short i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (short i_11 = 2; i_11 < 9; i_11 += 4) 
                {
                    {
                        arr_32 [i_0] [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_9] [i_11])) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -522958527)) ? (-1952122313) : (((/* implicit */int) var_10))))))) : (((unsigned long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)4080)))))));
                        var_29 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_9] [i_0 - 1])) ? (arr_16 [i_0] [i_0 + 1] [i_9 + 1] [i_10] [i_10] [i_11]) : (arr_29 [i_0] [i_0] [8] [i_10] [i_11])))) ? (max((arr_28 [8] [i_9] [4] [i_11 + 2]), (((/* implicit */unsigned long long int) var_9)))) : (min((((/* implicit */unsigned long long int) (short)-8352)), (arr_19 [i_0] [i_0] [i_10])))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_10] [(short)8])));
                        var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_9] [i_10])))))))) / (max((((/* implicit */unsigned long long int) -709226)), (arr_12 [i_10] [i_11 - 2] [i_11] [i_11 - 2])))));
                        var_31 += ((/* implicit */signed char) var_5);
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_9 + 2])) >= (((/* implicit */int) var_10))))) <= (((((((/* implicit */int) arr_23 [i_0])) + (2147483647))) >> (((arr_31 [11] [i_0] [i_9] [i_9]) - (1540246067))))))), (((((/* implicit */_Bool) -1366684622)) || (((/* implicit */_Bool) -1952122324)))))))));
        }
        arr_33 [i_0] [i_0 - 2] = min((max((((/* implicit */int) (unsigned char)22)), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])))))), (((min((-1532560411), (((/* implicit */int) var_10)))) + (arr_31 [2ULL] [i_0] [4ULL] [(signed char)0]))));
    }
    var_33 = ((/* implicit */int) var_0);
}
