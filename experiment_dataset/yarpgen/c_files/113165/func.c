/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113165
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */int) max((12409550356828458527ULL), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))), ((~(arr_4 [i_0] [i_0])))))));
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) ((short) var_8))) : ((+(((/* implicit */int) var_16)))))))));
                            }
                            arr_15 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_3]);
                            var_19 = ((/* implicit */signed char) 758854082U);
                            var_20 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) / (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105)))))))));
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) >> (((((((/* implicit */_Bool) (short)-1)) ? (arr_3 [i_0] [14LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))) - (114183166666715543LL)))))) ? (16U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483642)) || (((/* implicit */_Bool) (unsigned char)85))))) == ((+(arr_7 [19] [i_0] [i_1 - 1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_11)) : (var_10))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)28)))))))))) ^ (var_10)));
    var_22 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_13))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_15))));
        }
        arr_24 [i_5] = ((/* implicit */unsigned short) arr_17 [i_5]);
        var_24 = ((((/* implicit */int) max((arr_18 [i_5]), (((/* implicit */signed char) arr_17 [i_5]))))) >> (((var_10) - (10711020800962473633ULL))));
    }
    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_25 = ((((arr_25 [i_7] [9ULL]) * (arr_25 [i_7] [i_7]))) * ((+(arr_25 [i_7] [i_7]))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_9)) : (arr_26 [i_7])))))) && (var_13)));
        var_27 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_14))))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (var_12)))))) : (((/* implicit */int) ((signed char) ((11023454081542461948ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            arr_30 [i_7] = ((/* implicit */unsigned short) ((arr_26 [i_7]) - (((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_27 [4U]) : (arr_26 [i_7])))));
            var_29 = ((/* implicit */short) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)150))));
            /* LoopNest 3 */
            for (long long int i_9 = 4; i_9 < 23; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) (-(var_7)));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7] [i_7] [i_9])) ? (var_12) : (var_4)))) ? (((9037405266712769604LL) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-93))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13))) == (3000412539U)))))));
                            arr_39 [i_7] [i_8] [i_9] [i_7] [i_10] [i_8] [i_11] = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (short)32744))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -915148089)), (arr_37 [i_7] [i_8] [i_7] [i_10] [i_7] [i_8])))) || (((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_8] [i_9 + 2] [i_10] [i_11]))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)27261)) : (arr_28 [i_7] [i_7])))) ? ((~(arr_28 [i_7] [i_7]))) : (((/* implicit */int) ((((/* implicit */int) (short)-6638)) < (((/* implicit */int) (unsigned char)4)))))));
        }
    }
}
