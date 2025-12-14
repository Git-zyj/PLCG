/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164761
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
    var_10 = ((/* implicit */_Bool) var_0);
    var_11 = min((var_8), (var_8));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_12 -= ((/* implicit */long long int) arr_3 [12]);
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_4)), ((-(((((/* implicit */_Bool) 60745831U)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) 537101588)) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0])))));
        arr_10 [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
        arr_11 [i_0] = ((/* implicit */_Bool) var_9);
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_8 [i_0] [i_0]) - (arr_8 [i_0] [i_0]))))));
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_17 [i_4] [i_5] [i_5] &= ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_0 [i_7] [i_5]))));
                            arr_26 [i_5] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 1] [i_7 + 1]))));
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (!((_Bool)1)))) : (((arr_23 [i_8] [i_7] [i_5] [i_5] [i_4]) ? (arr_12 [i_8]) : (var_9))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */int) min((((signed char) var_6)), (((signed char) (_Bool)1))))), ((-(arr_13 [i_4]))))))));
            var_19 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) 60745831U))))), (((((/* implicit */_Bool) (unsigned short)2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned long long int) (-(537101588))))));
            arr_27 [i_5] [i_4] = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_0)))))));
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4]))))) * (var_3)));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) (_Bool)1);
            arr_33 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1131537593)) ? (537101588) : (((/* implicit */int) (short)0))));
            arr_34 [i_9] [i_9] = ((/* implicit */signed char) (unsigned char)0);
        }
        for (signed char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((long long int) arr_7 [i_9] [i_11]));
            var_23 = ((/* implicit */unsigned short) (!(arr_35 [i_11])));
        }
        for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
        {
            var_24 ^= ((/* implicit */unsigned char) var_3);
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-17)))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_9] [(_Bool)1] [i_15])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_13])) && (((/* implicit */_Bool) var_5)))))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (_Bool)0))))))));
                            var_28 ^= (signed char)7;
                        }
                    } 
                } 
            } 
        }
        for (signed char i_16 = 3; i_16 < 18; i_16 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                arr_54 [8] [8] [(unsigned short)14] [i_16] = ((/* implicit */long long int) var_0);
                var_29 = ((/* implicit */long long int) (!(arr_23 [i_16 + 1] [i_16 - 2] [i_16 - 1] [i_16 - 3] [i_16])));
            }
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (_Bool)1))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)6))));
        }
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((16602115375787416810ULL) & (((/* implicit */unsigned long long int) 8816695829798555756LL))))) ? (((/* implicit */int) arr_45 [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_3 [i_9])))))));
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (arr_2 [i_9]) : (arr_2 [i_9]))))));
    }
    /* vectorizable */
    for (short i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)8))));
        var_35 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))));
        var_36 = (!((!(((/* implicit */_Bool) var_6)))));
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)63)))) : (562949953421311LL))))));
        arr_57 [i_18] [(signed char)1] = ((/* implicit */short) arr_6 [(_Bool)1] [i_18] [i_18] [i_18]);
    }
}
