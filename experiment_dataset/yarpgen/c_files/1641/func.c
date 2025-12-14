/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1641
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
    var_19 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((long long int) var_3)), (max((((/* implicit */long long int) var_1)), (var_14))))))));
        var_21 = min((var_5), (var_18));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (((unsigned long long int) arr_5 [i_0] [i_0 - 1] [i_0 - 1])))))));
            arr_7 [i_0] [i_0] [5ULL] = ((/* implicit */short) (+(((/* implicit */int) var_15))));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */int) var_18)) >> (((((/* implicit */int) var_3)) - (135))))) : (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)12]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_4 [(signed char)14] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((short) var_17))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15986))) != (arr_4 [i_0] [i_0 - 1] [i_0 - 1]))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) var_15);
        var_25 = ((/* implicit */_Bool) ((arr_4 [i_2] [i_2 - 1] [i_2 - 1]) * (((/* implicit */unsigned long long int) arr_1 [(short)11]))));
        var_26 = ((/* implicit */_Bool) ((8870707705186612929ULL) >> (((6171867027063546561ULL) - (6171867027063546533ULL)))));
        arr_10 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_3)))) / (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_13)))))) % (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_3]))))))));
        var_27 = ((/* implicit */short) ((((/* implicit */int) ((short) var_1))) >= (((((/* implicit */_Bool) arr_11 [i_3] [(signed char)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))));
        arr_14 [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (4384365232487015398ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (((unsigned long long int) arr_12 [i_3 - 1]))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_16))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((var_12) && (((/* implicit */_Bool) var_10))))), ((unsigned char)64))))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_5 [i_5] [i_5] [i_4]);
            var_29 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4 - 1]))) + (9441310485520863037ULL)));
        }
        arr_22 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_4 - 1]))));
        arr_23 [i_4] [i_4] = ((/* implicit */_Bool) var_8);
        arr_24 [i_4] = ((/* implicit */_Bool) ((arr_1 [i_4 - 1]) - (((long long int) var_13))));
    }
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9576036368522938686ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))))));
        arr_28 [10ULL] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) : (max((5116097895789896166ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
    }
    /* LoopNest 3 */
    for (signed char i_7 = 2; i_7 < 16; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 4; i_9 < 16; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) var_2);
                        var_31 = ((short) arr_32 [i_7 - 1]);
                        arr_38 [(unsigned char)14] [(unsigned char)14] [i_9 - 3] [(short)8] = ((/* implicit */long long int) ((arr_33 [i_9 - 1] [i_9 - 1] [i_9]) ? (((/* implicit */int) arr_33 [i_9 - 2] [i_9 - 3] [i_10])) : (((/* implicit */int) (short)15360))));
                    }
                    var_32 = ((/* implicit */unsigned long long int) var_2);
                    arr_39 [i_7 + 1] [i_8] [i_8] [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((14130950216866923101ULL), (((/* implicit */unsigned long long int) (unsigned char)35))))) ? (((/* implicit */unsigned long long int) 9208608744909610427LL)) : (arr_35 [i_7 - 1]))) >> (((/* implicit */int) ((((/* implicit */_Bool) (-(var_11)))) || (((/* implicit */_Bool) arr_31 [(unsigned char)10] [5ULL] [i_9])))))));
                    arr_40 [i_7 - 1] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) var_11);
                }
            } 
        } 
    } 
}
