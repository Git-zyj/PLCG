/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146131
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_1]) : (arr_3 [i_0])))) ? (max((0ULL), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_14)), (var_11))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (arr_4 [i_0] [i_3] [i_4]) : (((/* implicit */unsigned long long int) var_9))))));
                                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((var_13) - (1378011797)))))) : (((unsigned long long int) var_14))))) ? (max((((/* implicit */unsigned long long int) 1186463635)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_4 [i_0] [i_3] [i_4]))))) : ((+(min((var_6), (((/* implicit */unsigned long long int) 4558564334159639628LL))))))));
                                var_18 = ((/* implicit */long long int) (unsigned char)57);
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 16609558177907210754ULL)) ? (((/* implicit */long long int) var_12)) : (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [8ULL] [i_0] [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (14009667197596057635ULL) : (((/* implicit */unsigned long long int) 874811854)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_4 [i_2] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] [i_2])) >> (((((/* implicit */int) (unsigned char)210)) - (183))))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [7LL] [i_0] [i_0] [i_0] [i_0])) ? (-855273034) : (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
}
