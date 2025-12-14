/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178224
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
    var_16 *= ((/* implicit */signed char) ((long long int) (_Bool)1));
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)72))) ? (min((max((arr_5 [i_0] [(unsigned short)12]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_14)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) (signed char)7);
                                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((signed char) arr_14 [i_2] [i_4 - 1]))), (min((arr_0 [i_4 + 1]), (arr_0 [i_4 + 1])))));
                                var_19 = max((max((((long long int) arr_12 [i_2])), (((/* implicit */long long int) arr_16 [i_1] [i_2])))), (((/* implicit */long long int) max((max((((/* implicit */unsigned short) var_7)), ((unsigned short)65504))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_4)), (arr_12 [i_2]))))))));
                                var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4 - 2])) ? (((/* implicit */int) arr_3 [i_1] [i_3] [i_4 - 1])) : (((/* implicit */int) arr_3 [i_4] [i_4] [i_4 - 1]))))) ? (arr_1 [i_4 - 1]) : (((unsigned long long int) arr_3 [i_0] [i_0] [i_4 - 2])));
                            }
                        } 
                    } 
                } 
                var_21 = -4853722343781238676LL;
            }
        } 
    } 
    var_22 = 2473586295176543851LL;
}
