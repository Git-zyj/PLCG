/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116301
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_7 [i_1] [(unsigned char)9] [i_1]))))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(4428392623129145103LL)))) ? (((arr_11 [i_0 + 1]) & (((/* implicit */long long int) 0U)))) : (((((/* implicit */_Bool) var_5)) ? (arr_11 [i_1]) : (arr_11 [i_0]))))))));
                        arr_13 [i_0 + 1] [i_1] [20] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) arr_8 [i_3] [i_1] [i_1] [i_0])))))) <= ((~(-2868420054004822479LL))))))));
                    }
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-658183561)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 2] [i_2] [i_2]))) : (min((2085907866U), (((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2 - 1] [i_1]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)243))))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) (((~(4294967295U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    var_19 = ((/* implicit */short) var_10);
}
