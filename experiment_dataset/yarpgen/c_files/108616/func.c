/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108616
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
    var_17 = ((_Bool) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 8; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (!((_Bool)0)));
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_14)), (3))) << (((/* implicit */int) var_1))))) ? (((var_16) & ((~(3580711517U))))) : (((/* implicit */unsigned int) max((((/* implicit */int) min((var_7), (((/* implicit */signed char) var_1))))), (arr_6 [i_0] [i_0] [i_2] [i_2]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [6LL] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_0] [i_3])) && (((/* implicit */_Bool) -4))));
                        arr_11 [i_1] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_12);
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) ((3) + (((/* implicit */int) (short)-7))));
                        arr_14 [i_0] [i_0] [3ULL] [i_0] [(unsigned short)9] = ((/* implicit */int) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_4])) ? (3398813754U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */long long int) var_16)) & (var_15)))))));
                        var_21 *= var_0;
                        var_22 = ((/* implicit */unsigned char) max((((min((((/* implicit */unsigned int) var_7)), (var_16))) ^ (((/* implicit */unsigned int) var_2)))), (var_16)));
                    }
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (min((-1), (arr_6 [i_0] [i_1] [i_2] [(_Bool)1])))))) ? (((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_1] [i_2 - 1])), (arr_13 [i_0] [i_1] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) 13)) : (3398813754U))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 896153541U))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))), (var_0)));
    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15))));
}
