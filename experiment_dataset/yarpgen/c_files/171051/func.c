/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171051
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [9LL] [i_2] [i_2] = ((((/* implicit */_Bool) min((((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (unsigned short)20277)))), (((/* implicit */int) max((((/* implicit */short) var_1)), (var_0))))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) arr_9 [(short)13] [i_3 + 1] [i_3] [8U] [8U] [i_2])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_0 [i_0])));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 8191LL)) ? (min((((/* implicit */unsigned long long int) min((var_8), (var_13)))), (arr_6 [i_3 + 1] [i_3 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_3] [i_3] [i_3 - 1] [i_3 - 1]), (arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))))));
                            var_16 &= ((/* implicit */signed char) ((((int) var_12)) + (((/* implicit */int) var_9))));
                            var_17 &= ((((/* implicit */_Bool) var_5)) ? (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (var_5))))));
                        }
                    } 
                } 
                var_18 = ((short) max((max((((/* implicit */unsigned long long int) var_3)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (var_13))))));
                arr_11 [i_0] [i_1] = var_3;
                var_19 = ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (var_3))))) : (min((arr_6 [10U] [i_1] [i_1]), (var_14)))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                {
                    arr_14 [i_0] [i_4] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) (signed char)-43))), (((unsigned long long int) (~(((/* implicit */int) (signed char)44)))))));
                    var_20 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [i_1]))), (((((/* implicit */_Bool) arr_8 [10ULL] [i_0] [i_0] [14LL] [i_0] [i_4])) ? (arr_4 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)8629)))))) : (((((/* implicit */_Bool) min((arr_7 [i_0] [(short)10] [6U] [(short)10]), ((short)16928)))) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)11815)) || (((/* implicit */_Bool) (unsigned char)7)))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5834)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)194))))), (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_5))))))));
                                var_22 = ((/* implicit */int) ((short) min((var_5), (((/* implicit */int) var_7)))));
                                var_23 &= ((/* implicit */int) min((min((min((var_6), (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (arr_16 [i_0] [(unsigned short)14])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0] [4U] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [13ULL] [i_0] [i_0] [i_0])))))));
                                arr_21 [(_Bool)1] [i_6] [i_7] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) arr_26 [i_0] [i_1] [i_5] [i_8] [i_8]);
                                var_25 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_5] [i_8] [i_9])) ? (((/* implicit */int) var_3)) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_26 &= ((/* implicit */unsigned long long int) ((short) var_12));
                                var_27 &= ((/* implicit */unsigned long long int) max((((unsigned int) arr_15 [i_8] [i_8] [i_0])), (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (var_13))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = min((var_3), (((/* implicit */short) var_1)));
    var_29 &= ((((/* implicit */_Bool) max((var_7), (var_7)))) ? (max((min((((/* implicit */unsigned long long int) var_5)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (var_2)))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_7))))) ? (((var_6) + (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_10))))))));
}
