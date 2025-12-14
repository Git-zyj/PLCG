/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167112
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
    var_17 = min((((/* implicit */int) var_10)), ((((_Bool)0) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)121)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) << (((((/* implicit */int) arr_0 [i_0 + 1])) - (83)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (6714782565029419364ULL) : (((/* implicit */unsigned long long int) var_7)))) ^ (((/* implicit */unsigned long long int) -1462407671)))) << ((((~(var_7))) + (5528592068872479521LL)))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) arr_1 [i_0 - 1])), (0LL)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0 + 2])) ? (1462407670) : (((/* implicit */int) arr_1 [i_1]))))) : (arr_5 [(unsigned short)7] [i_2 + 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2 - 3] [i_2])) != (((/* implicit */int) (unsigned short)57984))))) > (((/* implicit */int) (unsigned char)189))))))));
                    var_20 = (~(((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)-118)))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (6714782565029419364ULL)))));
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-37)))), (((/* implicit */int) ((arr_7 [i_2]) > (((/* implicit */long long int) arr_5 [i_1] [i_2])))))))) > (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((arr_4 [i_1] [i_2]) - (var_7)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (arr_9 [i_3])));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 1])) ? (arr_11 [i_4 - 1] [i_4 - 2]) : (((/* implicit */int) arr_10 [i_4 - 3] [i_4 - 3]))));
            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_4 - 1] [i_4 + 1]));
            var_24 = ((/* implicit */unsigned char) -1462407671);
        }
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)23569)) >= (((/* implicit */int) arr_14 [i_3])))) || (((/* implicit */_Bool) arr_13 [i_3])))))));
        /* LoopSeq 4 */
        for (unsigned char i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            var_26 |= ((/* implicit */long long int) (+(var_1)));
            arr_18 [i_3] [17] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_3] [i_5]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_5] [i_5]))) + (var_0))) : (var_9)));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [18LL]) / (arr_13 [i_3])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)6))))) : (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_5 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_9 [i_3])))));
            var_28 = ((/* implicit */unsigned short) 2218950544541294548LL);
        }
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            arr_23 [i_3] |= ((((/* implicit */unsigned int) 1462407670)) + (((((/* implicit */_Bool) arr_22 [i_3])) ? (1521594395U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6))))));
            arr_24 [i_3] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (signed char)120)))));
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (arr_21 [i_3])))) ? (512107429) : ((-(((/* implicit */int) var_8)))));
        }
        for (short i_7 = 4; i_7 < 21; i_7 += 1) 
        {
            arr_27 [i_7] [i_7] = ((/* implicit */unsigned char) arr_26 [i_3] [i_7 + 1] [i_3]);
            arr_28 [i_3] [i_3] [i_7] = ((/* implicit */_Bool) (+((-(var_11)))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) 6061831063308043547ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) : (-545844454860507202LL))))));
        }
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_31 = ((/* implicit */_Bool) ((unsigned char) arr_9 [i_3]));
            var_32 = ((/* implicit */unsigned char) arr_16 [i_8] [i_3] [i_3]);
            var_33 *= ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_8] [i_8] [i_3])) / (arr_11 [i_3] [i_3])));
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_8]) : (arr_30 [i_3] [i_3])));
            var_35 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3]))) : (((arr_14 [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_9 [3U])))));
        }
    }
    /* vectorizable */
    for (short i_9 = 1; i_9 < 10; i_9 += 3) 
    {
        var_36 = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_9 + 1]))));
        var_37 |= ((/* implicit */short) arr_32 [i_9]);
        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((_Bool) var_9)))));
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (+(var_12)))) ? (((unsigned long long int) arr_5 [i_9] [i_9])) : (((/* implicit */unsigned long long int) arr_4 [i_9 + 1] [i_9])))))));
    }
}
