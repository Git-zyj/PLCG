/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15880
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
    var_16 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) | (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 210499893254154994ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (15U)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 3123594363U)))))));
            var_18 |= ((/* implicit */unsigned char) arr_2 [i_1] [i_0]);
            var_19 = ((/* implicit */short) 1171372955U);
            arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */unsigned long long int) 4294967266U)) : (((((/* implicit */_Bool) (short)-16060)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17980))) : (5868566796989165743ULL))))) * (((/* implicit */unsigned long long int) 15U))));
        }
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0]);
            var_20 -= ((/* implicit */long long int) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [(signed char)0] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [2ULL] [i_2] [2ULL]))))));
        }
        var_21 += ((/* implicit */unsigned long long int) arr_4 [i_0] [6ULL] [i_0]);
        arr_9 [i_0] = ((/* implicit */int) var_1);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned int i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1376957874U)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (short)18003))));
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-17980))));
                        var_24 ^= ((/* implicit */int) max((((/* implicit */unsigned int) var_11)), (min((max((((/* implicit */unsigned int) (unsigned char)74)), (1171372933U))), (((/* implicit */unsigned int) ((arr_12 [i_0] [i_0] [(short)0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))))))))));
                        arr_18 [i_0] [i_0] [i_3] [i_3] [(unsigned short)0] [i_5 - 1] = ((/* implicit */int) arr_0 [i_3] [i_3]);
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) var_6)));
    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (var_15)))) ? (((var_15) >> (((var_15) - (860441772))))) : (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */int) var_13))))))), (max((max((var_4), (2918009438U))), (((((/* implicit */_Bool) 720992677689132185LL)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3294)))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            {
                arr_24 [i_6] [(short)0] = ((/* implicit */unsigned long long int) ((unsigned char) min((min((((/* implicit */unsigned long long int) arr_23 [i_6] [i_6] [i_6])), (arr_22 [i_7]))), (((((/* implicit */_Bool) 1044489636U)) ? (arr_21 [4ULL] [i_6] [7U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)21] [(unsigned char)1] [i_6]))))))));
                var_27 = ((/* implicit */int) min((arr_22 [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_20 [i_6] [i_7]))) > (((/* implicit */int) ((short) (unsigned char)0))))))));
                var_28 = ((/* implicit */unsigned short) max((13770286086752952184ULL), (((/* implicit */unsigned long long int) (unsigned short)65513))));
                arr_25 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-3273)) * (((/* implicit */int) (signed char)12))))) ? (arr_21 [i_7] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) (unsigned short)23)) : (arr_20 [i_6] [i_6])))) ? (((unsigned int) (short)32767)) : (((/* implicit */unsigned int) arr_20 [i_7] [i_6])))))));
                arr_26 [i_7] = ((/* implicit */short) ((signed char) min((arr_23 [1] [i_6] [i_7]), (arr_23 [i_6] [i_6] [i_7]))));
            }
        } 
    } 
}
