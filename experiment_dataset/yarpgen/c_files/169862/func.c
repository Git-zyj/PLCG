/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169862
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_1) : ((+(((/* implicit */int) var_18)))));
        var_20 = ((/* implicit */unsigned short) var_3);
        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) | (arr_2 [i_0])))) ? (var_2) : (((/* implicit */long long int) arr_3 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((arr_6 [6LL]), (arr_4 [i_1])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_12 [(short)9] = ((/* implicit */unsigned short) ((arr_1 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
            var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [3LL] [i_2]))));
            var_23 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_17 [(_Bool)1] |= ((/* implicit */int) (((~(((/* implicit */int) arr_14 [i_1] [12ULL] [i_1])))) >= ((-(((/* implicit */int) var_12))))));
                        var_24 *= ((((((/* implicit */unsigned long long int) var_7)) < (var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_15));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_3] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) var_11)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                    }
                } 
            } 
            arr_18 [i_2] = ((/* implicit */signed char) (+(var_16)));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_20 [i_5] [i_5]), (((/* implicit */unsigned char) ((var_10) >= (((/* implicit */int) arr_19 [i_5] [i_5]))))))))));
        arr_22 [i_5] &= ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) arr_20 [i_5] [i_5])), (var_8)))));
        arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((((!(((/* implicit */_Bool) var_17)))) ? ((-(((/* implicit */int) arr_20 [19U] [i_5])))) : ((-(((/* implicit */int) arr_20 [i_5] [i_5])))))) : (((arr_19 [i_5] [i_5]) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) arr_20 [i_5] [i_5]))))));
    }
    var_26 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_15))))))), (var_12)));
    var_27 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? ((~(var_10))) : (((/* implicit */int) var_17))))));
}
