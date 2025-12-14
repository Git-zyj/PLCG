/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144915
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
            arr_6 [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? (8521848404494695543ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2002180676)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_3 - 1])) : ((~(((/* implicit */int) arr_4 [i_0]))))));
                        var_15 = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)147)) % (((/* implicit */int) var_10))))));
                    }
                } 
            } 
            arr_16 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2] [i_2])) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (16383LL) : (((/* implicit */long long int) arr_12 [i_0 + 1] [i_0 - 1] [i_2] [i_2]))));
        }
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_19 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 23; i_7 += 3) 
                {
                    {
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_0 - 1] [(_Bool)1])) ? (arr_22 [i_7] [i_5] [i_7 - 2] [i_5] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [i_6] [i_7])))));
                        var_18 = ((/* implicit */unsigned long long int) (+(arr_22 [i_0 - 1] [i_0 + 1] [i_5] [i_7 - 2] [i_7 + 1])));
                        arr_26 [i_0] [i_5] [i_5] [i_5] [i_5] = ((unsigned char) arr_17 [i_0] [i_0 + 1] [i_0]);
                        var_19 = ((/* implicit */int) arr_22 [i_0 + 1] [i_5] [i_6] [i_6] [i_7]);
                    }
                } 
            } 
            arr_27 [i_0] [i_0] [6U] = ((/* implicit */unsigned char) ((short) (unsigned char)147));
        }
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_20 -= ((/* implicit */_Bool) (+(arr_24 [8] [i_8] [i_8] [i_8] [i_8] [i_8])));
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0])) | (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_23 [i_0 + 1] [i_8] [i_8] [i_0 - 1]))));
            arr_32 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_8] [i_8] [i_0 - 1]))) : (arr_0 [i_8]))))));
            arr_33 [i_0] = ((/* implicit */short) arr_24 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]);
        }
    }
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) 408732615)), (2617159829U)));
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)227)))) : ((+(((/* implicit */int) var_9)))))))));
    var_25 = ((/* implicit */unsigned int) var_2);
    var_26 = max((((/* implicit */unsigned int) var_3)), (max((((/* implicit */unsigned int) (!(var_5)))), (((unsigned int) var_1)))));
}
