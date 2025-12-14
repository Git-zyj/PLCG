/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152625
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7615)) ? (min((((((/* implicit */_Bool) (short)-7613)) ? (-1567258633) : (((/* implicit */int) (unsigned char)134)))), (((((/* implicit */_Bool) (unsigned char)128)) ? (var_14) : (var_14))))) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (unsigned int i_4 = 3; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -690275369))))), (max((var_10), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_4 - 1] [i_4 + 1]))))))) && ((!(((/* implicit */_Bool) (unsigned char)14))))));
                            arr_13 [i_1] [i_1] = ((/* implicit */short) (unsigned char)254);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) var_15);
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((int) ((int) arr_5 [i_0] [i_0])));
                            var_22 |= ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) 3533761132U)) && (((/* implicit */_Bool) arr_10 [i_5])))) ? (arr_11 [i_0] [i_5 + 2] [i_0] [i_6] [i_1 + 1] [i_1 + 3] [i_6]) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-7615)))))))));
                            var_23 *= ((/* implicit */_Bool) ((arr_22 [i_7] [i_0] [i_6] [i_5 + 2] [i_1] [i_0] [i_0]) ? (max((arr_11 [i_0] [i_1 - 1] [i_5 + 3] [i_6] [i_7] [i_6] [i_1]), (((/* implicit */int) (unsigned char)109)))) : (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)11109), (((/* implicit */unsigned short) (signed char)69))))) && (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_25 [i_0] [i_1] [i_5 - 1] [i_6] [i_7] = ((/* implicit */int) min(((!(((/* implicit */_Bool) min((1269456492), (var_14)))))), ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)6)) << (((((/* implicit */int) (unsigned short)18005)) - (18002))))))))));
                        }
                        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_7 [i_5]) * (((/* implicit */long long int) 0)))), (((/* implicit */long long int) arr_5 [i_0] [i_1 + 2]))))) && (((/* implicit */_Bool) min(((+(1170430434))), (((((/* implicit */int) (unsigned char)149)) >> (((var_4) + (987716273))))))))));
                    }
                } 
            } 
            arr_26 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) min((max(((((_Bool)0) ? (((/* implicit */int) (short)21796)) : (var_12))), ((+(-1385439620))))), (((int) arr_14 [i_0] [i_0] [i_0]))));
            arr_27 [i_0] [i_0] |= ((/* implicit */unsigned short) ((unsigned char) (unsigned short)2));
        }
        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((((/* implicit */long long int) max((((/* implicit */int) var_3)), (arr_11 [i_0] [i_8 + 2] [i_0] [i_0] [i_8 + 2] [i_8] [i_0])))) * (max((var_5), (((/* implicit */long long int) arr_18 [i_0])))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)22)) : (-309710336))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2552)))))))))))));
            arr_31 [i_0] [i_8 + 3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned char) 1567258632))) ? (max((((/* implicit */unsigned int) (unsigned short)15656)), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 690275346)))))), (((/* implicit */unsigned int) var_13))));
        }
    }
    var_26 += ((/* implicit */_Bool) var_7);
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (var_18) : (((/* implicit */int) (signed char)28))))))), (4294967295U))))));
    var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)23)), (var_0)))) && (((/* implicit */_Bool) var_12))))), (((int) (~(((/* implicit */int) var_15)))))));
}
