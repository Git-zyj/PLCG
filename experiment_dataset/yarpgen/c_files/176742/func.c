/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176742
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_1 - 1] [i_3] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) ((arr_4 [i_0]) > (((/* implicit */int) var_9))))))) >= (((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) max((var_6), (var_4)))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (~((-((+(((/* implicit */int) (unsigned char)136))))))));
                        arr_13 [i_2] [i_2] [i_2] = ((/* implicit */int) ((13455631334807293346ULL) * (((/* implicit */unsigned long long int) 1534957193))));
                        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) ^ (((var_13) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5)))))))));
                        arr_14 [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((2147483647), (-417288004)))) ? (min((((((/* implicit */int) var_17)) | (((/* implicit */int) var_6)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)1)), (var_5)))))) : (((((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_2 - 1])) / (1186893390)))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)79)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0])))))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_0 [i_4]))) % (arr_0 [i_4])));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4])) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_7 [i_4] [i_4])))))))) ? (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_2 [i_4]))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)246)))) : ((-(((/* implicit */int) var_9)))))) : ((~(((/* implicit */int) var_17)))))))));
        var_24 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7))))))), ((((-(((/* implicit */int) var_17)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    }
    /* vectorizable */
    for (short i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */int) 2145386496ULL);
        var_25 = ((/* implicit */short) var_3);
        var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_25 [i_5] [i_5] |= ((/* implicit */int) arr_23 [i_6] [i_5 + 3]);
            var_27 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_8))))));
            arr_26 [i_5 - 1] [i_6] = ((/* implicit */short) (((+(arr_22 [i_6] [i_6]))) < (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_19 [i_5])))))) : (arr_23 [i_5 + 3] [i_5 + 1]))))));
    }
    var_29 ^= ((/* implicit */unsigned char) var_19);
}
