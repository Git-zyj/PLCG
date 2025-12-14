/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106702
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_5 [i_1]);
                            arr_10 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_17)), (((arr_2 [i_1 - 1] [i_1]) >> (((arr_6 [i_1 + 1] [i_1]) - (905883324)))))))) : (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_17)), (((arr_2 [i_1 - 1] [i_1]) >> (((((arr_6 [i_1 + 1] [i_1]) - (905883324))) - (862515206))))))));
                            arr_11 [i_0] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned char) 562949953421311LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4 - 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (min((arr_0 [i_5] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)63141)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0])))))) ? (((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 + 1] [4U] [i_4 + 1] [i_4 + 1])) ? (arr_17 [i_1 + 1] [i_1 + 1] [i_4] [i_4 - 1] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_4 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_4 - 1] [i_1 + 1] [i_1 + 1] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_6 = 1; i_6 < 23; i_6 += 2) 
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_0] [i_5] [i_0] = min(((+(max((((/* implicit */int) (unsigned char)239)), (var_3))))), ((+(((/* implicit */int) (unsigned short)39898)))));
                                var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_22 [i_4 - 2] [i_4 - 2] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1])) ? (arr_22 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6]) : (arr_22 [i_0] [i_6] [i_6 - 1] [i_0] [i_6] [i_6] [i_6])))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_16 [i_0]))));
                            }
                        }
                    } 
                } 
                arr_24 [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 - 1]))) <= (((unsigned int) 18029696221874936648ULL))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_17);
}
