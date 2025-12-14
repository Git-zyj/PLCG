/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171769
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((max((7U), (var_8))), (((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_7))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) (-(arr_10 [i_3] [i_3] [i_2] [i_3] [5] [i_1])));
                        arr_11 [i_1] [i_0] [i_2] = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) == (var_8)))));
                    }
                    for (int i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) (+((+(arr_8 [i_4] [i_4] [i_0 + 1])))));
                        var_18 = ((/* implicit */unsigned short) var_1);
                    }
                    var_19 = ((/* implicit */_Bool) ((long long int) -2147483643));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 524032);
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((((/* implicit */int) var_7)) | (((/* implicit */int) var_4)))) < (((/* implicit */int) max((((/* implicit */short) var_12)), (var_14))))))), (var_9)));
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 11LL))));
        arr_16 [i_5] = ((/* implicit */_Bool) var_4);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_23 += var_3;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (short i_8 = 3; i_8 < 9; i_8 += 2) 
            {
                {
                    arr_23 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_19 [i_8] [i_8] [i_8 + 2])), ((~(var_8))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */int) ((unsigned short) var_12)))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned char)30)) ? (524036) : (((/* implicit */int) (unsigned char)117)))))))));
                    arr_24 [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_17 [i_7] [i_7]);
                }
            } 
        } 
        arr_25 [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) 2132960825)), (((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) arr_12 [i_6] [i_6] [i_6] [i_6])) : (var_0)))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) var_4);
                        arr_35 [i_10] [i_10] [i_10] [i_11] [i_11] = ((/* implicit */long long int) var_8);
                        var_26 = ((/* implicit */long long int) var_9);
                        arr_36 [i_11] [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_12)) : (max((arr_10 [i_6] [i_6] [(_Bool)1] [(unsigned char)3] [i_6] [i_6]), (((/* implicit */int) var_7)))))), (((/* implicit */int) (_Bool)1))));
                        arr_37 [i_6] [(signed char)2] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
        var_27 += ((/* implicit */short) 35184371564544LL);
    }
}
