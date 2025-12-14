/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168405
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
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (short)-25648)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)51256))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51891))) % (5137406846249861329ULL))))));
    var_21 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) var_9);
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) var_12)) ? (13309337227459690275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13535))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 4; i_2 < 18; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)13634);
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */long long int) (signed char)30);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) 12208138395183393523ULL)));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) (unsigned short)13651);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
                            var_23 &= ((((/* implicit */_Bool) 810392826U)) ? (((((/* implicit */_Bool) (unsigned short)51915)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-86)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (-1178414866))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~((-(((/* implicit */int) var_0)))))))));
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) 810392826U);
            arr_22 [i_0] [i_2] = (unsigned short)57344;
        }
        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) 13309337227459690267ULL);
                        arr_31 [i_0] [i_0] = ((/* implicit */long long int) var_6);
                    }
                } 
            } 
            arr_32 [i_0] [i_0] [i_6 + 1] = ((/* implicit */unsigned short) 4183908981U);
            arr_33 [i_0] [i_6] |= ((/* implicit */unsigned char) 2ULL);
            var_25 ^= ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */int) (unsigned short)13615)) ^ (((/* implicit */int) var_12))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -2147483647)) * (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5))))))));
            arr_34 [i_0] [i_0] = ((/* implicit */signed char) (((-((+(13309337227459690308ULL))))) != (((/* implicit */unsigned long long int) 1260533207))));
        }
        /* LoopNest 3 */
        for (long long int i_9 = 2; i_9 < 18; i_9 += 3) 
        {
            for (unsigned char i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((6ULL) > (((/* implicit */unsigned long long int) -2445120408946597628LL)))))) % (((unsigned int) (unsigned char)240))))) ? (5137406846249861343ULL) : (((((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13610))) : (13309337227459690309ULL))) + (((/* implicit */unsigned long long int) 4183908981U))))));
                        arr_43 [i_0] [i_0] [i_0] [(unsigned short)18] [(unsigned short)18] [i_0] &= ((/* implicit */short) var_7);
                        arr_44 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 11ULL);
                    }
                } 
            } 
        } 
    }
    for (short i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        arr_48 [i_12] = ((/* implicit */long long int) 3384513029U);
        arr_49 [i_12] |= ((/* implicit */long long int) 3484574447U);
        arr_50 [i_12] &= ((/* implicit */short) (((!(((/* implicit */_Bool) (-(-2147483647)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) (unsigned char)106))))) : (910454249U)));
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (signed char i_16 = 1; i_16 < 22; i_16 += 4) 
                        {
                            {
                                arr_61 [i_12] [i_13] [i_12] [i_13] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551600ULL))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))));
                                var_28 = ((/* implicit */unsigned char) (unsigned short)51896);
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 29ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_4)))))));
                    var_30 = ((/* implicit */signed char) var_18);
                }
            } 
        } 
    }
}
