/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144407
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
    var_19 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_1)));
    var_20 = ((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (549755813887ULL)))) <= (((/* implicit */long long int) ((/* implicit */int) max((max((var_2), (var_2))), (((/* implicit */signed char) ((((/* implicit */int) (short)17254)) <= (((/* implicit */int) (short)17224)))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((long long int) ((((/* implicit */_Bool) (short)-17219)) ? (((((/* implicit */int) (short)6180)) / (((/* implicit */int) (signed char)64)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)151)), (var_4)))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (unsigned short)37455))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_23 = ((/* implicit */short) ((unsigned int) ((short) (short)-18631)));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 4; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((signed char) arr_9 [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 2])))));
                            arr_13 [i_1] [i_2 - 1] [i_3] [i_2] [(unsigned short)18] = ((((/* implicit */_Bool) (unsigned char)98)) ? (arr_3 [i_1 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6657))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((549755813887ULL) * (var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))))))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */int) var_17)) >= (((/* implicit */int) (signed char)-2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 824332078U)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (signed char)-1))))) : (((unsigned long long int) arr_8 [i_1] [(unsigned char)7] [i_1] [i_4] [11] [i_3])))))));
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (short)17254)) : (arr_4 [i_1] [i_1] [i_3]))) : (((((/* implicit */int) (signed char)1)) * (((/* implicit */int) (unsigned short)27485))))));
                            var_27 = ((/* implicit */unsigned char) ((long long int) (signed char)-75));
                            var_28 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)41));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_6 - 2] [i_4] [i_3] [2] [i_1 - 1])) ? (arr_4 [i_1 + 4] [i_6 + 1] [(signed char)0]) : (((((/* implicit */int) var_12)) | (((/* implicit */int) (short)-17255)))))))));
                        }
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */signed char) max((var_31), (((signed char) arr_2 [i_1]))));
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))))))));
    }
}
