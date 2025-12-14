/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135348
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
    var_14 = ((/* implicit */unsigned short) (-(min((2283209854U), (1732952968U)))));
    var_15 = ((/* implicit */unsigned short) min((min((var_0), (274877890560ULL))), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (274877890560ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51987)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (274877890565ULL)))))))));
                var_17 = ((/* implicit */unsigned short) (((~(min((arr_5 [i_0] [i_1 + 1]), (((/* implicit */unsigned int) var_4)))))) > (((arr_4 [i_1 - 1] [i_1]) >> (((arr_4 [i_1 + 3] [i_1 + 3]) - (2581470478U)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_18 *= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_6 [i_2])) & (((/* implicit */int) arr_6 [i_2])))), ((~(((/* implicit */int) arr_6 [i_2]))))));
        var_19 = ((/* implicit */unsigned int) (((~(274877890577ULL))) < (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_7 [i_2])))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)57344)));
        var_21 *= var_2;
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            arr_16 [i_4] [i_5] = min((((/* implicit */unsigned short) (((~(((/* implicit */int) var_4)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4])) || (((/* implicit */_Bool) 18446743798831661055ULL)))))))), (arr_6 [(unsigned short)7]));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_22 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12568))) & (((((/* implicit */_Bool) (unsigned short)45801)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57323))) : (4150819863128669195ULL))))));
                arr_20 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) var_10);
            }
            arr_21 [i_4] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_5] [i_5])) * (arr_3 [i_5]))), (((unsigned long long int) arr_13 [i_4]))));
        }
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) var_13);
            arr_26 [i_7] [i_7] |= ((/* implicit */unsigned long long int) var_2);
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) min((var_4), (((unsigned short) var_1))));
            var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8]))) == (var_0))), (((((/* implicit */_Bool) arr_22 [i_4])) || (((/* implicit */_Bool) var_10))))));
            var_26 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_4])), ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28405)) && (((/* implicit */_Bool) var_4)))))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_27 *= ((/* implicit */unsigned int) min((((unsigned long long int) arr_10 [(unsigned short)5] [i_9])), (((/* implicit */unsigned long long int) (-(arr_10 [i_4] [i_9]))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                arr_36 [i_9] = ((/* implicit */unsigned short) ((((unsigned long long int) min((var_5), (((/* implicit */unsigned int) (unsigned short)52988))))) < (min((min((((/* implicit */unsigned long long int) (unsigned short)8195)), (var_0))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))))));
                var_28 = ((/* implicit */unsigned int) arr_22 [i_4]);
                arr_37 [8U] = ((/* implicit */unsigned int) var_0);
                arr_38 [i_4] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_11 [i_4]))) * (((/* implicit */int) arr_23 [i_4] [i_9] [i_10]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((var_1) - (646739642U)))))) : (min((arr_15 [i_4] [5U]), (((/* implicit */unsigned long long int) arr_32 [i_9] [i_9]))))))));
            }
        }
        arr_39 [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) 389271683U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8214))) : (16745247971044627502ULL)))));
        var_29 = (unsigned short)57321;
    }
}
