/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121935
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
    var_13 &= ((/* implicit */unsigned char) (-((-(((((/* implicit */int) var_2)) << (((((/* implicit */int) var_3)) - (6539)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 &= (-((-(((/* implicit */int) (signed char)-120)))));
                    arr_7 [i_0] [i_1] [i_1 - 2] [(_Bool)1] = ((/* implicit */long long int) (-(min((((arr_4 [i_0] [i_0] [i_2]) - (((/* implicit */int) (signed char)120)))), (((((/* implicit */int) (signed char)123)) & (((/* implicit */int) var_2))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (0ULL))))))));
            var_16 = ((/* implicit */_Bool) (-((-(((/* implicit */int) max(((signed char)119), (var_9))))))));
            var_17 = ((/* implicit */unsigned int) (-(arr_1 [i_0])));
        }
        var_18 = ((/* implicit */_Bool) (-(max(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(signed char)4])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)-117))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        arr_13 [16ULL] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)-117)) : (arr_8 [i_4] [i_4 + 2])));
        var_19 = ((/* implicit */unsigned int) arr_10 [i_4]);
        arr_14 [i_4] = ((/* implicit */signed char) ((unsigned char) arr_9 [i_4 - 1] [i_4 + 2] [i_4 + 2]));
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        var_20 = ((/* implicit */short) arr_15 [i_5 + 1]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5 - 2] [i_5 - 2] [i_5 + 2] [i_5])) ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
    }
    var_22 &= ((/* implicit */_Bool) var_0);
    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)3))))) : (var_6))) >> (((max(((-(15663170639692057463ULL))), (((/* implicit */unsigned long long int) var_12)))) - (2783573434017494142ULL)))));
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 18; i_8 += 4) 
                {
                    for (signed char i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                            var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_9] [i_9])), (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (arr_25 [i_8])))))), (max((((/* implicit */unsigned long long int) var_5)), (arr_6 [i_8 - 1] [i_9 - 1] [i_9 + 2] [i_8 - 1])))));
                            arr_27 [i_8] [i_7] [i_7] [i_7] = ((/* implicit */int) 1961844858U);
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-120))));
                var_27 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((2718704136U), (var_6)))) ^ (((unsigned long long int) var_3))));
                arr_28 [i_6] [i_6] = ((/* implicit */unsigned char) var_11);
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 4) 
                    {
                        {
                            arr_33 [i_7] [i_10] [i_10] [i_6] [i_7] &= ((/* implicit */signed char) (((~(((unsigned long long int) 0LL)))) | (((/* implicit */unsigned long long int) min((((2333122438U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))))))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((arr_4 [i_6] [i_7] [i_11]) << (((arr_5 [i_6] [i_7] [i_10]) - (5295700251301365492ULL)))))))) ? (arr_9 [i_10 - 1] [i_10 - 1] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1961844858U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
