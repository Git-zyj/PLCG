/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140139
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((arr_2 [i_1] [i_0]) & (4010346807U)))))) | (((((/* implicit */unsigned long long int) (~(4010346807U)))) | (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (var_17)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_6 [i_0] [(signed char)2])))) < (((/* implicit */int) arr_7 [i_3] [i_2])))))) > (((((/* implicit */_Bool) (~(4010346804U)))) ? (284620488U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                            var_20 = ((/* implicit */unsigned long long int) arr_1 [i_1 - 1]);
                            var_21 = ((/* implicit */_Bool) (signed char)101);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    for (unsigned int i_5 = 3; i_5 < 7; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_6] = ((/* implicit */signed char) max(((+((-(((/* implicit */int) arr_7 [i_0] [i_0])))))), (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 1] [i_5] [i_6])) : (((/* implicit */int) arr_9 [i_1] [(unsigned short)5] [i_1 - 1] [i_6] [i_6]))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_13 [i_0])) * (((/* implicit */int) arr_7 [i_0] [0U])))))) ? (((/* implicit */int) min((arr_4 [i_4 + 2] [i_5 - 1] [i_1 + 2]), (arr_4 [i_4 + 1] [i_5 + 1] [i_1 + 1])))) : ((((~(((/* implicit */int) arr_13 [i_0])))) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_0] [i_1 - 1] [i_1] [i_5] [i_0] [i_6])), ((unsigned short)30857))))))));
                                var_23 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) - (var_11)))) ? ((-(3621041642U))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4] [i_5] [i_6])) ? (arr_5 [i_1] [i_1] [i_5 + 2]) : (284620491U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3621041639U)) || (((/* implicit */_Bool) ((517219677U) >> (((1172812487U) - (1172812482U)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
    var_25 = ((/* implicit */_Bool) (-(min((var_11), (((/* implicit */unsigned long long int) var_1))))));
    var_26 = min((((/* implicit */unsigned int) max((((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)86))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (_Bool)1))))), (max((var_14), (((/* implicit */unsigned int) var_16)))))));
}
