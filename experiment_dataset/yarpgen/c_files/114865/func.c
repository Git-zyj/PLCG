/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114865
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
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)40)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) ((signed char) arr_1 [i_0 + 1])))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((signed char) (_Bool)1))));
                var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */int) (short)32761)) : (min((max((0), (arr_6 [i_0] [i_0] [i_0 + 2]))), (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_1 [(signed char)10]))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_13 [i_0] [(unsigned char)8] [i_0 + 2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)98))));
                        arr_14 [i_3] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) ((int) (signed char)-65));
                        arr_15 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((((arr_5 [i_0 + 2]) ? (((unsigned long long int) arr_4 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1687595366)))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) 355853225))))), (arr_12 [i_0 + 1] [i_0 + 2] [i_0])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) (signed char)88);
                            var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_10 [i_0 + 1] [(_Bool)1]))))), (((unsigned char) arr_10 [i_0 + 1] [i_1]))));
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_16 [i_0 + 1] [i_0 - 1] [i_0 - 1] [(unsigned char)4]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1])) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 - 1] [3] [7LL])) || (((/* implicit */_Bool) arr_1 [i_0 + 2])))))));
                            arr_25 [i_7] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)12)) || (((/* implicit */_Bool) (unsigned char)0)))))))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 9; i_8 += 3) 
                        {
                            arr_29 [i_0 + 1] [i_1] [i_5] [i_6] [i_0 + 1] [i_6] [i_8 + 4] &= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)53481))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((arr_21 [i_0 + 2] [i_1] [i_5] [i_6] [i_8]) / (((/* implicit */int) (signed char)-98))))) : (((long long int) var_2)))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [(short)2])) : (((/* implicit */int) (signed char)47)))) / (min((((/* implicit */int) arr_8 [i_8 + 1] [i_6] [i_1] [i_0])), (var_2)))))))))));
                            var_21 += ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                        }
                        /* vectorizable */
                        for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_9 - 2] [i_0 + 1]))));
                            arr_34 [i_0 + 2] [i_1] [i_9] [(signed char)8] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [1]))));
                        }
                        arr_35 [i_0] [i_6] |= ((unsigned short) ((unsigned char) arr_33 [i_0 + 1] [i_0] [i_0] [i_0] [8ULL] [i_0 + 1]));
                    }
                } 
            } 
            var_23 *= ((/* implicit */signed char) (-(min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))))));
        }
        var_24 += ((/* implicit */signed char) min((((/* implicit */long long int) ((((unsigned int) arr_1 [(signed char)11])) - (((/* implicit */unsigned int) -1687595356))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2])) ? (0) : (((/* implicit */int) var_7))))) : ((+(arr_9 [i_0 - 1] [i_0] [i_0])))))));
    }
}
