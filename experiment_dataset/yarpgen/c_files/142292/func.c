/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142292
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_3)) > (((((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned long long int) var_6))))) ? (13284872827890993942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) >= (var_13)))))));
        var_19 ^= var_11;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_5 [i_1])))) ? (var_1) : (((/* implicit */unsigned long long int) (-(arr_5 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 347680537U))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))))));
        arr_9 [i_1] = ((((/* implicit */_Bool) ((((1029865121113130202LL) & (((/* implicit */long long int) ((/* implicit */int) var_7))))) >> (((((/* implicit */int) min(((short)-5407), (var_0)))) + (5417)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_2 [14])) : (5576316386901229691LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_6 [i_1])) != (var_13)))), (((var_2) / (arr_5 [i_1])))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_20 |= ((/* implicit */_Bool) (-(arr_14 [i_3])));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((~(var_10))) : (var_3)));
                            arr_25 [i_5] [i_6] &= ((/* implicit */signed char) var_14);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_28 [i_2] = ((/* implicit */unsigned long long int) var_16);
            arr_29 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_2] [i_7])) && (((/* implicit */_Bool) var_2)))))) : (arr_15 [(unsigned char)1] [i_7] [i_2])));
        }
        for (unsigned short i_8 = 4; i_8 < 20; i_8 += 2) 
        {
            arr_34 [i_2] = ((/* implicit */unsigned char) 9007199250546688LL);
            var_22 = var_4;
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (arr_10 [(unsigned char)2])));
        var_24 = ((((/* implicit */long long int) var_2)) != (var_14));
    }
    for (long long int i_9 = 2; i_9 < 21; i_9 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */int) 3028547464223387514LL);
        var_26 = ((/* implicit */unsigned int) ((max((arr_11 [i_9]), (((/* implicit */long long int) arr_31 [i_9] [(_Bool)1] [i_9])))) << (((((/* implicit */int) var_12)) >> (((var_16) - (3760492317U)))))));
        arr_37 [i_9] = ((/* implicit */short) ((5576316386901229691LL) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [17] [i_9] [i_9])))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) (unsigned short)28976))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_9 - 1] [i_9])) < (((/* implicit */int) var_11))))) : (((/* implicit */int) min(((unsigned short)28988), (((/* implicit */unsigned short) (_Bool)0)))))))) : (((arr_21 [i_9] [7] [13U] [i_9 + 1] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)0)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-13057))) & (var_16)))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (unsigned char i_11 = 3; i_11 < 22; i_11 += 3) 
            {
                {
                    var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_11] [i_10]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_13))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_21 [i_9 - 1] [i_10] [i_11 + 1] [i_12] [20])), (arr_20 [i_9 - 1] [i_10])))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_10)) : (var_15)))))) : (max((min((var_13), (((/* implicit */unsigned long long int) arr_35 [i_9])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))))));
                    }
                    var_31 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (var_10)))), (((((/* implicit */_Bool) (unsigned char)102)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28969))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))), (((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned char)7] [i_9] [i_9] [(unsigned char)7] [i_9])))))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 19; i_14 += 1) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_10] [i_11 - 2] [i_10])) || (((/* implicit */_Bool) var_13)))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10] [i_11 - 3] [i_10]))) & (arr_48 [i_11 + 1] [i_14 + 2] [i_13] [i_11 + 1] [i_11 + 1] [i_11])))));
                                arr_50 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_33 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)48)) > (((/* implicit */int) var_8))))), (((min((0ULL), (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */int) (unsigned char)0))))))));
    /* LoopSeq 1 */
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        var_34 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_2)))));
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (+(max((((/* implicit */long long int) var_4)), (arr_11 [i_15]))))))));
    }
}
