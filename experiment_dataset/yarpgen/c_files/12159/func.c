/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12159
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
    var_10 &= ((/* implicit */short) max((((/* implicit */long long int) var_4)), ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) == (var_8))))) : (-2361120792079056322LL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_5))), (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */long long int) var_9)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : ((-(((4294967295U) / (arr_0 [i_0] [1])))))));
        var_12 -= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned char) (~(2361120792079056336LL)));
                    arr_9 [i_2] = ((/* implicit */signed char) (~(arr_1 [i_2])));
                    arr_10 [i_2] = arr_1 [i_0];
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        arr_20 [i_5] [i_5] [i_5] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)44))));
                        arr_21 [i_4] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) var_7);
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((arr_11 [i_0] [i_3]), (2361120792079056322LL))))));
                        var_14 = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)44))));
    var_16 *= ((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), ((~(((((/* implicit */_Bool) 2361120792079056332LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (2361120792079056332LL)))))));
}
