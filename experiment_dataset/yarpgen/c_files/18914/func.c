/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18914
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))) % ((~(arr_8 [i_2])))))));
                        arr_13 [i_0] [i_2] [i_0] [i_0] [15] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3])) * (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 3])) ? (arr_5 [i_1 - 2] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1 - 1])))));
                        arr_14 [i_1 + 1] [i_2] [i_2] [i_1 + 1] [i_2] [1U] = ((/* implicit */long long int) ((arr_0 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((773583706434747841LL) / (((/* implicit */long long int) var_16))))))) : (((unsigned int) ((long long int) var_13)))));
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */int) min(((short)-22903), (arr_11 [i_3] [i_3] [i_2] [i_2] [i_1] [i_1])))) + (2147483647))) >> (((max((((/* implicit */unsigned int) arr_4 [i_1 + 1])), (var_12))) - (2772393913U)))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-98)), (2147483647)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_1])) ? (733354148U) : (((/* implicit */unsigned int) var_7)))))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned short)0)))))) > ((-(arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 17; i_5 += 4) 
                        {
                            var_20 ^= ((/* implicit */signed char) min((((arr_19 [i_3] [i_1 - 2] [(signed char)13] [(_Bool)1] [(signed char)13] [(signed char)13]) ? (arr_15 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_3] [i_3] [(_Bool)1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((arr_15 [i_0] [i_1 + 1] [i_3] [i_0] [i_0] [i_5] [i_5]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_1 + 1]))))))));
                            var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), (max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1] [i_1 + 1])))));
                        }
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */int) (+(arr_7 [i_0] [i_0])));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */int) ((unsigned int) ((max((arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]), (var_12))) >> (((((-2147483647) - (-2147483634))) + (28))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((((unsigned int) arr_10 [i_6] [i_6] [i_6] [i_6])) | (arr_3 [i_6] [i_6]))))))));
        arr_24 [i_6] = ((/* implicit */unsigned char) ((signed char) ((((arr_15 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6]) == (arr_9 [i_6]))) ? (arr_6 [i_6 - 1] [(_Bool)0] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6]))))));
    }
    var_24 *= ((/* implicit */short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_7)) : (var_4)))))));
    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) var_15)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))))) : (max((((/* implicit */unsigned int) var_7)), (var_17))))) * (((((/* implicit */unsigned int) (+(-2147483647)))) * (((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
}
