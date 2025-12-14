/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184519
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_14 = (+((+(((((/* implicit */_Bool) 3082618591789439877ULL)) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] = (+(arr_1 [i_0] [i_0]));
            arr_6 [i_0] = arr_2 [i_0] [i_1] [i_1];
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_2 [i_2] [i_2] [i_2]) : (1814848679385938392ULL));
        arr_12 [i_2] [i_2] = (+(arr_2 [i_2] [i_2] [i_2]));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((((/* implicit */_Bool) 290651042991121010ULL)) && (((/* implicit */_Bool) 2112546657385049661ULL)))), ((!(((/* implicit */_Bool) arr_14 [i_3])))))))));
        var_15 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 123145302310912ULL))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (arr_8 [i_3])));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        arr_24 [i_5] = min((min((((unsigned long long int) arr_0 [i_6])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3] [i_4])) || (((/* implicit */_Bool) arr_0 [i_6]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11957399411435829079ULL)) ? (16041593671109119806ULL) : (arr_17 [i_4]))))))));
                        arr_25 [i_3] [7ULL] [7ULL] [i_3] [i_3] = arr_20 [i_6] [i_3];
                        var_17 |= ((((/* implicit */_Bool) arr_3 [i_6] [i_3])) ? (((((/* implicit */_Bool) min((arr_22 [i_3] [i_3] [i_3] [i_3]), (8083474809506212820ULL)))) ? (((unsigned long long int) arr_14 [i_6])) : (((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [i_3])) ? (arr_7 [i_4 + 1]) : (10363269264203338819ULL))))) : ((-((+(9781004713934851472ULL))))));
                        arr_26 [i_3] [i_4 - 2] [i_5] [i_6] = arr_14 [i_5];
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_7] [i_3]))) ? (((unsigned long long int) (~(427022633751071937ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_7 + 2])) && (((/* implicit */_Bool) arr_7 [i_7 + 1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 6803043321739575022ULL))))));
                        var_20 = ((unsigned long long int) (!((!(((/* implicit */_Bool) arr_34 [i_9]))))));
                    }
                } 
            } 
            arr_35 [i_7] = ((arr_33 [i_3] [i_3] [i_3] [i_3]) - (arr_8 [i_7]));
        }
    }
    var_21 -= 7ULL;
}
