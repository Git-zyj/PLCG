/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188512
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6168447866925011401ULL)) ? (-361421094932773076LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)56))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_11))));
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (var_7)))) ? (((/* implicit */long long int) var_16)) : (max((((/* implicit */long long int) var_1)), (var_8)))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) / (var_16)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (var_10))) : (((((/* implicit */_Bool) (signed char)-62)) ? (var_7) : (((/* implicit */int) (signed char)-64)))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        var_19 |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (arr_0 [i_0 - 3]))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 - 1]))) ? (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_1]))))), (max((((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2])) ? (((/* implicit */unsigned long long int) var_16)) : (arr_7 [i_1 + 1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_10) : (var_0))))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                var_22 = max((max((arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 1]), (arr_9 [i_1] [i_1 + 2] [i_1 + 1] [i_3 + 1]))), ((~(arr_9 [i_1] [i_1] [i_1] [i_3]))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (max((var_11), (arr_3 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (196042750U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])))))))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (arr_3 [i_1 + 1])))));
                var_25 = ((/* implicit */_Bool) (+(((arr_8 [i_1 + 2]) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) == (1ULL))) ? (max((((/* implicit */unsigned long long int) var_1)), (arr_7 [i_1 - 1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))) ? (((int) ((arr_5 [i_3]) ? (arr_11 [i_1] [i_1] [i_3 + 3]) : (arr_11 [i_1] [i_1] [i_1 + 2])))) : (((/* implicit */int) ((_Bool) arr_4 [i_1 - 1])))));
            }
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */int) var_4);
            arr_16 [i_1 + 1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_12 [i_1 + 1])))));
            var_28 = ((/* implicit */unsigned char) ((unsigned long long int) max((max((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_1] [i_1 + 2]))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_11 [i_1 + 2] [i_1 - 1] [i_4])) : (arr_7 [i_1] [i_4]))))));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
            {
                var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_4] [i_5])) ? (arr_7 [i_4] [i_5]) : (((/* implicit */unsigned long long int) arr_13 [i_5]))))))) ? (((((/* implicit */_Bool) 657258247)) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (max((752004951882707921LL), (((/* implicit */long long int) (unsigned char)176)))))) : (((/* implicit */long long int) (~(var_0))))));
                var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_5]))))) : (arr_3 [i_1 + 1]))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_13)))))))));
                var_31 = ((/* implicit */int) var_5);
            }
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 2]);
                arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(arr_21 [i_1] [i_1] [i_1 + 2])));
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_1 + 2] [i_7] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_7] [i_1] [i_7]))) : (arr_7 [i_1 - 1] [i_7])));
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_15 [i_1 + 2] [i_1] [i_1 + 2])) : (((/* implicit */int) var_12)))))));
                    arr_27 [i_1 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_4 [i_1 - 1]))));
                    arr_28 [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) (-(arr_21 [i_6] [i_1 - 1] [i_1 - 1])));
                }
                for (int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    arr_31 [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((arr_29 [i_4] [i_1] [i_6] [i_6] [i_4]) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_6] [i_1])) : (((/* implicit */int) arr_4 [i_6])))) : ((~(var_7)))));
                    var_35 -= arr_17 [i_1] [i_1 + 2];
                }
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    var_36 = ((/* implicit */unsigned long long int) (-(arr_21 [i_1 + 1] [i_1 + 1] [i_4])));
                    arr_34 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 1]))));
                }
                for (unsigned int i_10 = 3; i_10 < 15; i_10 += 3) 
                {
                    arr_37 [i_1 + 2] [i_4] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_19 [i_10] [i_1] [i_1])) ? (arr_19 [i_1 + 2] [i_6] [i_10 - 2]) : (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) arr_20 [i_1 + 1] [i_4]))));
                    var_37 = ((/* implicit */signed char) ((arr_19 [i_1 + 2] [i_10 - 1] [i_1 + 2]) - (((/* implicit */unsigned int) var_2))));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_10 - 3])) ? (arr_9 [i_1] [i_4] [i_6] [i_6]) : (arr_9 [i_1 + 2] [i_1 + 2] [i_6] [i_10 - 2])));
                }
            }
            for (long long int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
            {
                var_39 += max((((/* implicit */unsigned long long int) (~(arr_9 [i_1 + 1] [i_4] [i_11] [i_11])))), (max((5526710609406008376ULL), (((/* implicit */unsigned long long int) (short)22539)))));
                var_40 = ((/* implicit */int) (((~(max((arr_35 [i_1] [i_4] [i_4]), (((/* implicit */long long int) arr_9 [i_1] [i_4] [i_1] [i_4])))))) == (((/* implicit */long long int) arr_36 [i_1]))));
            }
        }
        arr_40 [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2]))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_23 [i_1] [(unsigned short)2] [i_1] [i_1]))))))));
    }
}
