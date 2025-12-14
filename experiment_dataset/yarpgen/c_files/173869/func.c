/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173869
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((5202682904439077130ULL) / (((/* implicit */unsigned long long int) 1580907796U)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (var_7))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))))))));
        var_12 = ((/* implicit */unsigned int) min((9223372036854775807LL), (((/* implicit */long long int) (short)32767))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_13 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1]))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_12 [(short)11] [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551602ULL))));
                    var_14 = ((/* implicit */unsigned int) arr_9 [4LL] [i_2]);
                    var_15 = ((short) arr_7 [i_2] [(_Bool)0]);
                    var_16 *= arr_3 [i_1];
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-31353))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_1])) < (var_5))))))))));
    }
    for (short i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (max((((long long int) arr_9 [i_4 - 1] [i_4])), (((/* implicit */long long int) (-(((/* implicit */int) (short)-31353)))))))));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_19 -= ((((/* implicit */_Bool) min((arr_1 [i_6 + 1]), (arr_1 [i_6 + 2])))) ? (min((arr_6 [i_4 + 1]), (arr_6 [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((((var_5) + (9223372036854775807LL))) >> (((var_1) + (1848014604304994494LL)))))));
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25146)) >> (((/* implicit */int) ((((/* implicit */_Bool) 1493916347U)) || (((/* implicit */_Bool) var_7)))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3043595525U)) / (arr_8 [i_5] [i_6] [i_7])))) : (arr_23 [i_4] [i_5] [i_6] [11U]))), (((18424206799536556872ULL) / (var_3)))))));
                    }
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) > (((/* implicit */int) min((arr_4 [8ULL] [i_6]), (var_10)))))))));
                    var_23 = ((((((/* implicit */_Bool) arr_25 [4LL] [i_5] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_5] [i_6 + 1]))) : (3043595545U))) >> (((var_0) - (13032102999725455399ULL))));
                    arr_27 [i_5] [11LL] [i_6] [i_6 - 2] = ((/* implicit */short) ((var_3) - (((/* implicit */unsigned long long int) 3043595520U))));
                }
            } 
        } 
        arr_28 [i_4] = ((/* implicit */unsigned int) 7378187276551928878LL);
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_24 -= ((((/* implicit */_Bool) arr_1 [i_8])) ? (((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2686509185U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2686509160U)) ? (arr_30 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_0))) : (((/* implicit */unsigned long long int) var_2)))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > ((+(((((/* implicit */_Bool) 2686509149U)) ? (((/* implicit */int) (short)-16878)) : (((/* implicit */int) (_Bool)1))))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((((/* implicit */_Bool) ((2394646031220321274LL) & (((/* implicit */long long int) 3166138189U))))) ? (((((/* implicit */_Bool) (short)-31371)) ? (-3665421921688339674LL) : (((/* implicit */long long int) 715492435U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) + (9223372036854775807LL))) >> (((((arr_29 [i_8]) + (arr_30 [i_8] [i_8]))) - (8609050522162653772ULL))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)7108)), (var_2)))) % (47004785597128418LL))));
}
