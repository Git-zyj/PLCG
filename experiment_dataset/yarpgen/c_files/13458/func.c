/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13458
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_1] [13] [i_1] = ((/* implicit */unsigned short) var_7);
                        var_12 |= ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_0] [i_1])), (arr_4 [i_0] [i_0] [i_0])))), (min((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0])))))))));
                        arr_10 [i_0] [i_1] = ((/* implicit */short) (signed char)0);
                        arr_11 [i_0] [4] [i_0] |= ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2]);
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned short)14] [i_2] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [13U] [i_1] [i_1]))) << (((((/* implicit */int) arr_7 [i_0] [0U])) - (29348))))) : (((((/* implicit */int) ((signed char) arr_1 [i_2] [i_0]))) | ((~(((/* implicit */int) (_Bool)1))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned int) 0ULL);
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2])), ((-(((/* implicit */int) var_9))))))) - (max((min((((/* implicit */long long int) var_7)), (var_5))), (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_1] [i_0])))))))));
                        arr_15 [i_0] [i_1] [i_2] [(unsigned char)15] [i_4] = ((/* implicit */short) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_2] [(unsigned short)18]))))) : ((~(((/* implicit */int) (unsigned short)6))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775794LL) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_0))))))))) > ((((!(((/* implicit */_Bool) var_7)))) ? (((unsigned int) var_1)) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        arr_20 [i_0] [i_1] [1U] [i_0] = ((/* implicit */short) arr_0 [(signed char)17] [i_5]);
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */unsigned int) max((-2147483641), (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_5 [i_0] [12] [12] [i_1])) ? (((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_5])) : (131008U))))))));
                        arr_21 [i_1] [i_5] = ((/* implicit */int) var_10);
                    }
                    var_17 = ((/* implicit */_Bool) arr_7 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))) : (max((((/* implicit */long long int) var_8)), (143833713099145216LL)))))) ? (((long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -9223372036854775794LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(-9223372036854775794LL)))))))))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_9)))))))));
}
