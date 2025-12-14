/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156482
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
    var_17 -= 1023U;
    var_18 = ((/* implicit */_Bool) min((min((max((var_10), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)1)) || (((/* implicit */_Bool) 4294966273U))));
                            arr_10 [i_0] [i_0] [i_0 - 2] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)-77))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((((arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 2]) & (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) 4294966273U))));
                            var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) var_1)), ((+(arr_4 [i_0 + 1] [i_0] [i_0])))));
                            var_23 = ((/* implicit */long long int) arr_6 [i_4] [i_1] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    for (int i_7 = 3; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_7 [i_0 - 2]), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_0]))))) ? ((~((+(arr_2 [i_7] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_23 [i_0 + 1] [i_0] [i_0] [i_0 - 1] &= ((/* implicit */int) min(((unsigned short)36102), (((/* implicit */unsigned short) (unsigned char)204))));
                            arr_24 [3] [i_1 + 1] [i_1] [i_1 + 3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (max((arr_16 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294966252U)) ? (var_14) : (((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            {
                arr_29 [i_8] = min((((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) : (min((1734870798U), (((/* implicit */unsigned int) (unsigned char)183)))))), (var_7));
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(var_14)))), (var_9)));
                            var_26 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_11] [i_9]))))), ((+(((/* implicit */int) arr_27 [i_10 - 1]))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1676714515U)) ? (((/* implicit */unsigned long long int) 4294966253U)) : (var_9)))))) ? ((-(max((((/* implicit */unsigned int) -1002435396)), (4135640373U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10 - 1]))) != (1734870808U))))))))));
                            var_28 = ((/* implicit */unsigned short) ((min((arr_35 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]), (arr_35 [i_10] [i_10 - 1] [i_10] [i_10 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (unsigned char)183)), (9297259403708857695ULL))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (~(max((((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (arr_35 [i_8] [(signed char)6] [(signed char)6] [(signed char)6]))), (((/* implicit */unsigned long long int) arr_30 [i_8] [(signed char)1] [i_8])))))))));
                arr_38 [i_9] [14ULL] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_37 [i_8] [(unsigned char)12] [i_8] [i_8]) : (((/* implicit */int) ((arr_37 [i_8] [i_9] [i_9] [i_9]) <= (((/* implicit */int) var_5)))))))) ? ((+(((/* implicit */int) arr_30 [i_8] [i_8] [i_9])))) : ((((~(((/* implicit */int) arr_25 [i_8])))) + (((((/* implicit */int) arr_28 [i_9] [i_9])) + (1018152123)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 1; i_12 < 17; i_12 += 1) 
    {
        for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            arr_51 [i_14] [i_14] [i_13 + 1] [i_12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_28 [i_12 + 1] [i_12 + 2])) ? (((/* implicit */int) arr_28 [i_12 + 1] [i_12 + 2])) : (((/* implicit */int) arr_28 [i_12 + 1] [i_12 + 2])))), (((/* implicit */int) ((4294966286U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_12 - 1] [i_12 + 2]))))))));
                            var_30 |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) <= (4294966253U))) ? (((((/* implicit */int) arr_31 [i_12] [i_12] [i_15])) + (((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) (signed char)-16))));
                        }
                    } 
                } 
                var_31 |= ((/* implicit */int) (+(min((arr_40 [i_12]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_12 - 1] [i_12 - 1] [i_13])))))))));
                var_32 = ((/* implicit */short) arr_37 [i_12 + 2] [i_12 - 1] [i_12] [i_12 - 1]);
            }
        } 
    } 
}
