/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133387
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
    for (int i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (unsigned short)48084))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_16 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)48065))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (((723466943U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17470))))))));
                            var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) % (max((((/* implicit */int) (unsigned short)17475)), (-1727990631)))))), (((((/* implicit */_Bool) -1634007129)) ? (268319406U) : (((/* implicit */unsigned int) -1747409492))))));
                            arr_14 [i_1] [i_1] [i_2] [i_2 - 2] [2LL] [i_1] = ((/* implicit */unsigned int) ((((arr_3 [i_0 - 2] [i_1 + 2]) >> (((arr_3 [i_0 + 2] [i_1 - 1]) - (12354337771357607131ULL))))) >> ((((~(arr_3 [i_0 - 1] [i_1 + 3]))) - (6092406302351944408ULL)))));
                            var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) (!(((arr_0 [i_1] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))))))));
                        }
                        var_19 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_0])) ? (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1])) : (arr_13 [(_Bool)1] [i_2] [i_1] [i_1] [(signed char)8] [0LL]))))) * (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_2 + 1] [2] [i_0 - 1] [i_2 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 3]))) : (arr_13 [i_0 - 2] [i_2 + 2] [i_2 + 2] [(short)0] [i_2 + 2] [i_2])))));
                        arr_15 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_10 [i_0] [i_0]), (((/* implicit */short) (signed char)-22))))) || (((/* implicit */_Bool) arr_13 [i_1] [(signed char)13] [i_1] [i_1] [i_3] [i_3 + 1])))) && ((!(((/* implicit */_Bool) 1747409492))))));
                    }
                } 
            } 
        }
        var_20 += 0;
        var_21 = ((/* implicit */signed char) ((unsigned short) ((268319406U) << ((((~(arr_2 [(unsigned char)11]))) - (993713026U))))));
        arr_16 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) (short)-32755)), ((unsigned short)17482))), (((/* implicit */unsigned short) ((arr_6 [i_0] [i_0] [i_0]) != (((/* implicit */int) (signed char)105)))))))) ? (((((/* implicit */unsigned int) (~(2147483647)))) | (3256576462U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0])))));
    }
    for (int i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_7 [i_5] [i_5] [(signed char)6])) ? (((/* implicit */unsigned int) arr_9 [i_5 - 1] [i_5] [i_5] [i_5])) : (723466943U))), (arr_18 [6LL]))), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)32759))) <= (arr_2 [(unsigned short)5]))) ? (((((/* implicit */_Bool) 2458780914U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32741))) : (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : ((+(arr_13 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5])))))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            var_22 *= (unsigned char)7;
            arr_22 [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_20 [i_6] [i_6 + 1] [i_6]))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_10 [i_5] [i_5 + 2])))))) : ((+(((/* implicit */int) arr_1 [i_5 + 1]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_9 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_10 [i_9 + 1] [i_6 + 3])) : (((/* implicit */int) arr_10 [i_9 + 1] [i_6 + 3]))))) != (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (3154224204U)))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned int) -1LL)))));
                            arr_31 [i_7] [i_6] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_13 [i_5] [i_9 + 1] [i_7 - 1] [i_7] [5U] [2U]), (arr_13 [7U] [i_9 + 1] [i_7 - 1] [1U] [1U] [i_9])))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_17 [i_5])) >> (((((/* implicit */int) (signed char)-64)) + (72)))))))) : (max((((/* implicit */unsigned int) arr_29 [i_9 - 2] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 2] [i_9])), (3154224205U)))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned char) (+(-3848532519450128726LL)));
        }
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) (+(704604980)));
            arr_36 [i_5 + 2] [i_5 + 2] [(unsigned char)12] = ((/* implicit */short) (unsigned short)48060);
            var_27 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-32760)))) / (((/* implicit */int) ((_Bool) (unsigned char)230)))))) == (((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9090))) : (((((/* implicit */_Bool) (signed char)31)) ? (arr_13 [i_5] [i_5 + 1] [i_5] [i_5] [i_5] [i_10]) : (((/* implicit */unsigned int) -1920871874))))))));
        }
        var_28 = ((/* implicit */unsigned short) ((signed char) arr_3 [i_5] [13]));
    }
    var_29 ^= ((/* implicit */unsigned short) var_7);
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-((~(var_3))))))));
    var_31 += var_9;
    /* LoopNest 2 */
    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 4) 
    {
        for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            {
                arr_42 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_41 [i_11])) - (arr_37 [i_11]))))))) | (1747409497)));
                var_32 &= (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_11])) ? (2147483634) : (((/* implicit */int) arr_39 [i_12] [i_11])))) | (((((/* implicit */_Bool) arr_39 [5U] [i_11])) ? (((/* implicit */int) arr_39 [3] [8LL])) : (((/* implicit */int) (unsigned short)48065))))))));
                var_33 += ((/* implicit */unsigned char) (-(((((unsigned int) 9895584965612444107ULL)) - (((unsigned int) (_Bool)1))))));
            }
        } 
    } 
}
