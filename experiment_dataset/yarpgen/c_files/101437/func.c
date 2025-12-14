/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101437
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [9ULL] [9ULL])) : (((/* implicit */int) arr_2 [(signed char)15] [i_1])))))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (268435455)));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((max((15858062512949247987ULL), (((/* implicit */unsigned long long int) (unsigned char)181)))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_3])), (821697973067873351LL))))));
                                arr_18 [i_0] = ((/* implicit */unsigned long long int) ((short) arr_9 [18LL] [i_1] [18LL] [i_0]));
                                arr_19 [(short)7] [(short)7] [12ULL] [(short)7] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_18))))) | (((/* implicit */unsigned long long int) ((int) arr_11 [(unsigned char)17] [i_3] [i_0])))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [(unsigned char)17] [i_0] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_4)))) ? (((long long int) 3107957964338285899LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_6))))))) << (((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(signed char)7])) : (((/* implicit */int) arr_4 [i_0])))) - (60)))));
                }
                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_15 [i_0])) : (((((((/* implicit */int) arr_15 [i_0])) + (2147483647))) << (((((arr_9 [i_1] [i_0] [6ULL] [i_0]) + (2610366506132396223LL))) - (26LL)))))))) + (arr_7 [(_Bool)1] [i_0])));
                var_23 ^= ((/* implicit */int) (~(((((((((/* implicit */long long int) ((/* implicit */int) var_6))) - (arr_11 [i_0] [i_0] [i_1]))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])) ? (-821697973067873351LL) : (((/* implicit */long long int) ((/* implicit */int) (short)63))))) + (821697973067873394LL))) - (43LL)))))));
            }
        } 
    } 
    var_24 *= ((((/* implicit */_Bool) min((((int) var_17)), (((/* implicit */int) (!(var_1))))))) ? (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))) : (((/* implicit */int) var_9)));
    var_25 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_19))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 575897802350002176LL)) || (((/* implicit */_Bool) (short)5890))))))))));
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    arr_27 [i_8] [8] [i_8] = ((((((/* implicit */int) (short)-5902)) + (2147483647))) << (((((/* implicit */int) (unsigned char)14)) - (14))));
                    arr_28 [i_8] [i_7] [i_8] [i_8] = (_Bool)1;
                    arr_29 [i_6] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) << (((((/* implicit */int) max((max(((signed char)97), (var_11))), ((signed char)-97)))) - (76)))));
                }
            } 
        } 
    } 
}
