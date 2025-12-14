/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147190
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 &= ((/* implicit */_Bool) min((max((max((arr_2 [i_0]), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (unsigned char)75)))), (((/* implicit */unsigned int) max(((unsigned char)64), ((unsigned char)51))))));
        arr_3 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 261115694U)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (unsigned char)192)))));
        var_18 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_1 [i_0]));
        var_19 = ((/* implicit */_Bool) 4033851602U);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) ((long long int) var_7))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_17 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)2047)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0))))), (arr_13 [18U])))));
                        var_21 -= ((/* implicit */unsigned int) var_4);
                        var_22 = max((((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) == (((/* implicit */int) (short)-14055))))), (max((((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_4])), (arr_15 [i_1] [i_1] [i_2] [i_3] [i_4]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14039)) && (((/* implicit */_Bool) (short)14039))));
            var_24 = ((/* implicit */unsigned char) var_7);
        }
        arr_18 [i_1] [(unsigned char)1] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)14039))))))));
        var_25 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1]);
        var_26 = var_16;
    }
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    var_27 += ((/* implicit */int) ((((/* implicit */_Bool) 12372914847108033037ULL)) ? (((/* implicit */unsigned long long int) -1114367626)) : (536870784ULL)));
                    arr_27 [i_7] [i_6] [i_6] [i_5] = (-(4033851613U));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((((/* implicit */int) arr_21 [i_6] [(short)2])), ((~(min((var_14), (-349364944))))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) min((var_29), (var_7)));
}
