/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102416
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */short) min((((/* implicit */int) arr_8 [5] [i_2] [5] [i_0])), ((-((~(((/* implicit */int) var_7))))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483632)) ? (((/* implicit */unsigned int) -2147483632)) : (4124739441U)));
                        var_15 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_7 [i_0] [7LL] [i_2] [i_1 - 1]))))));
                    }
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-2147483634) != (2147483631))))) : (((((/* implicit */_Bool) -2147483627)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) -1451981964)) ? (170227837U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-30957)))))))), (min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4124739450U)) && (((/* implicit */_Bool) arr_6 [i_2])))))))));
                    }
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 170227854U))) > (((((/* implicit */int) var_4)) / (var_0)))))), (arr_13 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5 + 1])));
                        var_19 = ((/* implicit */long long int) min(((+(2445507610U))), (((/* implicit */unsigned int) (unsigned char)67))));
                        var_20 = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                        var_21 = ((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_5 - 1]);
                    }
                    var_22 ^= ((/* implicit */int) min((((unsigned char) min((((/* implicit */int) (short)-24838)), (var_6)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-2418)))))));
                    var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(arr_15 [1ULL] [i_0] [1ULL] [4U] [i_2])))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1]))))) ? (min((((/* implicit */unsigned int) (unsigned short)39005)), (3565552794U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1] [i_2] [i_1 + 1]))))) : (((/* implicit */unsigned int) ((arr_8 [11ULL] [i_2] [i_1 - 1] [i_2]) ? (((/* implicit */int) arr_8 [i_0] [11LL] [i_1 - 1] [i_2])) : (((/* implicit */int) (unsigned short)26547)))))));
                }
            } 
        } 
    } 
}
