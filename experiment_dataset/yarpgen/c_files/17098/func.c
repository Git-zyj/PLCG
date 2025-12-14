/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17098
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = var_0;
                    arr_7 [i_0] [i_0] = ((/* implicit */int) (~(max((arr_5 [i_1 - 1] [i_1 + 1]), (arr_6 [i_0])))));
                    var_16 = ((/* implicit */unsigned short) -8);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_13 [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) (unsigned short)65523)), (((((/* implicit */_Bool) (unsigned short)65528)) ? (6015776029773402265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) arr_10 [i_0])), (var_2))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_4]))) >> (((max((max((var_2), (((/* implicit */unsigned int) 343431019)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [12LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_0] [i_3]))))))) - (1477580612U))))))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */unsigned long long int) -1837462893)) : (var_7))))))) : (((/* implicit */int) min((arr_9 [i_5]), (arr_9 [i_5]))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_6);
        var_19 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) arr_9 [14U])), (-976282108)))) < (var_11)))), (var_7)));
        var_20 = ((/* implicit */long long int) max((min((-1837462878), (((/* implicit */int) (short)25683)))), (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (((/* implicit */int) arr_4 [i_5] [i_5]))))));
        arr_18 [i_5] = ((/* implicit */int) arr_12 [i_5] [i_5]);
    }
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) var_0)) == (5375733681362041814LL)));
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) ((unsigned short) -5375733681362041796LL))) : (((/* implicit */int) ((-5375733681362041796LL) <= (((/* implicit */long long int) 723109053U))))))))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 4; i_7 < 12; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                for (unsigned int i_9 = 4; i_9 < 12; i_9 += 2) 
                {
                    {
                        arr_29 [i_8] [i_8] [i_6] [i_8] [i_8] [i_8] = ((/* implicit */int) arr_12 [i_6] [i_6]);
                        arr_30 [i_6] = ((/* implicit */int) (((((+(arr_24 [i_9 - 2] [i_9 - 3]))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13758))) : (-782411136858714630LL))) - (13758LL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_34 [i_6] [i_6] [i_9] = ((/* implicit */unsigned int) arr_31 [i_9] [i_6] [i_6] [i_6] [i_6]);
                            arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_26 [i_10 - 1] [0LL] [i_9 + 1] [i_9] [i_10])))) ? (((arr_25 [i_10 - 1] [i_8] [i_9 - 3] [i_8]) + (arr_25 [i_10 - 1] [i_7 - 2] [i_9 - 3] [i_7]))) : (((/* implicit */long long int) ((((arr_26 [i_10 - 1] [i_7] [i_9 + 1] [12U] [i_10]) + (2147483647))) >> (((-1837462883) + (1837462902))))))));
                        }
                        for (int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)65519)), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_6] [(unsigned short)2])), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && ((_Bool)0))))) : (min((var_1), (arr_28 [i_6] [i_6] [i_7] [i_8] [i_8] [i_11]))))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) arr_1 [i_11]))))) : (max((((/* implicit */long long int) arr_12 [i_7] [i_7])), (arr_24 [i_6] [i_8])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7 + 1] [5ULL])) ? (((/* implicit */unsigned long long int) -5672010005887217106LL)) : (2360808430999860020ULL)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_38 [i_6] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (arr_19 [i_6]) : (((/* implicit */unsigned long long int) arr_2 [i_6]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_33 [i_6] [i_6] [i_6] [9] [i_6] [i_6] [i_6])) : (var_14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6])) && (((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_31 [i_6] [i_6] [(unsigned char)11] [(unsigned char)11] [10LL]))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_32 [i_6] [i_6] [i_6]))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_24 -= ((/* implicit */int) (unsigned char)39);
        var_25 += max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45302))) : (12005343821746127164ULL)))) && (((/* implicit */_Bool) arr_40 [i_12]))))), (min((((((/* implicit */unsigned int) var_0)) + (var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_25 [i_12] [i_12] [i_12] [10LL]))))))));
        arr_41 [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (9223372036854775787LL))) >> (((arr_0 [i_12]) - (1591682498)))));
    }
    var_26 -= ((/* implicit */unsigned int) var_9);
}
