/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127161
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) var_2)))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_1 [i_0])), (((((((/* implicit */long long int) arr_1 [i_0])) == (var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
        arr_5 [i_0] = var_7;
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (17055095340284082155ULL))))))) : (arr_1 [i_0])));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            var_10 = ((/* implicit */unsigned long long int) (unsigned short)36546);
            arr_13 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned short) var_3)), (arr_2 [i_1] [i_2])));
        }
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            arr_17 [i_1] [i_3 + 4] [i_1] = ((/* implicit */_Bool) arr_2 [i_3] [i_3 - 1]);
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                arr_20 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) / ((+(((arr_1 [i_1]) / (((/* implicit */int) arr_7 [i_4] [i_3]))))))));
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max(((~(-1909556917751376942LL))), (((/* implicit */long long int) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_1))))))))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_24 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_18 [i_5] [i_1] [i_1] [i_1 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) <= (var_0)));
                var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (arr_15 [i_1] [i_1]) : (arr_15 [i_1] [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_5 - 1])))))));
            }
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2286)));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((signed char) ((arr_25 [i_7] [i_7 - 1]) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [2] [i_6] [i_1 - 1] [2]))) : (var_9))) : (var_7)))))));
                        arr_29 [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) max(((unsigned char)0), (((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)0))))));
                    }
                } 
            } 
        }
        var_15 += ((/* implicit */short) ((arr_25 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned long long int) var_7)), (min((var_0), (arr_18 [i_1] [(unsigned short)12] [i_1 + 2] [(unsigned short)12])))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 2; i_9 < 11; i_9 += 2) 
            {
                arr_36 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((var_0) & (((/* implicit */unsigned long long int) arr_8 [i_1])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_23 [i_1] [i_8] [i_1])) & (arr_12 [i_1] [i_1] [i_9]))))))))));
                arr_37 [i_1] = ((/* implicit */_Bool) arr_10 [i_1] [i_1]);
                var_16 = ((/* implicit */_Bool) var_5);
            }
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_16 [i_1] [i_8] [i_8 - 1])))) != (((((/* implicit */_Bool) arr_32 [i_1 - 1] [i_1])) ? (arr_32 [i_1 + 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            arr_38 [i_1] [i_1] = ((/* implicit */signed char) var_7);
            var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)247)) || (((/* implicit */_Bool) (unsigned short)63275)))))), ((+(var_9)))));
            var_19 += ((/* implicit */unsigned char) var_6);
        }
        for (short i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))));
            var_21 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_28 [i_1 - 1] [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_1])))), (((/* implicit */int) max((arr_28 [i_1 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 2] [i_1]), (((/* implicit */unsigned short) var_3)))))));
        }
        arr_42 [i_1] = ((/* implicit */signed char) min(((~(var_9))), (((/* implicit */long long int) arr_23 [i_1] [i_1 - 1] [i_1]))));
    }
    for (unsigned short i_11 = 3; i_11 < 14; i_11 += 1) 
    {
        arr_45 [i_11] = ((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned char)169)), (((((((/* implicit */int) var_3)) + (2147483647))) << (((var_7) - (2777549081641269258LL)))))))));
        arr_46 [i_11] = ((/* implicit */unsigned long long int) ((arr_44 [i_11]) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [10ULL] [i_11 - 3])), (var_3)))))));
        arr_47 [i_11 - 3] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_43 [i_11 - 2] [i_11 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [6ULL] [6ULL]))) : (((((/* implicit */_Bool) arr_2 [i_11] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_8))))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_44 [i_11])))))));
        arr_48 [i_11] [i_11] = ((((/* implicit */_Bool) max((max((var_5), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) max((var_4), (((/* implicit */unsigned char) arr_0 [22] [22])))))))) ? ((-(((((/* implicit */_Bool) arr_1 [18])) ? (arr_43 [i_11] [i_11]) : (arr_43 [i_11] [i_11]))))) : (((((6036264319621728758LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [(unsigned short)6] [i_11]))))))));
    }
}
