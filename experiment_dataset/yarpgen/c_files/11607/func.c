/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11607
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_2))));
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(9823705117752642080ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (max((((/* implicit */unsigned int) var_12)), (615820397U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [7LL] [i_2] [i_3] [(signed char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 3])) ? (arr_11 [i_1 - 2] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)7] [i_3] [i_1 + 1] [i_1] [i_1 - 3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_13 [i_1 - 3] [i_3] [i_1 - 2] [i_1 - 3] [i_1 - 3])))))) : (arr_2 [i_1 - 1] [i_1 - 1])));
                                arr_15 [i_0] [1LL] [i_2] [1LL] [(signed char)7] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0]))))) < (((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_3])) : (arr_1 [i_1]))))))) : (arr_2 [i_1 - 3] [i_1 - 2])));
                                var_15 = ((/* implicit */_Bool) (signed char)127);
                                arr_16 [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_5 [5U] [i_2] [i_4])) <= (((unsigned long long int) arr_6 [i_2] [2] [2] [i_1 - 3]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)121);
                    arr_18 [(signed char)9] [(signed char)9] = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((((unsigned long long int) 615820394U)), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
    var_17 ^= var_1;
}
