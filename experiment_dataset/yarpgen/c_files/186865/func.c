/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186865
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
    var_15 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((-5685427777720637878LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [0ULL] [i_1] [i_2 + 1]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) 16139192747843654348ULL))));
                        var_18 = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_3]);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 2307551325865897267ULL)) || (((/* implicit */_Bool) 1048649468))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) var_5))));
                    }
                    var_21 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) | (var_1)))));
                    var_22 = ((/* implicit */_Bool) (short)9800);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        var_23 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((var_13) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (max((4411301294260484182ULL), (16139192747843654350ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_4]), (arr_11 [i_4]))))) + (max((17178086211694449634ULL), (((/* implicit */unsigned long long int) arr_10 [i_4 - 1]))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_11))));
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((max((max((((/* implicit */long long int) var_6)), (var_0))), (((/* implicit */long long int) ((unsigned short) arr_12 [i_4 + 1] [(signed char)20]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (14267920511631048433ULL)))) ? (((arr_19 [i_7] [i_5] [i_6]) % (arr_20 [i_4 - 1] [(unsigned short)19] [i_4 - 1] [i_7] [(unsigned short)19]))) : (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_5])) ? (1058427324U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4 + 1] [i_5] [i_6] [i_4 + 1] [i_8]))))))))));
                                var_26 = ((/* implicit */unsigned char) -1717781292);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) 1048649468)), (var_1))) + (max((((16139192747843654349ULL) >> (((arr_15 [i_4 - 1]) + (707037150902415571LL))))), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [i_4] [i_4 - 1]))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_12))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))));
    var_29 = ((/* implicit */long long int) var_9);
}
