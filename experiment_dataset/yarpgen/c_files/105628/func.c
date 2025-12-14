/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105628
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
    var_15 = ((/* implicit */int) ((var_11) >> (((/* implicit */int) ((4444435645733831931ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (var_12) : ((+(var_6)))))), (var_10)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) var_0))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? (((((/* implicit */int) arr_1 [i_0 + 1])) | (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) min((arr_1 [i_0]), (((signed char) var_10)))))));
        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_1]) << (((arr_6 [i_1]) - (7308308865511931164ULL)))))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_1])))) : ((-(var_10)))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_1]), (var_3)))) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) -1925439710))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) -1925439710)) && (((/* implicit */_Bool) arr_0 [13ULL]))))), (((int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))))))));
    }
    for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_20 *= ((int) ((arr_11 [i_5]) % (arr_11 [i_4])));
                                var_21 = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] = ((((/* implicit */_Bool) (-(arr_17 [18ULL] [i_2] [i_2 - 3] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [i_4] [i_4])) : (((arr_10 [i_2]) & (4444435645733831931ULL))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (~(arr_22 [i_2 - 1] [i_8] [i_4] [i_7])));
                                var_23 = var_9;
                            }
                        } 
                    } 
                    arr_28 [i_2] [i_2] [i_2 - 1] [6ULL] = ((/* implicit */int) arr_20 [2]);
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned long long int) (signed char)127);
    }
    var_25 ^= ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (var_6)))), (var_13)))));
}
