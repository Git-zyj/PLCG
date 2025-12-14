/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104561
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
    for (short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)27318)) >> (((6833613084628883477ULL) - (6833613084628883449ULL))))), ((-(((/* implicit */int) (unsigned short)38224))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421311ULL)) ? (((/* implicit */int) (unsigned char)248)) : ((+(((/* implicit */int) (_Bool)0))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-((~(var_3))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) 3682532188436740709ULL);
                        var_19 = ((/* implicit */long long int) arr_3 [i_0 - 1]);
                    }
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38217))) | (7572412281145084300ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((10874331792564467305ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [7LL] [i_2] [i_0])))))))))) || (((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) < (((/* implicit */int) var_1))))));
                        arr_20 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6 - 1] [i_2] [i_1] [(unsigned short)0]))) : (var_11))) <= (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11)))))) << (((((arr_4 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [2LL]))))) - (1382689832U)))));
                    }
                    for (long long int i_7 = 3; i_7 < 11; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_27 [7ULL] [i_1] [i_2] [i_7 - 3] = ((/* implicit */_Bool) (((+(arr_16 [i_0] [i_0 + 2] [(_Bool)1] [i_7 - 2] [i_7 - 2] [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3)))))))));
                            arr_28 [i_2] [i_7] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_9))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (-1034091454723629337LL)))))) | (((/* implicit */unsigned long long int) max(((-(arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]))), (((/* implicit */unsigned int) var_4)))))));
                        }
                        var_21 += ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0 - 1]))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44618))) == (-4634432959851950396LL)))))))));
                        arr_29 [i_0] [(short)11] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((/* implicit */int) arr_18 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11613130989080668144ULL)))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)60348))))))) : (max((max((var_11), (arr_14 [i_0] [i_1] [i_2] [(unsigned char)7] [(unsigned char)7]))), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) var_14);
                        var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_2 [i_0 + 1] [(unsigned short)0] [12U])))) : ((~(((/* implicit */int) (unsigned short)63706))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_6))))))) : ((-((+(var_9)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_25 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20913))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))));
                                arr_36 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2] [i_10 - 1] [(unsigned short)11])) ? (var_10) : (arr_6 [i_10 - 1] [i_0 - 3] [i_10 - 1] [i_1]))) - (var_11)));
                                var_26 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((unsigned short)27163), ((unsigned short)27249))))))), ((~(((var_11) % (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (6775792540292431141LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53272)))))) ? (((var_11) - (var_12))) : (var_12)))) ? (max(((-(((/* implicit */int) (unsigned short)60360)))), (((/* implicit */int) ((_Bool) 2255060417U))))) : (min((((/* implicit */int) (unsigned short)30062)), ((~(((/* implicit */int) var_6))))))));
    var_28 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16383))));
    var_29 = ((/* implicit */unsigned short) var_14);
}
