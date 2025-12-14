/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124740
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
    var_20 = ((/* implicit */unsigned short) max((0), (4)));
    var_21 = ((/* implicit */short) max(((~(var_0))), (((/* implicit */long long int) var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_22 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_23 *= ((/* implicit */unsigned short) var_19);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4)) ? (arr_12 [(_Bool)1] [i_4 - 3] [i_1] [i_1]) : (arr_12 [i_1] [i_4 - 3] [i_4 - 3] [i_4 + 2])));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [i_1])) - (-1)));
                    }
                } 
            } 
            var_26 += ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) : (arr_16 [i_1])));
        }
        for (short i_5 = 2; i_5 < 21; i_5 += 4) 
        {
            var_27 = ((/* implicit */long long int) (-(-1)));
            var_28 = ((/* implicit */int) max((var_28), (((int) ((arr_16 [i_1]) & (arr_16 [i_1]))))));
            arr_19 [i_1] [i_1] [i_5 - 2] &= ((/* implicit */short) 4);
        }
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (unsigned short)65526))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */int) ((_Bool) 2147483647));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_8])) ? (arr_7 [i_7] [i_1]) : (arr_7 [i_1] [i_1]))))));
                            arr_30 [i_1] [i_6] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) : (arr_16 [i_6])))) ? (0) : ((~(((/* implicit */int) arr_26 [i_6] [i_6] [i_7]))))));
                            var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_7] [i_9]))));
                        }
                    } 
                } 
            } 
        }
        var_33 = ((/* implicit */int) arr_26 [i_1] [i_1] [(short)18]);
    }
    for (unsigned int i_10 = 1; i_10 < 23; i_10 += 3) 
    {
        var_34 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_4)), (1778178435U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1778178435U)) ? (((/* implicit */int) (short)-21748)) : (4))))))) ? (min((((/* implicit */long long int) arr_33 [8LL])), (((long long int) arr_33 [(unsigned short)16])))) : (((/* implicit */long long int) ((((int) (-9223372036854775807LL - 1LL))) ^ (0))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                {
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) arr_36 [i_11]))));
                    var_36 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                    var_37 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((arr_32 [i_10]) || (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) 1)) ? (-634134014) : (((/* implicit */int) (short)-32743)))) : (((/* implicit */int) (short)-26918))))), (min((((/* implicit */unsigned int) -22)), (2621598175U)))));
                }
            } 
        } 
        arr_42 [i_10] = ((/* implicit */unsigned short) arr_34 [i_10] [i_10 + 1] [i_10 + 1]);
    }
    var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) max((((/* implicit */int) (_Bool)1)), (0)))))));
}
