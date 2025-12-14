/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123062
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) max(((unsigned char)24), ((unsigned char)53))))))));
                            arr_13 [18U] [i_0] [i_1 + 3] [i_2] &= ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 - 1])), (511U)))));
                            arr_14 [i_0] = ((/* implicit */long long int) var_5);
                            arr_15 [11LL] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned char) arr_1 [i_1 - 2] [i_1])), ((unsigned char)254))), (((/* implicit */unsigned char) var_8))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                arr_19 [17LL] [i_0] = ((/* implicit */unsigned int) arr_16 [i_3] [i_3] [i_3] [i_0 - 1] [i_3] [i_3] [i_2]);
                                arr_20 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_2 [i_0 - 1]) ? (((/* implicit */int) (unsigned short)3033)) : (((/* implicit */int) arr_4 [i_0] [(signed char)11])))))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                            {
                                var_12 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 298407099))));
                                arr_24 [i_0] [i_1 + 3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)3504))));
                            }
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            arr_29 [i_0] [16U] [i_0] = ((/* implicit */unsigned int) var_4);
                            arr_30 [i_1] [i_6] [i_0] = ((/* implicit */_Bool) max(((~(max((-1177578362), (((/* implicit */int) (unsigned char)190)))))), (max(((~(((/* implicit */int) (signed char)53)))), (((/* implicit */int) (unsigned short)42237))))));
                            arr_31 [i_0] [i_6] [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (signed char)127)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) & (var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(max((var_9), (var_4))))))));
}
