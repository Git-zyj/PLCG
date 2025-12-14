/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149401
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_4 [i_4] [i_0])) + (max((max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2] [i_3 + 1] [i_4 - 1] [i_0])), (arr_13 [i_4] [i_3] [i_2] [i_1 + 4] [i_0]))), (((((/* implicit */_Bool) 1414396318105052989LL)) ? (-1LL) : (((/* implicit */long long int) -348166232)))))))))));
                                arr_15 [i_0] [i_2] [i_4 + 3] [i_3 + 1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)152))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (long long int i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((unsigned int) arr_20 [i_1 + 1] [i_1 + 3] [i_6]));
                            var_19 = ((long long int) min((arr_19 [i_6 + 1] [i_6] [i_6] [i_6 + 2]), (arr_19 [i_6] [i_6] [i_6] [i_6 + 2])));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((arr_13 [i_0] [i_1] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                /* LoopSeq 1 */
                for (long long int i_7 = 2; i_7 < 7; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_31 [i_8] [i_1] [i_8] [i_9] = ((/* implicit */int) min((arr_22 [i_7 + 3] [i_7 + 3] [i_7 - 1] [i_7]), (((/* implicit */unsigned long long int) (~(((-7180939001662987842LL) | (1414396318105052989LL))))))));
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 4] [i_1 + 4] [i_1 + 2] [i_1]))) <= (arr_14 [i_1 + 2] [i_1 + 4] [i_7 + 2] [i_7 + 3] [i_7 + 3] [i_7]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)4)), (15LL))))));
                        arr_36 [i_0] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_1 [i_1 + 4])))) ? ((~(arr_18 [i_1 + 3] [i_7 + 2] [i_10]))) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1 - 1] [i_7 - 1] [i_10]))));
                        arr_37 [i_10] = ((/* implicit */unsigned int) min(((((+(arr_26 [i_10]))) / (max((arr_25 [i_10] [i_10] [i_10] [i_10] [i_1] [i_0]), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) max((((/* implicit */int) var_1)), (arr_6 [i_0] [i_10]))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 7; i_11 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) arr_2 [i_1 + 3] [i_7 + 2]);
                        var_24 = ((/* implicit */int) ((arr_35 [i_1 + 1] [i_7 + 3] [i_7] [i_7 - 2]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1 + 1] [i_7 + 3] [i_11 - 1] [i_11] [i_11] [i_11])))));
                        var_25 = ((/* implicit */unsigned int) arr_17 [i_11 + 3] [i_11 + 3] [i_11 + 1] [i_11]);
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 7; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] = ((/* implicit */unsigned int) arr_24 [i_0]);
                        arr_45 [i_0] [i_7] = ((/* implicit */signed char) ((12ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_0] [i_1 + 3] [i_7 - 1] [i_12] [i_12] [i_12 + 1])) / (arr_5 [i_0] [i_1 + 3] [i_7 - 1] [i_12 + 3])));
                    }
                    var_27 = ((/* implicit */unsigned short) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)20)))), (((/* implicit */unsigned long long int) -2095883762))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((1ULL) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)51215)))))))) ? (-348166222) : (((/* implicit */int) (unsigned char)4))));
}
