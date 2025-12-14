/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10701
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 = 18446744073709551610ULL;
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    var_20 += ((unsigned long long int) max((14968680558791078691ULL), (7669945146525533643ULL)));
                    var_21 = min((8780769390941877038ULL), (18013559919256386896ULL));
                    var_22 = 17639821769697859399ULL;
                }
                for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_23 = max((((arr_15 [i_5] [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5] [i_5]) | (((17752694281012396345ULL) & (4893588105724511187ULL))))), (((((/* implicit */_Bool) 18013559919256386896ULL)) ? (806922304011692205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [13ULL] [i_1]) < (18013559919256386896ULL))))))));
                                arr_16 [i_5] [i_5] [i_5] [i_5] [i_4] [i_5] [i_5] = ((unsigned long long int) (~(1656988120846895530ULL)));
                                arr_17 [i_0] [i_0] [12ULL] [i_0] [i_4] = ((((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? ((~(var_0))) : (((((/* implicit */_Bool) 14186958767724091256ULL)) ? (16789755952862656085ULL) : (15054568991180615801ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_14), (var_5))) != (((((/* implicit */_Bool) 5486037101945166457ULL)) ? (868086599345162498ULL) : (arr_9 [i_4]))))))));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_18))))));
                }
                for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    arr_20 [i_6] [0ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((0ULL) < (5486037101945166457ULL)));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((unsigned long long int) 3478063514918472924ULL))));
                    var_26 = arr_18 [i_6] [i_6] [i_6 - 1] [i_6 - 1];
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_27 = 433184154453164720ULL;
                    arr_24 [i_7] [i_7] [i_0] [i_0] = (-((+(var_11))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_30 [2ULL] [i_1] = arr_8 [i_9] [i_8] [i_1] [i_0];
                                var_28 = (-(((10724445672781238674ULL) & (18446744073709551594ULL))));
                            }
                        } 
                    } 
                }
                arr_31 [i_1] [i_0] = (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_5) : (var_9))));
            }
        } 
    } 
    var_29 = ((((((((/* implicit */_Bool) var_10)) ? (var_16) : (var_10))) - (((18446744073709551594ULL) / (13953552805274148486ULL))))) - (((var_1) - (3738747254117655366ULL))));
    var_30 *= var_14;
}
