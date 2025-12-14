/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151933
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
    var_14 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20895)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) (unsigned short)45115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))) < (556123728U)))))));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24618))) / (var_9)));
            var_17 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (short)14640)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-95371441266876627LL))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) ((signed char) 1189735495U))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (arr_1 [i_1])))));
            arr_6 [i_0] = ((/* implicit */unsigned short) ((signed char) arr_2 [(unsigned char)14] [(unsigned char)10] [i_0]));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_19 += ((/* implicit */unsigned char) ((signed char) 18446744073709551615ULL));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60879))) > (var_6)))) - (((/* implicit */int) ((((/* implicit */_Bool) 107170298)) && (((/* implicit */_Bool) var_6)))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)23)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (short)-6786))));
            }
            for (int i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2])) ? (arr_7 [i_4 + 3] [i_0]) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (4294967295U)));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (arr_1 [i_4 - 1]) : (arr_1 [i_4 - 1])));
                    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) arr_9 [i_2] [i_4] [i_5]))))) && (((/* implicit */_Bool) -1909976214))));
                }
                arr_19 [i_0] [i_0] = ((/* implicit */short) arr_12 [i_0] [i_4]);
                var_24 = ((/* implicit */unsigned long long int) ((unsigned short) -8872145905645581640LL));
                var_25 = ((/* implicit */int) min((var_25), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967278U)) == (var_0))))))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (unsigned char)191)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) 262143))));
            }
            for (int i_6 = 3; i_6 < 13; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_7 = 2; i_7 < 16; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) arr_16 [(signed char)13] [i_2] [i_6 - 1]);
                    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9135))) & (4294967295U)));
                    arr_27 [i_0] [i_2] [i_6] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_8) : (var_10)))) ? (((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_2]))) : (((/* implicit */int) ((_Bool) (short)-16383)))));
                }
                for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                    {
                        arr_34 [i_0] [i_0 - 1] [i_2] [i_6] [i_2] [i_9 - 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) -8504629571696014869LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (18446744073709551615ULL))) : (var_10)));
                        arr_35 [i_0] [i_0] [i_6] [i_8 + 4] [i_9] [i_0] = ((/* implicit */unsigned char) (-((-(var_4)))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_5))));
                    }
                    var_30 = ((/* implicit */unsigned long long int) (short)-1);
                    var_31 = ((/* implicit */int) arr_17 [i_0] [i_2] [i_6]);
                    var_32 *= ((unsigned long long int) arr_16 [i_2] [i_6 - 1] [i_6]);
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-15202)) ? (arr_3 [i_0] [i_6 - 1]) : (arr_3 [i_0] [i_6 + 3])));
            }
            arr_36 [i_0] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_17 [i_0] [i_0] [(short)4])))));
        }
        var_34 -= ((((/* implicit */_Bool) 1073741823ULL)) ? (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (18446744073709551615ULL));
    }
    var_35 = ((/* implicit */int) ((max((((var_8) ^ (var_4))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (var_8))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((-1), (((/* implicit */int) (short)-1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 10888210110405394424ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)44886)))))))))));
}
