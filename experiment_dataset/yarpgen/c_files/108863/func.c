/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108863
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) (_Bool)0)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (((_Bool)1) && ((_Bool)1)));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((arr_9 [i_2]), (((/* implicit */int) ((unsigned short) 5294258280190785837ULL)))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_21 = 4666112670708867815LL;
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) var_17)))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_7 [i_0] [i_2]))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) arr_7 [i_2 + 2] [3U])) - (((/* implicit */int) arr_7 [i_2 + 4] [i_3]))))));
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)93)) > (((/* implicit */int) (unsigned char)149))));
                        }
                        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)185)) ^ (((/* implicit */int) (unsigned char)93))))) ? (min((arr_4 [i_2 - 2]), (((/* implicit */unsigned long long int) var_11)))) : (arr_4 [i_2 - 2]))))));
                            arr_19 [i_0] [4LL] [i_0] [i_3] [(unsigned char)3] [i_0] [i_5] = ((/* implicit */signed char) (unsigned char)247);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(var_13))))));
                            arr_23 [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_1] [i_1]);
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((_Bool) var_2)))));
                            var_28 = ((/* implicit */unsigned long long int) var_13);
                        }
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1])))))))));
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            arr_28 [i_0] [i_7] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7] [i_0]), (((/* implicit */unsigned short) var_18)))))) * (min((var_16), (((/* implicit */long long int) arr_25 [i_0] [i_0])))));
            var_31 = ((/* implicit */unsigned long long int) ((((var_13) + (9223372036854775807LL))) >> (((var_1) + (2544744375773119239LL)))));
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) var_2);
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(var_2)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */short) min((max((min((var_8), (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) (unsigned char)79)) ? (var_8) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_8] [(_Bool)1] [i_8])))))), (((/* implicit */int) var_5))));
        }
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_7 [i_0] [i_0]))));
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)3))))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [12U]))))))));
    }
    for (short i_9 = 2; i_9 < 19; i_9 += 2) 
    {
        var_36 = ((/* implicit */long long int) ((_Bool) (unsigned char)254));
        var_37 = ((/* implicit */_Bool) max((var_37), (arr_32 [i_9])));
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-4666112670708867816LL), (((/* implicit */long long int) var_6))))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)1659))));
        arr_35 [i_9] = ((/* implicit */int) (_Bool)1);
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((var_4) > (((/* implicit */int) (!(arr_34 [i_9 - 2] [i_9 + 1])))))))));
    }
    var_40 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(9223372036854775789LL)))) * (((((((/* implicit */int) (unsigned char)122)) <= (((/* implicit */int) (unsigned char)238)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) : (((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
