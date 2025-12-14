/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155267
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
    var_15 &= ((/* implicit */unsigned long long int) var_0);
    var_16 &= ((/* implicit */_Bool) var_12);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)24062), (((/* implicit */unsigned short) (signed char)63))))) && ((!(((((/* implicit */_Bool) 2334156765U)) || (((/* implicit */_Bool) (signed char)0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_19 = var_6;
                        var_20 = ((/* implicit */int) 2334156765U);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : ((+(9198317313457550567ULL)))));
                        var_22 = ((((/* implicit */_Bool) arr_12 [i_0] [4ULL] [i_1] [i_2] [i_2] [i_3])) && (((/* implicit */_Bool) var_2)));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_23 = ((/* implicit */short) arr_12 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4]);
            var_24 = ((/* implicit */short) ((var_12) ^ (((/* implicit */unsigned long long int) arr_3 [i_4] [i_4]))));
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-93)) / (((/* implicit */int) (unsigned short)24062))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_4] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2921694172U))))));
        }
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_20 [i_5] &= ((/* implicit */signed char) 3410309285U);
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(15190128493555639759ULL))))));
                            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)63893))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) (short)1);
            arr_34 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_9] [i_0]);
            var_28 = ((/* implicit */signed char) (unsigned short)2473);
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    arr_41 [i_0] [i_10] [i_10] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) arr_39 [i_10] [i_11]))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [i_10] [i_10])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (arr_43 [i_12] [i_12]))))));
        var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)24082))));
    }
}
