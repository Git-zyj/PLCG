/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150734
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [0])) && (((/* implicit */_Bool) var_2)))))))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) var_9)))))) * (((var_10) ? (2455262371U) : (var_6)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((arr_2 [i_0]) == (arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) min((var_12), (arr_1 [i_0] [i_1]))))))) | (min((arr_0 [i_1 + 1]), (((/* implicit */long long int) var_8))))));
            arr_7 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((unsigned int) arr_1 [i_1] [i_0])) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            arr_8 [i_0] [i_0] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0]))))), (arr_0 [i_1 - 1])))));
            var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (-5178752832845133455LL)));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    {
                        arr_19 [i_5 - 1] [i_4] [i_3] [i_3] [i_2 - 2] |= var_8;
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5 + 2] = ((/* implicit */_Bool) ((unsigned short) ((int) 2455262371U)));
                    }
                } 
            } 
        } 
        arr_21 [i_2] [0] = ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 2])) && (((/* implicit */_Bool) (+(1839704924U)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((_Bool) min((min((((/* implicit */unsigned int) (unsigned short)21660)), (var_6))), ((~(1839704924U))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), ((((!(((/* implicit */_Bool) arr_24 [i_6] [i_9])))) && (((((/* implicit */int) arr_24 [i_8] [i_6])) >= (((/* implicit */int) arr_24 [i_6] [i_6]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned short i_12 = 4; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_40 [i_12] [i_11] = min((min((((((/* implicit */_Bool) (unsigned short)33453)) ? (262016U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_11] [i_11]))))), (((/* implicit */unsigned int) (unsigned short)25103)))), (((/* implicit */unsigned int) (unsigned short)3)));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)60672)) : (((/* implicit */int) min((var_7), (arr_32 [i_12 - 1] [i_12] [i_12] [i_12] [i_12]))))));
                            var_18 += ((/* implicit */unsigned short) arr_27 [i_12 - 4] [i_12 - 4] [i_12] [i_12 + 1]);
                        }
                    } 
                } 
                arr_41 [i_7] = (-(((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_32 [i_6] [i_7] [i_7] [i_6] [i_6]))))));
            }
        } 
    } 
}
