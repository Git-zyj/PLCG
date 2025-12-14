/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17306
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) var_11)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_8)) : (var_0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [0LL]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_1))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_3 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (~(min((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_8))))))));
                            var_14 = ((/* implicit */int) (+(var_1)));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 17; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 + 1])) | (((/* implicit */int) arr_14 [i_4 - 2] [(signed char)15] [i_4 - 2] [i_4 - 2] [i_1]))));
                                var_15 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 &= max((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))))) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    var_17 = ((/* implicit */int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : (var_6)));
    var_18 += ((/* implicit */short) max(((+(max((((/* implicit */unsigned int) var_3)), (var_4))))), (((/* implicit */unsigned int) var_5))));
}
