/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161819
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
    var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((var_9) - (2286695574U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))) : ((-(var_13)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) ^ (arr_2 [i_0 + 4] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_18)), (arr_2 [i_0 + 2] [i_0]))) : (min((arr_2 [i_0 + 3] [i_0]), (arr_2 [i_0 + 2] [i_0 + 2])))));
        var_22 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)244)) ? (17592181850112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_12)))))));
        var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (min((arr_2 [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0 - 1]), (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))))))));
        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) : (-240096822249146168LL)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_25 &= ((/* implicit */unsigned char) min(((+(((arr_0 [i_1] [i_1 + 4]) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) (~(var_17)))) ? (arr_0 [i_1 + 4] [i_1 + 4]) : (arr_0 [i_1] [i_1 + 4])))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)139)) > (((/* implicit */int) var_7)))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_27 -= min((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) var_8))))) : (((((/* implicit */int) arr_11 [i_2])) + (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) 934008297U)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_8)))));
                        var_28 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 3] [i_1]))))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */short) arr_9 [i_1 + 2] [i_1 - 1] [i_1])))))));
                    }
                } 
            } 
        } 
    }
}
