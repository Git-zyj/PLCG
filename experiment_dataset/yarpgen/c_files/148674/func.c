/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148674
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
    var_15 = ((/* implicit */unsigned short) var_4);
    var_16 = ((/* implicit */signed char) (short)-6697);
    var_17 = ((/* implicit */unsigned int) -1LL);
    var_18 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (arr_1 [i_0] [i_0]));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-12)), (4294967295U)))) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_5 [(signed char)3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (arr_2 [i_1])));
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104))))) >= (((/* implicit */int) arr_4 [(unsigned char)8] [i_1])))))) : (arr_3 [i_1])));
        var_22 -= arr_4 [i_1] [i_1];
        arr_6 [i_1] = ((/* implicit */unsigned int) (unsigned char)255);
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_23 -= ((/* implicit */long long int) (~(14ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_3 [i_3 - 2]), (arr_3 [i_3 - 2]))))));
                        var_25 = ((/* implicit */int) min(((+(arr_1 [i_4 + 1] [i_3 - 1]))), (((/* implicit */long long int) ((unsigned char) arr_12 [i_1] [i_4] [i_4] [i_4 - 1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_26 -= ((/* implicit */int) var_6);
                            arr_18 [i_1] [i_2] [1] [(unsigned char)2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) (unsigned char)241)))) && (((/* implicit */_Bool) arr_16 [i_1] [i_4 - 2] [i_3] [i_4] [i_3 - 2]))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (unsigned char i_7 = 1; i_7 < 7; i_7 += 2) 
                {
                    {
                        arr_27 [i_2] [i_2] [i_6] [i_7] = ((/* implicit */signed char) arr_8 [i_1] [i_6]);
                        var_27 -= ((/* implicit */unsigned int) min((((int) arr_13 [i_6])), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) (signed char)127)))))));
                        var_28 = ((/* implicit */signed char) min((max((716274941), (arr_16 [i_1] [i_2] [i_6] [i_6] [(signed char)2]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (signed char)2)))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (3674711759U)))) ? (-3114710268584885595LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_2]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))));
            var_30 = ((/* implicit */long long int) var_11);
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) 201326592U))))))));
            arr_32 [i_1] [i_8] = ((/* implicit */int) min((arr_14 [(signed char)6] [i_8] [i_8] [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_1] [i_8] [i_8])))))));
            var_32 = max((((/* implicit */int) (!(((((/* implicit */int) (signed char)104)) <= (arr_29 [i_1] [2])))))), (((((/* implicit */_Bool) arr_20 [i_1])) ? (((/* implicit */int) arr_0 [i_8] [i_8])) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (arr_17 [i_1] [i_8] [i_8] [i_8])))))));
        }
        for (long long int i_9 = 1; i_9 < 8; i_9 += 1) 
        {
            var_33 -= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)54816)) ? (arr_22 [i_9 + 2] [i_9 + 1] [i_9 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)86)) < (((/* implicit */int) (signed char)31)))))));
            arr_36 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : ((+(arr_19 [i_9] [i_9] [i_9 - 1] [4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_9]))) : (max((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_9 + 1])))));
        }
    }
}
