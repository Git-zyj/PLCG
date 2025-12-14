/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148592
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)14])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_6)))))));
            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (arr_2 [i_0])))) ? (((/* implicit */int) min((var_7), (var_5)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)245)))))))))))));
            arr_8 [i_0] [i_1] = var_0;
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [12ULL] [i_3] [i_3 - 1] [i_3]))));
                    arr_19 [i_0] [i_3] [14ULL] [i_3] [(unsigned char)16] = ((((((/* implicit */_Bool) 7375309382408781273ULL)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_2] [i_3])))))));
                }
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [(unsigned char)13])), ((((!(((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_5] [i_5] [(unsigned char)20])))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_1 [i_0] [9ULL])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2)))))))))));
                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_5])))));
            }
            arr_23 [i_2] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_14 [i_0] [(unsigned char)0] [i_2] [i_2])) ? (7375309382408781284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_2])) : (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) / (((/* implicit */int) var_7)))))))));
            var_16 = ((/* implicit */unsigned char) min((min((min((arr_10 [i_2] [i_0]), (((/* implicit */unsigned long long int) var_5)))), (arr_0 [i_0]))), (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((((/* implicit */unsigned long long int) var_7)), (12489671782081668951ULL)))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_3), (arr_13 [(unsigned char)6] [i_2] [i_2] [(unsigned char)6])))) : ((+(((/* implicit */int) var_9))))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) min((arr_25 [i_6]), ((unsigned char)37))))) - (((/* implicit */int) (unsigned char)140))));
        arr_27 [i_6] [(unsigned char)14] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_25 [i_6])) | ((~(((/* implicit */int) var_8))))))));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_8)) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6]))))))), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_24 [i_6])))), (((((/* implicit */_Bool) arr_25 [15ULL])) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) var_7))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_4))));
    var_19 = var_1;
    var_20 = ((/* implicit */unsigned char) ((7854504024740003136ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84)))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (var_2)));
}
