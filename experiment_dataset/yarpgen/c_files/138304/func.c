/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138304
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */signed char) (((~(((/* implicit */int) var_12)))) * (((/* implicit */int) ((signed char) ((unsigned char) arr_2 [i_0]))))));
                var_19 -= ((/* implicit */unsigned char) (+(((long long int) arr_1 [i_0]))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_6 [i_0] = ((/* implicit */int) max(((-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44848))) : (9031860954055740438LL))))), (((/* implicit */long long int) 370940242U))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_5 [i_2] [i_0] [i_2]);
                                var_21 = ((/* implicit */unsigned char) (unsigned short)20703);
                                var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_4] [i_3] [i_4 - 1] [i_0])))) ? (((/* implicit */int) ((arr_9 [i_0] [i_2] [i_4] [i_3] [i_4 - 1] [i_1]) <= (arr_9 [i_0] [i_0] [i_4] [i_3] [i_4 - 1] [i_2])))) : (((arr_9 [i_2] [i_1] [i_4] [i_3] [i_4 - 1] [i_1]) / (arr_9 [i_0] [i_1] [i_4] [i_3] [i_4 - 1] [i_0])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((2000693476) == (((/* implicit */int) (unsigned char)44))))) != (min((((/* implicit */int) (unsigned char)1)), (2000693476)))))) % (((/* implicit */int) var_8)))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_24 = ((/* implicit */signed char) arr_12 [i_1] [i_1] [i_5]);
                    var_25 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_26 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) arr_0 [i_0])))));
                }
            }
        } 
    } 
    var_27 += max((((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_15))))), ((unsigned short)44860));
    var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)84)))))));
}
