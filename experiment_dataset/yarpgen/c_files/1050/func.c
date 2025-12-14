/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1050
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
    var_16 = ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */unsigned char) (signed char)-21);
    var_18 -= ((/* implicit */unsigned int) (signed char)-1);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 1798095991644867895LL))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_15);
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_7 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)6]))) : (-1LL))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */short) arr_4 [i_1]))))) - (((/* implicit */int) ((unsigned char) var_1))))))))));
    }
    for (short i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        arr_17 [(unsigned char)10] [(unsigned char)10] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 4]))) + ((-(-4367659518292679979LL)))));
                        var_21 = ((/* implicit */unsigned int) var_12);
                    }
                } 
            } 
            arr_18 [i_3] [i_2] [(short)5] = var_8;
        }
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (1048320) : (((/* implicit */int) (unsigned short)12))));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_1);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2] [i_6] [i_7]))) : (var_9)));
                            arr_29 [i_9 + 1] [i_8] [i_7] [(_Bool)1] [i_8] [i_2] = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_8))));
        }
        var_26 = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 67192991)), (3679716919U)))), (((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2])) - (((((/* implicit */_Bool) var_6)) ? (arr_28 [i_2] [i_2] [(unsigned char)1] [i_2] [i_2] [i_2] [(unsigned char)6]) : (((/* implicit */unsigned long long int) arr_15 [i_2] [1U] [i_2] [i_2 + 4] [1U])))))));
    }
    for (unsigned int i_10 = 3; i_10 < 19; i_10 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_11 = 1; i_11 < 19; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) var_13);
                            arr_43 [i_12] [i_12] [i_12] [i_12] [i_14] = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_13))));
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) min((((((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_10] [i_10] [i_11 + 1] [(short)11])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10] [18U] [i_10] [18U] [i_10 + 1]))))), (((/* implicit */unsigned long long int) 5406657897102383921LL)))))));
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            var_30 = ((/* implicit */signed char) ((arr_46 [i_10] [i_10 + 1]) == (((/* implicit */int) var_12))));
            var_31 = ((/* implicit */short) var_6);
        }
        for (signed char i_16 = 1; i_16 < 20; i_16 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_4))));
            arr_50 [i_16] = ((/* implicit */_Bool) ((max((((long long int) var_5)), (((((/* implicit */_Bool) 1350012366U)) ? (((/* implicit */long long int) 196514262)) : (-9004053657314789174LL))))) / (((/* implicit */long long int) 2099224848))));
        }
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 3) 
        {
            var_33 = ((/* implicit */long long int) var_11);
            var_34 = ((/* implicit */unsigned char) (signed char)125);
        }
        arr_55 [7ULL] [11U] = ((/* implicit */long long int) (unsigned char)2);
        var_35 = ((/* implicit */unsigned long long int) var_5);
        var_36 = ((/* implicit */int) -5406657897102383930LL);
    }
}
