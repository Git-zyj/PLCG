/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155671
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
    var_10 = ((/* implicit */short) min((((((/* implicit */_Bool) var_9)) ? (((int) var_8)) : (min((-361765150), (((/* implicit */int) var_5)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [8U] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1414124404)))))) : (((var_6) / (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7))) >= (min((((/* implicit */unsigned int) var_5)), (arr_6 [i_1] [i_1] [i_0]))))))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))))));
                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))))) : (arr_6 [(unsigned short)2] [5LL] [i_1])));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [10ULL] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)3] [i_0]))))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
                            {
                                var_13 *= ((/* implicit */long long int) ((_Bool) arr_9 [i_0] [i_1]));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_3] [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_5 [i_4 + 3] [i_0])))))));
                                var_15 = ((/* implicit */int) var_8);
                            }
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_13 [i_3] [i_3] [(unsigned short)2] [i_3] [4ULL]))));
                            var_17 += ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)143)), (arr_15 [i_0] [i_0] [i_3] [6ULL] [i_0])))), ((+(var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_0), (var_4)))) != (((/* implicit */int) var_0)))))));
                            arr_16 [i_0] [(_Bool)1] [(unsigned char)6] [(_Bool)1] [i_3] |= ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((_Bool) var_8)))));
}
