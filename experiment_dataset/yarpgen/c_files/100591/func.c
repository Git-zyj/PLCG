/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100591
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3913575009U)) ? (var_1) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) ((1964530998) <= (((/* implicit */int) (_Bool)1))))))) : (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [(_Bool)1] [8ULL] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)16384)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(var_13)))))) : (((unsigned long long int) 4294967295U))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2147483647) << (((2008340404U) - (2008340404U)))))) ? ((-(((/* implicit */int) (unsigned short)38666)))) : (((/* implicit */int) arr_11 [(unsigned short)8] [i_1] [(unsigned short)8] [i_1]))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 554153860399104ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_4) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((unsigned long long int) (unsigned short)62554)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)30727)) > (((/* implicit */int) var_15)))) ? (((unsigned int) 2743923445U)) : ((-(0U))))))));
                                arr_16 [4LL] = ((/* implicit */unsigned short) (unsigned char)109);
                                arr_17 [3ULL] [i_1] [i_1] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [(signed char)7] [i_0]);
                            }
                        } 
                    } 
                }
                arr_18 [1LL] [1LL] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967264U)) ? (((((/* implicit */_Bool) 484757880)) ? (((((/* implicit */_Bool) arr_12 [i_0] [6ULL] [i_1] [i_1] [i_1])) ? (18446189919849152511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned char)244)) - (235))))), ((-(arr_8 [i_0] [5] [i_0] [i_0]))))))));
            }
        } 
    } 
}
