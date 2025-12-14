/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123295
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) var_14))))))) ? (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_4)))), ((+(var_4))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (var_10)))), (var_9)))), (var_13)));
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)20492))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-20520))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_1 [i_1 + 2] [i_1]))))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16320))));
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 15728640U))))) & ((+(((/* implicit */int) var_0))))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            arr_17 [i_2] [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 1]))) & (var_4)));
            arr_18 [i_3] [i_3] = ((/* implicit */unsigned short) (-(4279238641U)));
            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0))));
            arr_19 [i_2] [i_3] [i_3 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
        }
        arr_20 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_3))))) ? (((arr_11 [i_2 - 1]) ? (arr_15 [(short)9]) : (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_12 [i_2]))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (arr_9 [(short)4])));
    }
    for (long long int i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_24 = min((((/* implicit */short) (!(((/* implicit */_Bool) var_15))))), (var_15));
        var_25 = ((/* implicit */int) min((var_25), ((~(((((/* implicit */int) arr_14 [i_4 - 1])) - (((/* implicit */int) arr_11 [i_4 - 1]))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            arr_35 [i_7] [i_9] [i_7] [i_8] [i_9] [i_8] [i_5 + 1] = ((/* implicit */long long int) (~(var_10)));
                            arr_36 [(unsigned short)8] [i_8] [i_7] [i_8] [i_5 - 1] [i_7] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            } 
            arr_37 [i_5] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_5] [i_6]))));
        }
        for (unsigned char i_10 = 1; i_10 < 20; i_10 += 1) 
        {
            arr_40 [i_5] [i_5] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_1)) - (43870)))));
            arr_41 [i_5] [i_10] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_14)) : (var_6)))));
        }
        for (int i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 2; i_13 < 17; i_13 += 3) 
                {
                    {
                        arr_51 [i_5] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_48 [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 1]))));
                        arr_52 [i_11] [i_11] [i_12] [i_12] [i_13 + 1] = ((/* implicit */int) (((-(var_4))) | (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) var_13);
            arr_53 [i_11] = ((/* implicit */_Bool) ((signed char) var_14));
            arr_54 [(short)9] [i_11] [(short)9] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (arr_10 [i_5] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        }
        var_27 = ((/* implicit */short) ((unsigned int) 1266127985U));
        var_28 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_3)))));
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            var_29 = (+(((/* implicit */int) (short)-1)));
            arr_57 [i_5] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_0))))));
        }
    }
}
