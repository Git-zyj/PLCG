/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151000
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1782951259)) && (((/* implicit */_Bool) (+(1613538059953942539ULL))))));
                        var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1]) : (((((((/* implicit */_Bool) 1782951260)) ? (((/* implicit */long long int) -1782951261)) : (730117386560326901LL))) / (2766380677706603508LL)))));
                        var_14 = ((/* implicit */long long int) ((max((arr_1 [i_0]), (arr_1 [i_0]))) != (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2] [i_0])))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) << (((1782951258) - (1782951244))))) >> ((((~(((/* implicit */int) arr_6 [i_1] [i_2] [i_4])))) + (136)))));
                        arr_13 [i_0] [i_1] [i_2] [(unsigned short)6] [i_4] [12LL] = ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_2] [(unsigned char)3]), (arr_4 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)69))) / (arr_1 [i_2]))) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)64283)))))))) : ((+(((int) 6743089353679414843LL)))));
                        arr_14 [8LL] [(unsigned char)5] [i_2] [8LL] [i_2] = ((/* implicit */long long int) max((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2]))))), (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) << (((((/* implicit */int) var_4)) - (63416))))))), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [(unsigned char)15]), (((/* implicit */long long int) var_6))))) || (((/* implicit */_Bool) (~(-7408388975067796659LL)))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_2] [i_1] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1] [i_5]))))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned char) -8650259180205105657LL)))));
                        var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [(unsigned short)15] [i_1] [i_2]))))) : (((arr_17 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) -1782951259)) : (arr_15 [i_0] [i_1] [8] [i_1] [i_5]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_4 [i_1] [i_1] [i_5] [i_5])))))));
                        var_17 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5837386398139639532LL))));
                    }
                    arr_19 [i_0] [i_1] [i_2] = arr_8 [i_0] [i_2] [i_2] [i_2];
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (unsigned char)235);
                                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_1] [i_2]))) && (((/* implicit */_Bool) min((min((arr_23 [i_0] [i_7] [i_6] [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_0])))), (arr_21 [i_0] [i_0] [i_2] [i_6]))))));
                                arr_25 [i_7] [i_1] [i_7] [i_1] [i_0] = (+(916702349674528600LL));
                                arr_26 [i_7] [i_0] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4300637230560839926LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (4549157355044108782LL))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */unsigned short) ((281440616972288LL) / (((/* implicit */long long int) (-(-1782951259))))));
                    arr_27 [i_0] [i_1] = (~(max((((/* implicit */long long int) (unsigned short)7400)), (min((((/* implicit */long long int) (_Bool)1)), (var_9))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)0)) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (var_0))))) / ((+(((/* implicit */int) (_Bool)1))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)87))))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) ((-8990094336849010788LL) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_7))))))));
}
