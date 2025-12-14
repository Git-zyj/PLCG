/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131144
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((24LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1] [i_2])))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_2 [i_1] [i_0]))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_5 [i_0] [i_1 + 2] [i_2] [i_2]))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (13591444752981706852ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned int) arr_1 [i_0])) & (3932160U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)240)) - (210))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2873263663050805013LL)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)68))))) ? ((~(((/* implicit */int) arr_0 [i_2])))) : (max((-1960492331), (((/* implicit */int) arr_0 [i_0]))))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (3700601479625462861ULL)))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((var_10) == (((/* implicit */int) var_11))))), (var_4))))) * ((((!(((/* implicit */_Bool) var_2)))) ? (min((0LL), (((/* implicit */long long int) (signed char)0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (var_10) : (1093353127)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 4) 
    {
        for (unsigned char i_4 = 3; i_4 < 8; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) 
                    {
                        {
                            arr_20 [i_5] = ((/* implicit */int) (((+(18446744073709551611ULL))) == (((((/* implicit */_Bool) 15696749851961014972ULL)) ? (((unsigned long long int) 1960492346)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118)))))));
                            var_19 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-1)) : (arr_6 [i_3] [i_3 + 3] [i_4 + 2]))) ^ ((+((~(((/* implicit */int) (signed char)52))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_29 [i_3] [i_4 + 2] [i_7 - 1] [i_9] = ((/* implicit */int) (+(((arr_5 [i_9] [i_4] [i_3] [i_3]) | (arr_5 [i_9] [i_3 - 2] [i_3] [i_4])))));
                                var_20 += ((/* implicit */signed char) ((((/* implicit */long long int) (~(((((/* implicit */int) arr_13 [i_7 + 1])) / (arr_1 [i_9])))))) <= (((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_4 + 2])) ? (arr_21 [i_3 - 1] [i_4 + 2] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1] [i_4 + 2])))))));
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) + ((~((-(-504560486)))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(arr_28 [i_7] [i_9] [i_7 + 1] [i_7 + 1] [i_7] [i_4 + 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            {
                arr_35 [i_10] [i_11] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_3 [i_10] [i_10] [i_10])) / (1960492357)))));
                arr_36 [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)-97)) ^ (((/* implicit */int) (signed char)-116)))), (((/* implicit */int) (unsigned char)223))))) * ((((+(12ULL))) << (((((((/* implicit */_Bool) arr_30 [i_11] [i_10])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_10] [i_11] [i_10]))))) - (18446744073709551553ULL)))))));
            }
        } 
    } 
}
