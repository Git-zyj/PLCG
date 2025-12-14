/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112656
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
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_12 = ((/* implicit */unsigned char) (~(((unsigned long long int) (unsigned char)10))));
                                var_13 = ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned char)152)));
                            }
                            for (signed char i_5 = 1; i_5 < 24; i_5 += 1) /* same iter space */
                            {
                                var_14 = 2199022731264ULL;
                                arr_18 [i_2] [i_1] [i_0] [i_3] [i_5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [i_2 + 3] [i_5 + 1] [i_5 + 1] [i_2])) ? (arr_14 [i_0 + 2] [i_1] [i_1] [i_3] [i_5] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_10))) : (min((arr_14 [i_5 - 1] [i_3] [i_2 - 1] [i_1] [(unsigned char)1] [(unsigned char)9]), (((/* implicit */unsigned long long int) var_0))))));
                                var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)9)) / (var_5))))), ((((~(var_10))) | (((/* implicit */unsigned long long int) arr_16 [i_0 + 2] [i_0 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 3]))))));
                                var_16 = var_3;
                                arr_19 [i_1] [i_2] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
                            }
                            for (signed char i_6 = 1; i_6 < 24; i_6 += 1) /* same iter space */
                            {
                                var_17 ^= ((/* implicit */unsigned char) (~(((unsigned long long int) var_9))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_7))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_2])) <= (((/* implicit */int) (unsigned char)102))))), (min((var_2), ((unsigned char)0)))))))))));
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483646)) ? (((((/* implicit */_Bool) 6111754582318855336ULL)) ? (((/* implicit */unsigned long long int) -1477968043)) : (6111754582318855322ULL))) : (((unsigned long long int) 62193799))));
                            }
                            var_21 = ((/* implicit */unsigned char) ((min(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) 62193799)))))) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1477968042)) ? (arr_12 [i_0] [i_0] [i_2] [(signed char)11]) : (((/* implicit */int) arr_15 [i_3] [i_0] [i_2 - 1] [i_0] [(signed char)16])))))))));
                        }
                    } 
                } 
                arr_22 [i_0] = ((int) var_0);
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((0ULL), (((unsigned long long int) 6111754582318855349ULL))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (14423151077341190373ULL)))) ? (((/* implicit */int) ((signed char) var_3))) : ((~(((/* implicit */int) var_8)))))))));
    var_23 = ((/* implicit */unsigned long long int) var_5);
    var_24 = ((/* implicit */unsigned long long int) var_8);
}
