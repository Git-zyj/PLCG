/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147643
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (signed char)88);
        var_20 = max((1122537950), (((/* implicit */int) var_11)));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9809))) | (arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((/* implicit */int) var_3)))))));
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)14] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [(short)8] [i_0]), (arr_0 [(_Bool)1] [(_Bool)1]))))) : (var_7)));
    }
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)15074)) ? (((/* implicit */int) (unsigned short)65146)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) ((short) (unsigned char)192)))))), (13LL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_23 = var_16;
        var_24 = ((/* implicit */signed char) (unsigned short)65527);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))) : (var_10))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                            arr_17 [i_5] [i_4] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))));
                            arr_18 [i_1 + 1] [i_2] [i_2] [i_3 - 1] [i_4] [i_2] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)0)))))));
                        }
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_3 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) / (max((min((var_9), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)6951)))))))));
}
