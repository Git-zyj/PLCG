/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129183
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
    var_18 = ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 += ((/* implicit */long long int) arr_1 [i_0] [16LL]);
        var_20 &= ((/* implicit */unsigned long long int) 2147483392);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 805306368U))) ? (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */int) (signed char)3))))) : (((/* implicit */int) (signed char)102))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_2 - 2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-119)) | (((/* implicit */int) arr_7 [i_0]))));
                    var_22 &= ((/* implicit */unsigned char) arr_5 [i_2 - 2] [i_1] [i_1] [i_0]);
                    var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) (signed char)102)));
                    var_24 = ((/* implicit */long long int) ((unsigned char) 2086915047));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((unsigned int) var_17));
                    arr_20 [i_3] [i_4] [i_5] = ((/* implicit */long long int) var_6);
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) (signed char)102))) : (((/* implicit */int) max((((/* implicit */short) (signed char)127)), (arr_11 [i_3] [i_3]))))));
        var_27 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) (signed char)-96))), (((long long int) var_16))));
        arr_21 [i_3] [i_3] = ((((/* implicit */int) (signed char)96)) >= (((/* implicit */int) max((((/* implicit */short) arr_15 [i_3] [i_3] [i_3])), (var_2)))));
    }
    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        arr_24 [i_6 + 1] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_0 [9ULL])))));
        var_28 &= ((/* implicit */long long int) ((int) ((arr_5 [(short)12] [22U] [22U] [i_6]) / (var_11))));
        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-103))));
    }
}
