/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138065
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_1 [i_0] [i_1])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_5)))), (((int) var_2))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [5U]))) > (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_2 + 1] [i_2] [i_2 + 3] [i_2 - 1])))));
                }
                var_15 *= ((/* implicit */unsigned char) ((long long int) (signed char)(-127 - 1)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    var_16 -= ((/* implicit */unsigned int) var_10);
                    var_17 = ((/* implicit */unsigned short) (-((+((+(arr_4 [(unsigned char)13] [(_Bool)1] [i_5] [2U])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((int) (unsigned short)46344))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [1]))) ^ (arr_1 [i_4] [(unsigned char)1]))))))));
                                var_19 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((unsigned short) arr_3 [i_4] [17] [i_3]))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [(short)11])) : (((/* implicit */int) var_10))))))))));
                                var_20 = ((/* implicit */int) ((4294967294U) >> (((/* implicit */int) ((max((var_3), (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_3] [5ULL]), (((/* implicit */unsigned short) var_6)))))))))));
                                var_21 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) var_1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_9))));
    var_23 = var_1;
    var_24 = ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (428451090)))) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
}
