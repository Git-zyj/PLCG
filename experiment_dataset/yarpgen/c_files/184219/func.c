/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184219
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
    var_20 -= ((/* implicit */unsigned short) min((((((/* implicit */long long int) min((((/* implicit */unsigned int) var_19)), (var_16)))) / (((-1404328376620413122LL) ^ (-1404328376620413133LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32759)) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_13)))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) / (var_6))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_18)), ((unsigned short)21765)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_22 = (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_4 [i_0 - 1])), (var_15))), (((/* implicit */unsigned long long int) arr_6 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(short)18] [i_0] [(unsigned char)12] &= min((min((((/* implicit */unsigned long long int) 3871139192U)), ((+(var_15))))), (((/* implicit */unsigned long long int) (-(arr_4 [i_0])))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(short)14])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1]))))), ((~(arr_4 [i_0 - 1]))))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (unsigned short)40941))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30306)) - (((/* implicit */int) arr_11 [14U] [i_3] [i_2] [i_0 - 2]))));
                        }
                    } 
                } 
            }
            for (short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) (unsigned short)35215);
                            var_27 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1 - 1] [i_0 + 1] [i_0 + 1]))) : (min((var_17), (((/* implicit */long long int) var_9)))))) >= (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (_Bool)1)), (var_8))) <= (((/* implicit */long long int) arr_21 [12ULL] [4U] [4U] [i_5] [8U] [i_5]))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_0 - 2] [i_1 + 2] [i_1 + 2] [13LL])), (arr_2 [i_0 + 1] [i_0 - 2]))))));
            }
            /* vectorizable */
            for (short i_8 = 2; i_8 < 20; i_8 += 3) 
            {
                var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) (_Bool)0))));
                arr_25 [i_0] [14ULL] [i_8] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
            }
            arr_26 [(signed char)12] [(signed char)12] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [(signed char)8]), (arr_1 [(short)18])))) != (((/* implicit */int) (unsigned short)35234))));
            var_30 = ((/* implicit */unsigned long long int) arr_22 [(_Bool)1] [i_1 + 2] [i_0] [i_0 - 1] [i_0] [i_0 - 1]);
            var_31 *= ((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)20)));
            var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_0 - 1] [i_0] [i_0 - 2] [i_0])), (1198512521U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0] [(short)10] [(unsigned short)3]))) * (var_6)))));
        }
        arr_27 [(short)16] [i_0] |= ((/* implicit */_Bool) arr_20 [(short)10] [(unsigned char)18] [(unsigned char)8] [i_0 + 1] [i_0 - 1]);
        arr_28 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */long long int) (+(1606966875U)))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1] [i_0]))) : (1404328376620413109LL)))))));
        arr_29 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_17 [i_0 + 1] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0 - 1] [1] [1] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    arr_35 [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (signed char)1)), (var_5))), (((/* implicit */long long int) (short)25595))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [4] [i_0 + 1]))) * (((((/* implicit */_Bool) (short)29058)) ? (((/* implicit */unsigned long long int) -1404328376620413105LL)) : (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (arr_4 [i_10 + 1]))))))))));
                    arr_36 [i_0] [i_9] [(_Bool)1] = ((/* implicit */signed char) min((((/* implicit */long long int) (((~(((/* implicit */int) var_18)))) ^ (((((/* implicit */int) (short)-32745)) - (((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_0] [(_Bool)1] [4ULL])))) ? (arr_24 [i_10 + 1] [i_10 + 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
    }
}
