/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104958
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-28391)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4688))) > (0ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 12234105670350157417ULL))))) : (((/* implicit */int) (short)32767)))) : (((((/* implicit */_Bool) (short)-2266)) ? (((/* implicit */int) (short)2265)) : (((/* implicit */int) (short)19651))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_10 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((var_7) >> (((arr_1 [12]) - (8911040428748289807ULL))))), ((-(((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((var_4), ((short)32767))))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)2265))) % ((-(63718538164479165LL)))))));
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (+(var_7))))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (short)32754)))), (((/* implicit */int) (short)0))))));
                            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_2 - 1]))));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max(((short)32767), (arr_16 [i_0] [i_1] [(short)6] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(short)8] [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) -1450707485600534754LL)))))) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (var_8))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-2266)) != (((/* implicit */int) (short)-32363)))) ? (417469231) : (((/* implicit */int) (short)0)))))));
            arr_17 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-28463))))) >= (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_14 = ((/* implicit */short) ((var_9) != (((/* implicit */int) arr_19 [i_0 + 1]))));
            var_15 = ((/* implicit */int) min((var_15), (((((((/* implicit */_Bool) (short)17385)) ? (((/* implicit */int) (short)14152)) : (-417469231))) | (((((/* implicit */_Bool) (short)19002)) ? (811812498) : (((/* implicit */int) (short)(-32767 - 1)))))))));
            arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? (((/* implicit */int) ((short) (short)-9115))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3])))))));
        }
        var_16 = var_6;
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (short)7048)) ? (arr_28 [i_6] [i_7] [i_8] [i_8]) : (arr_28 [i_6] [i_7] [4ULL] [i_8]))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)2265)) ? (max((((/* implicit */unsigned long long int) (short)-2286)), (max((8456196009249344707ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26765)))));
                                var_19 = ((/* implicit */int) min((var_19), (417469226)));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 417469230)) ? ((+(min((2948174017721713172ULL), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29195))))))));
                                var_21 = ((/* implicit */long long int) (+(min((10436751983495509915ULL), (arr_23 [i_9 - 2])))));
                                arr_33 [i_8] = ((/* implicit */short) arr_23 [i_10]);
                            }
                        } 
                    } 
                    arr_34 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
        var_22 += ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_24 [i_6] [i_6]))));
    }
    var_23 = var_2;
}
