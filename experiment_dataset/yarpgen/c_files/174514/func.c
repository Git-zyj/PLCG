/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174514
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_1 [i_0]))))) ? ((((~(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_19)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-28096)) : (var_5))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (short)28100))))))), (((((/* implicit */_Bool) max((((/* implicit */short) var_9)), ((short)28096)))) ? (16540537838557648357ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)178)))))))));
    }
    var_21 = ((/* implicit */long long int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_10)))) > (((((/* implicit */unsigned long long int) min((256998562), (((/* implicit */int) (unsigned char)19))))) + (((12287404066459254905ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 4 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] [(unsigned short)12] = ((/* implicit */short) arr_5 [i_1]);
        var_22 = ((/* implicit */unsigned long long int) 5021598954129070429LL);
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63504)) + (((/* implicit */int) (signed char)52))))) ? (max((((/* implicit */long long int) ((unsigned char) 11ULL))), (var_7))) : (((/* implicit */long long int) min((993617810U), (4294967288U)))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) (unsigned short)94);
        arr_11 [i_2] &= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_2])), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) * (((((/* implicit */long long int) 508569186)) & (5583517191441525007LL)))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (short i_5 = 3; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(7019040007615814395LL))))));
                        arr_20 [i_3] = 7U;
                        arr_21 [i_3] [i_4] [(unsigned char)7] = ((min((max((-6373747257136512584LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) || (((/* implicit */_Bool) arr_4 [i_2]))))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)107))));
                    }
                } 
            } 
        } 
        arr_22 [2ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)31)) / (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (unsigned char)2)) ? (max((3795748311U), (((/* implicit */unsigned int) (unsigned short)48052)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_19)))))))));
    }
    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_6))));
        var_25 = ((/* implicit */long long int) min((var_25), (((max((((/* implicit */long long int) (unsigned char)32)), (var_3))) & (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_1 [3LL])))))))))));
        arr_26 [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)15)));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        var_26 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_3 [i_7])), (arr_4 [i_7]))) ^ (((/* implicit */unsigned long long int) ((max((var_14), (var_9))) ? (((unsigned int) arr_28 [i_7])) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)245), ((unsigned char)230))))))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_4 [i_7]))));
    }
}
