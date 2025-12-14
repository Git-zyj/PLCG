/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107768
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
    var_20 = ((/* implicit */short) var_17);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned int) ((long long int) ((long long int) arr_1 [i_0 - 1])));
        var_22 &= ((/* implicit */unsigned char) ((((_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_2)))))))));
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9942)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))))))) : (max((((/* implicit */long long int) arr_1 [i_0 + 1])), (max((arr_0 [2LL] [i_0]), (((/* implicit */long long int) var_18))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) arr_0 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (signed char i_2 = 4; i_2 < 13; i_2 += 3) 
        {
            var_25 = var_5;
            arr_9 [14] [i_1] [14] |= ((/* implicit */unsigned short) var_6);
        }
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1 + 1]))));
            var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))));
            arr_13 [i_3] = ((/* implicit */_Bool) var_17);
        }
        var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) / (arr_7 [i_1])));
    }
    for (signed char i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) min((((min((((/* implicit */unsigned int) (unsigned char)223)), (var_18))) != (min((var_12), (((/* implicit */unsigned int) var_2)))))), ((!(((/* implicit */_Bool) min((arr_7 [i_4 + 1]), (((/* implicit */int) arr_1 [i_4])))))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 3; i_6 < 14; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_30 -= ((/* implicit */unsigned char) 7136181067364280135LL);
                        arr_25 [2U] [i_5] [i_5] [i_6] [(unsigned short)8] [i_5] |= ((/* implicit */long long int) var_5);
                        var_31 = ((/* implicit */_Bool) arr_0 [i_5] [i_7]);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23537)) ? (((arr_28 [i_8] [i_8]) << (((max((arr_28 [11LL] [i_8]), (((/* implicit */unsigned int) arr_26 [i_8])))) - (3824663239U))))) : (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8]))) != (var_16))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_13))));
    }
    var_34 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned int) var_17)) + (var_4))), (((/* implicit */unsigned int) (~(var_14)))))))));
}
