/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186094
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
    var_17 -= ((/* implicit */signed char) var_1);
    var_18 = ((/* implicit */unsigned long long int) (unsigned short)55924);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = var_5;
        var_20 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)55923)) : (((/* implicit */int) var_0)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_21 -= ((/* implicit */unsigned char) ((var_8) + (arr_0 [i_1] [(unsigned short)2])));
        arr_6 [i_1] = ((/* implicit */signed char) ((int) var_11));
        var_22 *= ((/* implicit */unsigned short) var_8);
    }
    for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)168)), (var_7))))))), (min((var_1), (((/* implicit */unsigned long long int) ((long long int) var_0)))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */long long int) arr_12 [20LL] [11] [i_4])), (((((long long int) var_6)) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_4]))))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_2 + 2] [i_5 + 2]))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_2 - 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3])) < (((/* implicit */int) var_14)))))));
                                arr_19 [i_5] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)9612)), (((((/* implicit */int) (unsigned short)30943)) + (((/* implicit */int) (unsigned short)55922))))))) & (9003736509521547275LL)));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((short) max((((((/* implicit */int) var_6)) >> (((65408U) - (65404U))))), (((/* implicit */int) var_15))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)34593)), (var_8)))) : (((long long int) var_16))));
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1139901588)) ? (((((/* implicit */_Bool) (unsigned short)9612)) ? (79521925U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1370575738)) ? (268435456) : (((/* implicit */int) (unsigned char)147)))))))) ? (min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12173)))));
        var_29 = ((/* implicit */int) min((var_29), (((((((/* implicit */int) (unsigned char)68)) % (((/* implicit */int) (unsigned short)9584)))) + (((/* implicit */int) arr_20 [i_7] [(unsigned char)4]))))));
    }
}
