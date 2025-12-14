/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103899
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
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) max(((signed char)-67), ((signed char)-1)))), (var_2)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14583704570184331585ULL)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [9LL]))))) ? (((((/* implicit */int) var_1)) << (((/* implicit */int) (signed char)11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2553310014U)))))))), (((((1004319895) != (((/* implicit */int) arr_2 [i_0])))) ? (max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_4 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(unsigned char)13])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))))))));
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
            var_22 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) arr_2 [i_0])) << (((1981398033U) - (1981398003U))))), (((/* implicit */int) ((2509677867U) < (arr_4 [i_0])))))) >= (arr_1 [i_0])));
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_8 [i_0] = (!(((/* implicit */_Bool) (~(1953378218U)))));
            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2])))))));
            arr_9 [i_0] = ((/* implicit */unsigned int) max(((~(((int) var_4)))), ((~((~(((/* implicit */int) var_5))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        arr_19 [i_3] [i_3] [i_5] = ((/* implicit */signed char) min((((unsigned long long int) arr_5 [i_4 + 4])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_4 + 4])) ? (arr_13 [i_3] [(short)18] [i_4 + 4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_3] [i_4 + 4]))))))));
                        arr_20 [21LL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [6LL] [6LL]));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) (signed char)10);
            var_25 ^= ((/* implicit */unsigned int) var_10);
        }
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1953378221U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152)))))))))) >= (var_15)));
    var_27 = ((/* implicit */short) var_1);
}
