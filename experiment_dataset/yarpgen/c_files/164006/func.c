/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164006
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
    var_19 = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-84)))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (9223372036854775807LL)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) arr_0 [(signed char)9]);
            arr_6 [1U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? ((+(((((/* implicit */_Bool) var_18)) ? (var_12) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) max((1787192702619500513LL), (1787192702619500513LL))))));
            var_21 = ((/* implicit */_Bool) max((var_21), ((_Bool)1)));
        }
        var_22 = ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    var_23 += ((/* implicit */short) arr_11 [i_0] [i_2] [(_Bool)1] [i_3]);
                    var_24 = ((/* implicit */int) min((var_24), (((int) (-(((/* implicit */int) arr_2 [i_0 - 3])))))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)60)) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 4])), ((unsigned char)46)))))))));
                    arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)209)) ? (1787192702619500513LL) : (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 4] [i_0]))) >= (1787192702619500513LL)))), (max((((/* implicit */long long int) (unsigned char)210)), (1787192702619500513LL)))))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((unsigned int) (signed char)-18)) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210)))));
        arr_17 [i_4] = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_4]);
    }
}
