/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12878
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) && (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) var_12)))))) >= (((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_21 = ((/* implicit */short) max((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (short)23329)) > (((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 3])) ? (arr_6 [i_3]) : (((/* implicit */unsigned long long int) -5197648042654691548LL))));
                    arr_10 [i_1] [i_1] [i_1] = arr_9 [i_1];
                    var_23 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) < (arr_3 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1]))))))) : (((unsigned int) arr_3 [i_3]))));
                    var_24 = ((/* implicit */long long int) (+(((/* implicit */int) ((var_18) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 2]))))))));
                    arr_11 [i_1] = ((/* implicit */signed char) max(((short)3), (((/* implicit */short) var_14))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */short) min(((+(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))))), (((/* implicit */int) var_16))));
        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((var_15) * (arr_3 [i_1]))))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((arr_6 [i_1]) % (((/* implicit */unsigned long long int) 1296791775U)))))))));
    }
    var_25 = var_8;
    var_26 &= ((/* implicit */_Bool) (+(max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (2147483647))))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            {
                arr_18 [i_4 - 2] = ((unsigned int) -7214136254844745894LL);
                arr_19 [i_5] = ((/* implicit */signed char) ((max((var_1), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_4]))))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5])))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_16), (((/* implicit */unsigned char) (_Bool)1))))), (max((4022156343495285983LL), (((/* implicit */long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) (short)3)))))))));
}
