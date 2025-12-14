/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125355
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
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2)))))) > ((~(5056377295723047912LL))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_8);
                var_13 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 3251539073U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) 2200924961U)))))))), (arr_3 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [13ULL] [i_3 - 1] [i_2] = ((/* implicit */unsigned int) ((signed char) arr_9 [i_0] [i_0] [i_2] [i_2] [i_1]));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_1] [i_2] [i_1] [i_1]);
                                var_15 += arr_0 [i_0 - 1];
                                arr_14 [i_0] [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned short) 3251539073U);
                            }
                            arr_15 [i_0] [i_0] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0] [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112))))) : (((/* implicit */int) (unsigned short)43689)))), ((~(((((/* implicit */_Bool) arr_9 [7LL] [i_0] [i_0 + 1] [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                            var_16 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 + 1]))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (732310889U))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-19)))))));
            }
        } 
    } 
}
