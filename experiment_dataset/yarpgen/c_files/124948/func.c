/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124948
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((((arr_1 [i_0]) / (arr_1 [i_0]))) <= (arr_1 [i_0])));
        var_13 = ((/* implicit */unsigned char) (unsigned short)49813);
        var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_0)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15723))) & (var_4))) : (var_11))), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_8)) ^ (((/* implicit */int) (short)-12061)))))))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */short) var_6);
                        var_16 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-12049)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) arr_3 [i_1 - 1] [i_4 + 2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (max((-800605465), (((/* implicit */int) arr_15 [i_1])))) : (((/* implicit */int) arr_0 [i_1 - 1] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (1946182808U))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_5] [i_5]))) : (arr_13 [i_1] [i_5] [i_5]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)12070)))))))));
            arr_16 [(signed char)0] [i_1] = ((/* implicit */unsigned short) var_8);
            arr_17 [i_1] = ((/* implicit */int) var_7);
            arr_18 [i_1] [i_1 + 2] [i_1] = ((/* implicit */int) ((max((arr_9 [(_Bool)1] [i_1 - 1]), (arr_9 [i_1] [i_1 + 2]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))))));
            var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-12061)) ? (var_9) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_7 [i_1]))))), (1857509946865330651ULL)));
        }
        for (int i_6 = 2; i_6 < 8; i_6 += 3) 
        {
            var_19 |= ((/* implicit */unsigned short) ((short) (-(arr_13 [i_1 + 1] [i_6 + 3] [i_6 + 3]))));
            var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_6 [i_6 + 3] [i_6 + 3])) ? (max((((/* implicit */long long int) 1359882742U)), (arr_2 [i_6]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1] [i_1 + 1] [i_1 + 1])) & (((/* implicit */int) (short)12061)))))))));
        }
        arr_21 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1])) ? (((var_11) + (((/* implicit */unsigned int) -1967215323)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)11496)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 3; i_7 < 11; i_7 += 2) 
        {
            arr_25 [i_1] [i_1] [i_7] = arr_6 [2ULL] [9LL];
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 1359882742U))));
            var_22 ^= ((/* implicit */unsigned int) arr_15 [(unsigned char)2]);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) arr_7 [0ULL])), (var_1)))) + ((-(((/* implicit */int) arr_7 [(unsigned short)0])))))))));
        }
    }
    var_24 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
}
