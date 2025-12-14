/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164157
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
    var_16 = min((((((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_13) * (((/* implicit */unsigned long long int) var_0)))))));
    var_17 += (+(((/* implicit */int) ((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)15209))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 2] [i_0])) != (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_14))))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0]))))))));
        var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 2960278829U))) && (((/* implicit */_Bool) var_4)))))));
        arr_4 [i_0] = ((/* implicit */int) (unsigned char)174);
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)1755)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
            arr_7 [i_1] = ((/* implicit */short) ((arr_6 [i_0] [i_0 + 2] [i_1]) < (((/* implicit */int) arr_2 [i_0 + 1]))));
            var_20 += ((/* implicit */short) (((-(var_8))) << ((((~(arr_6 [i_0] [i_0] [i_1]))) + (1530185216)))));
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) ((var_5) < (var_0))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) != (((/* implicit */int) arr_5 [i_0] [i_2]))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                arr_15 [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) var_14);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (arr_13 [i_0] [i_0])))) ? (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_2)) - (29856))))) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_14 [i_0]))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_20 [i_4] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2 - 1])) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_2] [i_0] [i_0]))) * (arr_9 [i_0] [i_2] [i_4]))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_0 + 3] [i_0])) ? (arr_6 [i_4] [i_0 + 3] [i_0]) : (arr_6 [i_0] [i_0 + 2] [i_0])));
            }
            for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                var_24 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_2] [i_2] [i_0]))) >= (var_15)));
                var_25 = ((((arr_2 [i_0]) ? (((/* implicit */int) arr_11 [i_2] [i_5])) : (var_5))) + (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]));
            }
            for (unsigned short i_6 = 3; i_6 < 18; i_6 += 2) 
            {
                var_26 = ((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_0 + 3])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_13 [i_0] [i_2]) : (((/* implicit */int) (unsigned short)50327)))) : ((-(((/* implicit */int) arr_1 [i_0] [i_2])))));
                var_27 = ((/* implicit */signed char) ((arr_22 [i_0] [i_0 + 1] [i_6] [i_2 - 1]) >> (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) arr_1 [i_2] [i_6])) : (var_5)))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((arr_16 [i_0] [i_2 - 1] [i_6] [i_6]) > (((/* implicit */unsigned long long int) arr_22 [i_0 + 1] [i_0 + 3] [14ULL] [i_6 - 3])))))));
                var_29 = ((/* implicit */unsigned long long int) ((arr_1 [i_0 - 2] [i_2 - 1]) ? (arr_6 [i_0 + 3] [i_2 - 1] [i_6 - 3]) : (((/* implicit */int) arr_1 [i_0 - 2] [i_2 - 1]))));
            }
            var_30 = ((/* implicit */int) ((arr_2 [i_0 - 2]) && (arr_2 [i_0 + 2])));
        }
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            arr_30 [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
            arr_31 [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) arr_26 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_22 [i_0] [i_0] [i_7] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_7])))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_17 [i_0] [i_7] [i_0] [i_7]))))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_7])) ? (arr_23 [i_7] [i_0] [i_7]) : (((/* implicit */int) (unsigned short)1747))))))));
            var_31 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_0] [i_0])), ((-(((/* implicit */int) arr_25 [i_0] [i_7] [i_0]))))))) ? (((((/* implicit */int) arr_0 [i_0 - 1] [i_7])) / (((((/* implicit */_Bool) var_6)) ? (arr_13 [i_0] [i_7]) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) (((!(var_10))) && (arr_27 [i_0] [i_0 + 2] [i_0 + 1])))));
            arr_32 [i_0] [i_7] &= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_28 [i_0 + 2] [i_7])) ? (arr_28 [i_0 + 1] [i_0]) : (((/* implicit */int) var_9)))), (((int) arr_28 [i_7] [i_0 + 3]))));
        }
        for (int i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
            arr_37 [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-97)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))) : (var_15)))) ? (arr_16 [i_0 + 1] [i_8] [i_8] [i_0]) : ((+(var_8)))))));
        }
    }
    var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_14))))))), (var_15)));
}
