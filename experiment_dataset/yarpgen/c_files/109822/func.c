/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109822
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0 + 4]) ? (max((var_15), (arr_0 [i_0 + 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0 + 4])))))))) ? (((/* implicit */int) arr_1 [i_0])) : (var_6)));
        arr_3 [i_0] [i_0 + 1] = max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) (_Bool)1)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) var_5))));
            var_18 -= ((/* implicit */_Bool) arr_0 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0 + 2]))));
            arr_9 [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_6 [i_0 + 3]) : (((/* implicit */unsigned int) arr_5 [i_0 + 2] [i_0 - 2] [i_0 - 1]))));
            var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)26))));
            var_21 = ((/* implicit */unsigned short) arr_5 [i_2] [i_0 + 2] [i_0 + 1]);
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_22 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_11 [i_3])), (arr_0 [i_3])))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 449736541)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_21 [i_4] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)22269)))))))));
                            var_24 = var_6;
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                var_26 *= var_13;
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [(unsigned short)8] [i_0 - 2] [i_7 + 2])) ? (arr_13 [i_0] [i_0 - 1] [i_7 + 1]) : (arr_13 [i_3] [i_0 - 2] [i_7 + 1])));
                var_28 = ((((/* implicit */_Bool) arr_13 [i_7] [i_3] [i_7])) ? (var_6) : (((/* implicit */int) var_8)));
            }
            arr_24 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-(((/* implicit */int) (signed char)-90)))) : (((/* implicit */int) (unsigned char)21)))), (((/* implicit */int) ((unsigned char) (unsigned short)29116)))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 3) 
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) 14713158685503544510ULL)) ? (((/* implicit */int) (unsigned short)45702)) : (((/* implicit */int) (_Bool)0)))))), (max((((/* implicit */int) (unsigned short)45567)), (((((/* implicit */_Bool) 67108860U)) ? (-1192290511) : (((/* implicit */int) arr_26 [i_8])))))))))));
        var_30 = ((/* implicit */int) arr_28 [(signed char)17] [i_8]);
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)48172))))));
        var_32 = ((/* implicit */unsigned int) var_9);
    }
    for (short i_9 = 2; i_9 < 18; i_9 += 4) 
    {
        arr_32 [(unsigned short)8] [i_9] = ((/* implicit */unsigned int) min(((unsigned char)226), ((unsigned char)85)));
        var_33 = ((/* implicit */short) max((min((max((((/* implicit */unsigned long long int) arr_30 [i_9] [i_9])), (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [i_9])) : (var_6)))))), (((/* implicit */unsigned long long int) (+(((unsigned int) arr_30 [i_9 - 2] [i_9])))))));
        arr_33 [(unsigned char)9] = ((/* implicit */long long int) max((min((245705761U), (((/* implicit */unsigned int) (unsigned char)245)))), (((/* implicit */unsigned int) arr_28 [i_9 + 1] [i_9 - 2]))));
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_35 [i_10] [i_10]), (arr_35 [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [(_Bool)1] [i_10]))) : (arr_35 [i_10] [i_10])));
        var_35 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_35 [i_10] [(signed char)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_34 [i_10] [i_10])))) : (((((/* implicit */_Bool) arr_34 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [13LL] [i_10]))) : (arr_35 [i_10] [16LL])))))));
    }
    var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
}
