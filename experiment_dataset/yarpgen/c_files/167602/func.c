/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167602
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
    var_14 = max(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_0))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)140)) | (((/* implicit */int) (unsigned char)109)))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9)))))));
    var_15 = ((/* implicit */signed char) (((~((~(((/* implicit */int) (short)-12249)))))) ^ (min((((var_8) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))), ((~(var_0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > ((+(((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */signed char) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) 1640046922695366107ULL)) || (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0)))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) != ((+(arr_5 [(short)18] [i_2] [(signed char)0]))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((arr_11 [(unsigned char)0] [i_1] [i_2] [i_3] [i_2]) ? (((/* implicit */int) (short)12248)) : (((/* implicit */int) arr_9 [i_0] [i_1 + 3])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [12ULL])) < (((/* implicit */int) var_11)))))))) : (min((arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (((/* implicit */unsigned long long int) var_11))))));
                            var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [(short)20] [i_1 + 2]))), (((/* implicit */int) ((arr_3 [i_1 + 2] [i_1 + 2]) != (((/* implicit */int) var_9)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (unsigned char)146)))), (((var_3) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)231)))))), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_5))))))));
                            var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) <= (var_0))))));
                            var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_2])) ? (max((var_0), (var_0))) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_12)))) : (((/* implicit */int) ((unsigned char) var_8)))))));
                        }
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((arr_3 [i_1 - 2] [i_1 - 2]) <= (arr_3 [i_1 - 2] [i_1 - 2])))) : (((/* implicit */int) min((((/* implicit */short) var_4)), (min((arr_14 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (((/* implicit */short) (unsigned char)177)))))))));
                            arr_17 [i_6] [i_3] [i_0] [(_Bool)1] [i_1 + 2] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((min((min((var_12), (((/* implicit */unsigned long long int) var_0)))), ((~(7459592917119199692ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)25))))));
                        }
                        var_23 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_1 + 3] [i_1 + 2])))) ? (var_12) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2])))))));
                        var_24 = ((/* implicit */unsigned long long int) var_2);
                        var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_9)))), ((+(((/* implicit */int) var_11)))))))));
                    }
                    var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))), (((/* implicit */int) max((var_13), (((/* implicit */short) var_6)))))))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_11))))) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_2 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))))));
                }
            } 
        } 
    }
}
