/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143195
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
    var_16 |= ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)223)) << (((((/* implicit */int) (signed char)-102)) + (103))))));
                    var_18 = ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)223))))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_3 = 4; i_3 < 17; i_3 += 3) 
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)223)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((long long int) arr_4 [i_0 + 1])))))));
                                var_21 |= ((/* implicit */unsigned char) max((((/* implicit */int) arr_8 [(unsigned char)12] [(unsigned char)12])), ((~((-(((/* implicit */int) (unsigned char)208))))))));
                            }
                        } 
                    } 
                }
                for (int i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    var_22 *= (((-(((/* implicit */int) arr_17 [i_0 - 1] [i_6 + 3] [i_6] [i_6 + 1])))) <= (((/* implicit */int) (unsigned char)239)));
                    var_23 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_0]);
                }
                for (int i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_24 -= min((min((((/* implicit */unsigned int) arr_8 [6] [6])), (arr_1 [i_0 - 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)33))))));
                                var_25 ^= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)11)) > (((/* implicit */int) (unsigned char)32)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0] [i_0 - 1] [17ULL] [i_7 + 4]))))) : (arr_20 [16ULL] [(unsigned char)18])));
                                var_26 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)230))));
                                var_27 *= ((/* implicit */unsigned short) min((((/* implicit */int) arr_23 [i_0 + 1] [i_7 + 1] [i_7 + 1])), (((((/* implicit */int) arr_23 [i_0 + 1] [i_7 + 1] [i_7 + 1])) * (((/* implicit */int) arr_23 [i_0 + 1] [i_7 + 1] [17ULL]))))));
                                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((int) min((arr_20 [(unsigned short)16] [i_7 + 2]), (arr_20 [(unsigned char)10] [i_7 - 1])))))));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned char)226), ((unsigned char)2))))));
                    var_29 = ((/* implicit */signed char) min((((/* implicit */int) ((10814230750296140146ULL) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))))), ((-((~(((/* implicit */int) (signed char)(-127 - 1)))))))));
                }
                for (unsigned int i_10 = 2; i_10 < 18; i_10 += 1) 
                {
                    var_30 *= ((/* implicit */signed char) min((min((min((((/* implicit */int) (signed char)30)), (-181136541))), (((/* implicit */int) arr_15 [i_10] [i_10 + 1] [i_10 + 1] [(signed char)0] [i_10 + 3])))), ((-(((/* implicit */int) min((arr_12 [6ULL] [(unsigned char)8] [i_1] [i_10] [14] [4U]), (((/* implicit */short) (signed char)30)))))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 3; i_11 < 19; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */int) 18446744073709551607ULL);
                                arr_41 [(short)6] [i_11] [(short)6] [12U] [(short)6] [(short)6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_11] [i_11 - 3]))))) && (((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)30)))))))));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)223)) ? (arr_34 [i_0] [13U] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))), (((/* implicit */long long int) (_Bool)1))));
                var_33 += ((/* implicit */signed char) (~(((/* implicit */int) (!(arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_34 += ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) 10673761894668090814ULL))));
}
