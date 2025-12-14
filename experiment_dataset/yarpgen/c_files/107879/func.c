/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107879
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)45097)), ((+((-(arr_1 [i_0 - 2] [i_1])))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0] [i_0]));
                var_19 = ((((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2]) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53128))) : (4724005058904120795LL)))))))) : (20U));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_20 = 6211048431904817348LL;
                            arr_14 [i_0] [i_1] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((-848742570115070413LL) <= (-5606564465901290712LL))))) + (arr_6 [i_0] [i_0] [i_0 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_14)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_28 [i_8] [i_4] [9LL] [i_4] = ((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_5] [i_6] [i_7] [i_8]);
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_36 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49560)) && (((/* implicit */_Bool) ((((-5606564465901290686LL) > (((/* implicit */long long int) arr_23 [i_4] [i_5] [i_6] [1LL] [10U] [i_4])))) ? (((/* implicit */int) max((var_1), ((unsigned short)25085)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_1)))))))));
                                arr_37 [i_4] [i_4] [i_4] [i_9 + 1] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_17 [i_9 + 1])))));
                                arr_38 [i_4] [21U] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_17);
                            }
                        } 
                    } 
                    var_22 = ((((((((/* implicit */_Bool) (unsigned short)39392)) ? (arr_18 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_4] [i_5] [i_5] [i_6]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_5] [i_6] [i_5] [i_6]))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_24 [i_4] [i_5] [i_5] [i_5]), (arr_27 [i_4] [i_4] [16U] [i_4]))))))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */long long int) var_12);
}
