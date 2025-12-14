/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181880
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
    var_13 = ((/* implicit */unsigned long long int) var_12);
    var_14 += ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_1 [i_0])))));
        var_16 = var_7;
        var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) - ((-(((/* implicit */int) (signed char)-75))))));
        arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)16))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [(unsigned short)23] [(unsigned short)23] [i_2 - 1])))) ? (((arr_5 [i_1] [23LL] [i_2 - 1]) | (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (unsigned short)58951)) : (((/* implicit */int) (signed char)87)))))));
            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49067)) ? (4909880350162010925LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-59)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_2 + 1] [i_2])))) : (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 2])))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_11 [i_1] [i_3] = ((/* implicit */short) ((((var_6) | (((/* implicit */long long int) ((/* implicit */int) ((9979200116256947984ULL) < (((/* implicit */unsigned long long int) arr_9 [i_3])))))))) << (((((max((((/* implicit */long long int) arr_3 [i_1])), (-2701639923627986796LL))) + (66LL))) - (21LL)))));
            arr_12 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) arr_3 [i_3]);
            var_20 += ((/* implicit */unsigned short) 8397638085053569880LL);
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_14 [(signed char)20] [i_4]))));
            arr_15 [i_1] [15U] [20LL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_9 [i_1])))) & (((unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) <= (((/* implicit */int) (unsigned short)16461)))))));
            var_22 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) + (arr_2 [i_1] [i_4])))) ? (((((((/* implicit */int) (unsigned short)52393)) > (((/* implicit */int) var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (272951666833716616LL))))) : (var_6));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) min((((var_7) ? (1431684984U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5] [(short)11]))))), (((/* implicit */unsigned int) arr_16 [i_5]))))) ? (((/* implicit */int) arr_13 [i_1] [i_5] [i_6])) : (((/* implicit */int) var_2))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(2384243419579156781LL)));
                    var_24 = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_27 [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7 - 2] [i_1] [i_7 + 3] [i_7 + 1] [(signed char)10] [i_7] [16U]))) / (arr_0 [i_7 + 2]));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [7ULL] [i_1] [i_7 - 1] [i_7 - 2] [19LL] [(signed char)8] [7ULL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-7591902604961890798LL)))) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_5] [i_1] [6LL] [i_8])) : (((/* implicit */int) (short)-13133))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned char i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
            {
                var_27 *= ((/* implicit */unsigned long long int) arr_14 [i_1] [i_5]);
                arr_31 [i_1] [(unsigned char)18] = ((/* implicit */signed char) ((long long int) ((unsigned short) 733475832161620553ULL)));
                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)80))) / (-2384243419579156779LL)))));
            }
            for (unsigned char i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) arr_25 [i_1] [i_1] [(signed char)17] [i_10] [i_10] [(_Bool)0] [i_1]))))) : (((2863282301U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16466))))))));
                arr_34 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8))));
            }
            for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                var_30 = ((/* implicit */int) (+(((arr_36 [i_1] [i_1] [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)48)) ? (((((/* implicit */_Bool) ((short) (signed char)1))) ? (((((/* implicit */_Bool) arr_16 [i_1])) ? (-6555728712025679576LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (min((1729382256910270464LL), (((/* implicit */long long int) var_10)))))) : (((long long int) ((unsigned long long int) 3344670789121743928LL)))));
            }
            arr_37 [i_1] [(unsigned char)17] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) var_12))), (((2146435072U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))));
        }
    }
}
