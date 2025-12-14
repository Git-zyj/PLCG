/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12812
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) max(((-(var_6))), (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1])) | (((/* implicit */int) var_3))));
            var_13 = ((/* implicit */unsigned char) (+((+(18446744073709551596ULL)))));
        }
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 20ULL)) ? (0LL) : (((/* implicit */long long int) 913043440U))));
            var_15 = ((/* implicit */unsigned long long int) var_5);
        }
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? ((~(11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((long long int) -23LL))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_2] [i_2]))))) : (var_11))));
                                arr_23 [i_2] [i_2] [i_4] [i_5] [i_6] [i_2] = ((/* implicit */short) (+(max((3215905364U), (((/* implicit */unsigned int) (unsigned short)15))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)234)), (var_4))))) : (max((-1LL), (((/* implicit */long long int) var_1))))));
                                arr_30 [i_2] [i_9 - 2] [i_9] [i_8] [i_5] [i_4] [i_2] = ((/* implicit */unsigned char) ((unsigned short) var_3));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(arr_13 [i_2])))) - ((-((+(1079061929U)))))));
                        arr_33 [i_2] [i_4] [i_5] [i_2] [i_2] [i_2] = (~(((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)87)))));
                    }
                    for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        arr_37 [i_11] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3265461675498397225ULL)) ? (2147483638) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))));
                        var_19 = max((((/* implicit */unsigned int) ((_Bool) ((var_5) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_11)))));
                        var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1436928210) : (((/* implicit */int) (unsigned char)26))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_12 [i_2] [(short)4]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 1; i_12 < 24; i_12 += 3) 
                        {
                            arr_40 [i_2] [i_11] [i_5] [i_4 - 2] [i_4] [i_2] [i_2] = max(((unsigned short)34004), ((unsigned short)43230));
                            arr_41 [i_2] [i_2] [i_2] [(unsigned char)11] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_42 [i_12] [i_2] [i_4] [(unsigned short)12] [i_5] [i_2] [i_2] = ((/* implicit */unsigned char) 1131950853U);
                            var_21 = ((/* implicit */short) (+(1261737349)));
                        }
                    }
                    arr_43 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? ((~((~(var_11))))) : ((~(var_11)))));
                    arr_44 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_0)))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1131950853U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))))), (arr_36 [i_2] [i_4] [18] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 36ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))))) : (((/* implicit */int) arr_22 [i_2] [i_5])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_2] [(_Bool)1] [i_2] [(unsigned char)4] [i_2]))))), (min((((/* implicit */long long int) var_8)), (var_7))))));
        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) * (((/* implicit */int) arr_4 [i_2])))))));
    }
    var_24 = max((((/* implicit */long long int) var_10)), (var_7));
    var_25 = ((/* implicit */_Bool) ((unsigned short) (signed char)127));
    var_26 = ((/* implicit */int) var_0);
}
