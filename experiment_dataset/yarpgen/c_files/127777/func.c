/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127777
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
    var_14 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((((/* implicit */_Bool) ((unsigned long long int) 67100672U))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)0))))) : ((+(1179987744799487711LL))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    var_15 += ((/* implicit */_Bool) (short)-7402);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [2LL] [i_2 + 4] [i_2 + 4]), (arr_4 [i_2 + 1] [i_2 + 4] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_4 [i_2] [i_2 + 4] [i_2]))))) : (min((637656786332638219LL), (-637656786332638220LL)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_13 [i_0] [i_3 + 1] [i_2 + 4] [i_2 + 3] [i_0] [i_1] [(_Bool)1]))))));
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) (~(min((((arr_0 [i_0] [i_1]) ? (637656786332638203LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (637656786332638232LL)));
                        arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) max((min((arr_12 [i_3 - 1] [i_1] [i_1] [i_2 - 1] [6LL] [i_0]), (arr_12 [i_3 - 1] [i_1] [i_2] [i_2 - 1] [i_1] [i_1]))), (((arr_12 [i_3 - 1] [i_1] [i_2] [i_2 - 1] [9ULL] [i_0]) - (arr_12 [i_3 - 1] [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 - 1])))));
                    }
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((long long int) max((max((arr_2 [i_0]), (-1179987744799487712LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1] [(_Bool)1]))) ^ (-1961802036277173238LL))))))));
                    arr_20 [i_0] [i_5] [i_5] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) ((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) >= (((/* implicit */unsigned long long int) min((637656786332638208LL), (((/* implicit */long long int) arr_3 [i_5] [i_1] [i_5])))))))) + (max((((((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_5])) << (((((/* implicit */int) arr_9 [i_0] [(signed char)4])) - (46))))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)38))))))))) : (((/* implicit */_Bool) ((((/* implicit */int) ((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) >= (((/* implicit */unsigned long long int) min((637656786332638208LL), (((/* implicit */long long int) arr_3 [i_5] [i_1] [i_5])))))))) + (max((((((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_5])) << (((((((/* implicit */int) arr_9 [i_0] [(signed char)4])) - (46))) - (188))))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)38)))))))));
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_5 [i_0]);
                }
                for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 3) 
                {
                    arr_26 [i_0] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned long long int) var_7)) / (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_1])) ? (arr_18 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (6689518160296343712LL) : (((/* implicit */long long int) 105922173))))) ? (105922158) : ((+(1879048192)))))) : (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_1] [(signed char)9] [i_6 + 3]))) : (arr_7 [i_6] [i_1] [i_0]))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_13 [i_0] [10LL] [i_6 + 2] [i_0] [i_6] [i_6 + 2] [i_6])) - (((/* implicit */int) ((unsigned char) var_5)))))))));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((var_2) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_4))))))) == ((-(((/* implicit */int) (short)-25969))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_1] [i_6] [i_6] [i_7] [i_7 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)11301))) << (((/* implicit */int) (!(arr_30 [i_0] [i_1] [(_Bool)1] [i_0]))))))) ? ((~(((((/* implicit */int) (unsigned short)54164)) | (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1] [i_6] [i_8])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)18))))))));
                                arr_34 [i_0] [i_0] [(signed char)3] [i_6] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)223)), (((((/* implicit */_Bool) (unsigned short)54164)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_0] [i_6])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)32755))))) < (5255683074891817819LL))))));
                                var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) arr_19 [i_7 - 1] [i_0] [i_0] [i_6 + 1])))), (min((((/* implicit */int) arr_19 [i_7 - 1] [i_0] [i_0] [i_6 - 4])), (-105922183)))));
                                var_22 -= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)32))))) | (((((/* implicit */_Bool) arr_28 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_10 [i_0] [i_1] [i_6] [i_6] [i_7] [i_6])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(min((-7823161609911906556LL), (((/* implicit */long long int) var_1))))))), (((max((var_11), (var_11))) ? (((((/* implicit */_Bool) (short)-4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))) : (((/* implicit */unsigned long long int) (+(var_7))))))));
}
