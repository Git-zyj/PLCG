/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125036
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
    var_10 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_5)))) <= (var_1)))) == (((/* implicit */int) var_8))));
    var_11 = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) 679698010980911585LL))));
    var_12 = var_7;
    var_13 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [i_2]))))));
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 2] [i_4])) && (((/* implicit */_Bool) arr_0 [i_0 + 2])))) ? (arr_2 [i_0 + 2] [i_0]) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 2]))));
                                arr_13 [(signed char)10] [i_2] [i_2] [(signed char)10] [(signed char)10] [i_3] [i_4] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 - 1]))) / (((arr_8 [i_0 - 1]) | (arr_8 [i_0 - 1])))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((((9327278437396780880ULL) % (12716278708653580588ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1])) - (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0 + 2] [i_0] [i_0 - 2])))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                            {
                                var_17 += ((/* implicit */unsigned int) (((~(arr_19 [i_5] [i_0]))) != (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_1] [i_0 - 2]))));
                                arr_21 [i_0 + 2] [i_1] [i_5] [i_0] [4] = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_0 + 2] [i_5 + 1] [i_5 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_10 [i_0 + 2] [i_5 - 1] [i_6])) + (6084))) - (19)))));
                                var_18 = ((/* implicit */int) arr_0 [i_0]);
                                var_19 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_5]))))));
                            }
                            var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_0 + 2])) ? (arr_5 [i_6] [i_0 - 1]) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
