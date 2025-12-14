/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142320
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((short) ((short) var_0))))));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30478))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_15 ^= ((/* implicit */short) var_2);
                        var_16 = ((/* implicit */unsigned char) var_1);
                        var_17 ^= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_10))) - (((-3449331735840200866LL) / (-2306281598238950715LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2306281598238950715LL)))));
                        var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (var_8))))) - (2306281598238950714LL)));
                        var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) >> (((((/* implicit */int) (unsigned char)128)) - (117))))) >= (((/* implicit */int) var_13))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */long long int) ((((((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned char)206)))) * (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_1))));
        arr_12 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)132)), (-3449331735840200866LL)));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) var_10))) | (-5369131457304396480LL))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (-1377275098)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    arr_19 [i_5] = ((/* implicit */long long int) max((((/* implicit */short) ((12990714485796882882ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))))), ((short)15519)));
                    var_23 = ((/* implicit */int) ((unsigned char) var_5));
                }
            } 
        } 
    }
    var_24 ^= ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) 9007190664806400ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) ((short) var_13))))));
}
