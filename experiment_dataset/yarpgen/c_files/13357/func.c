/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13357
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
    var_14 = ((/* implicit */unsigned int) max(((~(((int) 16384)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 16378)))))));
    var_15 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)125)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) var_11))))) : (min((1099478073344LL), (((/* implicit */long long int) var_11)))))), (min((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (var_1)))));
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34479)) / (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) (unsigned char)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)16)) == (arr_1 [i_0 + 2] [i_0 - 2])));
        var_18 = ((/* implicit */int) var_8);
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1])) + (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_19 = ((/* implicit */unsigned char) ((8646800487733696951LL) > (((/* implicit */long long int) (-2147483647 - 1)))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((signed char) (unsigned char)252));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                arr_9 [i_0] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 2]))));
                arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1]))) : ((-(10727151824998141822ULL)))));
                var_20 = ((/* implicit */_Bool) arr_4 [i_2 - 2]);
                var_21 = ((/* implicit */int) arr_8 [i_0 + 1] [i_1 - 1] [i_0 + 1]);
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_22 -= arr_7 [i_0 - 2];
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */long long int) arr_11 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_3 - 1])) : (((var_5) / (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_3] [(signed char)0]))))));
                var_24 = ((/* implicit */unsigned char) arr_14 [i_0] [i_3 - 1] [i_0 + 1] [i_1 - 2]);
            }
            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned char)13] [i_0 - 1] [i_0 + 1])) ? (arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 1]) : (arr_13 [i_0] [i_0 - 2] [i_0 + 1])));
            arr_15 [i_0] = ((/* implicit */unsigned int) arr_5 [i_0 + 2] [i_1 - 2]);
        }
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned char)255))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_25 [i_4] [i_5] [i_6] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_6] [i_7])) ? (((/* implicit */long long int) (+(arr_1 [i_5] [i_5])))) : (((long long int) arr_0 [(unsigned short)2]))))) ? (max((((/* implicit */unsigned int) ((int) (signed char)-124))), (((arr_8 [i_4] [i_5] [i_5]) >> (((-1LL) + (17LL))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_4] [i_6] [i_7])) / (var_0)))) - (max((((/* implicit */unsigned int) (_Bool)1)), (arr_8 [i_4] [i_4] [i_7]))))));
                        arr_26 [(unsigned short)4] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -976371424)))))) > (min((((/* implicit */unsigned int) var_2)), (arr_13 [i_4] [i_6 + 1] [i_7])))))), (var_10)));
                        var_27 = ((/* implicit */int) (+(arr_16 [i_6])));
                    }
                } 
            } 
        } 
        var_28 = ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_4] [i_4]) ? (arr_13 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [i_4])))) || (((/* implicit */_Bool) var_5))))));
    }
}
