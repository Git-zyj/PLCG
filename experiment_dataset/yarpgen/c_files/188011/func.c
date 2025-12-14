/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188011
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
    var_15 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) 1723130024U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))), (((1447805508) << (((1723130038U) - (1723130038U)))))))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (var_10)));
    var_17 = ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((2571837278U), (2571837258U)));
                                var_19 = ((/* implicit */unsigned short) arr_7 [i_3] [i_2] [i_1]);
                                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (arr_8 [i_0] [i_0] [i_4])))), ((-((+(114588061U)))))));
                                arr_16 [i_4] [i_2] [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (unsigned char)147)), (arr_12 [14LL] [i_1] [i_2] [i_3])))))), (var_10)));
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 21; i_5 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (signed char)127))));
                                arr_21 [i_0] [i_3] [i_3] [i_1] [i_5] &= ((/* implicit */unsigned long long int) var_4);
                                var_22 &= ((/* implicit */unsigned char) ((unsigned short) var_0));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 21; i_6 += 1) /* same iter space */
                            {
                                var_23 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_0] [i_3] [i_6] [i_2]);
                                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_2]))));
                            }
                            /* vectorizable */
                            for (int i_7 = 2; i_7 < 21; i_7 += 1) /* same iter space */
                            {
                                var_25 &= ((/* implicit */unsigned long long int) arr_8 [i_7 - 2] [i_7] [i_3]);
                                var_26 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)3439))));
                            }
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1])))))));
                        }
                    } 
                } 
                var_28 |= ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_11 [i_1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_1])), (var_2))), (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
            }
        } 
    } 
}
