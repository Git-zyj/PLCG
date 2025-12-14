/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117966
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
    var_11 = ((/* implicit */int) var_9);
    var_12 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                            {
                                var_13 = ((/* implicit */long long int) (~(max((8791592833954582570ULL), (18446744073709551615ULL)))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [6]) >= (arr_7 [(_Bool)1]))))) : (((max((var_8), (arr_12 [(short)5]))) >> (((((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4])) - (9969))))))))));
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((9655151239754969041ULL), (12ULL)))) ? (((/* implicit */unsigned long long int) ((-7607974637298479717LL) ^ (((/* implicit */long long int) 500583187U))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_4])), (18446744073709551615ULL))))))));
                                var_16 = ((/* implicit */_Bool) var_5);
                            }
                            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_2 [i_0]))), (((((/* implicit */_Bool) 9655151239754969047ULL)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_1])) : (-444287484)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)19888)) : (var_4))) > ((~(arr_7 [i_0])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-7512)) ? (((/* implicit */unsigned int) var_4)) : (arr_15 [9ULL] [i_1 - 3] [i_1] [9ULL] [(short)1]))) <= (((((/* implicit */_Bool) (short)-19889)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                                var_17 &= ((/* implicit */short) ((long long int) (~(var_10))));
                                var_18 = ((/* implicit */signed char) ((unsigned int) max((arr_3 [i_0] [i_2]), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_5])))));
                            }
                            var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)-19888), (((/* implicit */short) var_6)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8791592833954582575ULL)) ? (8791592833954582546ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) != (9ULL))))) : (8791592833954582535ULL)))));
                            var_20 = ((/* implicit */signed char) arr_13 [i_0]);
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 3] [i_0]))));
                arr_18 [(signed char)9] [i_0] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_1] [i_1 + 3] [i_1 + 3] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) % (var_1))))) > (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_2 [i_1])) : (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1 - 2] [i_1] [i_0]))) : (arr_13 [i_1])))))))));
                var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1 + 2] [i_1])) : (((/* implicit */int) (signed char)106))))) ? (((/* implicit */int) min(((short)-6), (arr_11 [i_0] [i_1] [i_1 - 3] [i_0] [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)65535))))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [(short)8])) : (((/* implicit */int) arr_6 [i_1]))))) | (((arr_5 [i_0] [i_0] [i_0]) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) - (7162)))))))));
            }
        } 
    } 
}
