/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138085
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((var_14), ((-(((/* implicit */int) (!(var_9))))))));
                                var_15 *= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                                var_16 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned int) var_2)), (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */signed char) (+((+(((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4063232)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)9] [i_0]))) : (479307022U))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_20 *= ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_17 [i_7]))))));
        var_21 = ((/* implicit */unsigned int) arr_18 [i_7]);
    }
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        var_22 *= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_21 [i_8]))))));
        arr_22 [i_8] = ((unsigned long long int) arr_20 [i_8]);
    }
    for (unsigned char i_9 = 3; i_9 < 16; i_9 += 3) 
    {
        var_23 = (!(((/* implicit */_Bool) ((unsigned short) arr_20 [i_9]))));
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (arr_19 [i_9 - 1])));
                    var_25 = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 16; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_9 - 1])) ? (((/* implicit */int) (unsigned short)63505)) : (((/* implicit */int) max((arr_17 [i_9 - 2]), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_28 = ((/* implicit */signed char) (+((-(arr_38 [i_9] [i_14 - 1])))));
                        }
                    } 
                } 
                var_29 = min((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_20 [i_9])))))), (((((/* implicit */_Bool) (unsigned short)20538)) ? (((/* implicit */unsigned int) 4063232)) : (0U))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 3; i_16 < 17; i_16 += 4) 
            {
                for (signed char i_17 = 2; i_17 < 16; i_17 += 4) 
                {
                    for (unsigned char i_18 = 2; i_18 < 16; i_18 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(479307034U))))));
                            arr_48 [i_9] [i_12] [i_16] [5ULL] [(signed char)7] = max((((/* implicit */unsigned int) (!((_Bool)1)))), (min(((+(479307022U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) -4063232))))))));
        }
        for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                for (unsigned short i_22 = 1; i_22 < 14; i_22 += 4) 
                {
                    {
                        var_33 *= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                        var_34 *= ((/* implicit */_Bool) var_0);
                        var_35 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_27 [i_20])) ? (((/* implicit */int) var_12)) : (1261128672)))));
                    }
                } 
            } 
            arr_59 [i_9] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(2043963874U)))))) ? (var_1) : (((/* implicit */unsigned long long int) 2970755641U))));
        }
        for (unsigned short i_23 = 2; i_23 < 16; i_23 += 4) 
        {
            var_37 = arr_57 [i_9 - 3] [i_9 - 3] [i_9];
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 18; i_24 += 4) 
            {
                for (unsigned int i_25 = 1; i_25 < 17; i_25 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (_Bool)1))))));
                        var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_23] [i_23 + 2] [i_9])))))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_26 = 0; i_26 < 22; i_26 += 4) 
    {
        arr_69 [i_26] [11U] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)44998))));
        arr_70 [i_26] = (unsigned char)56;
        var_40 = (unsigned short)20528;
    }
}
