/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112788
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
    var_12 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_9))))))));
    var_13 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (var_7))))));
    var_14 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((unsigned short) var_2)))))));
    var_15 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0 - 2]))) ? (((var_9) & (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 1]))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3])) ? (arr_0 [i_0] [i_0]) : (var_6))))), (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_10))))));
        var_18 = arr_2 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) ((3285405019U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
        var_20 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) var_11)));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((((unsigned short) 2676186581U)), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)38)) >= (((/* implicit */int) (unsigned short)5)))))));
            arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_4 [i_1]))))), (arr_6 [i_1] [i_1]))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(var_7))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned long long int) (((!(((/* implicit */_Bool) arr_14 [i_1] [i_2])))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_24 &= ((/* implicit */long long int) ((unsigned int) arr_6 [i_6] [i_1]));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_25 = (~(var_3));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((long long int) arr_20 [i_1] [i_6])))));
                        var_27 = ((/* implicit */unsigned long long int) arr_13 [i_1]);
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_6]))))));
            var_29 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_2))))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)17)))))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_9])))))))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 1; i_10 < 22; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            arr_37 [i_1] [i_9 + 2] [i_9] [i_10] [i_9 + 2] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+((+(arr_29 [i_11] [i_10] [i_9 - 1] [i_1])))))), (max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)238)))))));
                            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_13 [i_1])) - (61693))))))) && (((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_29 [i_1] [i_9] [i_10 + 1] [i_1])), (var_3)))))));
                            var_32 -= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) arr_25 [i_12] [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))));
                        }
                    } 
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [(unsigned short)6]))))) : (arr_9 [i_1] [i_1] [i_1] [i_1])));
    }
}
