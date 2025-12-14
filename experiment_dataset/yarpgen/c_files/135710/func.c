/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135710
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(-1LL)))))) ? (((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_4))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)41))) ^ (arr_1 [i_0] [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (1LL)))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (-(22LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_18))))) : (max((((/* implicit */long long int) var_18)), (arr_1 [i_0] [i_0]))))) : (-8794844082612938995LL)));
        var_22 = ((/* implicit */unsigned char) arr_3 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_11 [i_2] [i_1] = ((/* implicit */int) ((max((((((/* implicit */_Bool) 4294967271U)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))), ((+(arr_6 [i_0] [i_0] [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_2 + 1] [i_0]))))));
                    var_23 = ((/* implicit */signed char) arr_2 [i_2] [i_1]);
                    var_24 *= ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_25 = ((/* implicit */int) arr_13 [i_3]);
        var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_13 [i_3]) : (arr_13 [i_3]))), (((/* implicit */long long int) ((max((arr_13 [(unsigned char)5]), (((/* implicit */long long int) var_19)))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)50928)) >= (((/* implicit */int) var_8)))))))))));
        var_27 = min((((/* implicit */long long int) (short)29927)), ((~(((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (var_15) : (arr_13 [4U]))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) arr_13 [i_3]);
    }
    var_28 = ((/* implicit */int) (~(var_17)));
    var_29 = ((/* implicit */int) var_17);
    var_30 = ((/* implicit */signed char) ((unsigned long long int) var_13));
    var_31 = ((/* implicit */short) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_14)), (var_13)))))));
}
