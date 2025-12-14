/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113297
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
    var_16 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = var_11;
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (signed char)-45))));
                }
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) var_2))))));
                arr_12 [(unsigned char)7] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1358951304U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_10))) - (((/* implicit */long long int) -1))));
                arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) (signed char)-32))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_16 [i_1] [i_1] = ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0]))) : (8622904307708456079LL));
                var_19 = ((/* implicit */unsigned long long int) arr_14 [i_0]);
            }
            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [23ULL] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) var_10)) : (var_8))))));
                            arr_26 [i_7] [i_7] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(453567996U)));
                        }
                    } 
                } 
            } 
            var_22 *= ((/* implicit */unsigned long long int) var_10);
            var_23 += ((/* implicit */unsigned int) (-(var_6)));
        }
        for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
        {
            var_24 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-2222)) : (((/* implicit */int) (signed char)67)))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_34 [i_10] [i_9] [i_8] [i_8] [i_9] [i_0] |= arr_30 [i_10];
                        arr_35 [i_9] [i_8] [i_8 + 2] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_9] [i_8])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (var_6) : (((/* implicit */unsigned long long int) var_11))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
    {
        arr_38 [i_11] = ((/* implicit */unsigned int) var_15);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) <= (arr_6 [i_11]))))) : ((+(-3797422066797070442LL)))));
        var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_4 [i_11] [i_11] [i_11])))));
    }
}
