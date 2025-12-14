/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112711
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
    var_14 += ((unsigned char) (-(var_10)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_8 [i_3] [(unsigned short)13] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_3] [i_1] [i_2] [(unsigned short)18] [i_2])) >> (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)255))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            arr_12 [(unsigned short)9] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2785925448073144007ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))));
                            arr_13 [i_0] [i_2] [i_1] [i_3] [i_4 + 1] [i_2] [(unsigned char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) ((unsigned char) arr_2 [i_4]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [(unsigned short)20] [i_3])) : (((/* implicit */int) (unsigned char)198))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)251)) ? (arr_3 [i_4 - 1] [i_4] [i_4 + 2]) : (arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_1] [(unsigned short)14] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) (unsigned char)69)))))))));
                            arr_16 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2]);
                        }
                        arr_17 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (+(var_7)));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) -970068971)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))));
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6])));
                            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1721039008U)));
                            var_18 = ((/* implicit */unsigned int) ((unsigned short) 1547085357U));
                        }
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1547085331U)) ? (((/* implicit */int) arr_7 [13U] [13U] [i_2] [(_Bool)1] [i_8])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) | (2747881952U)));
                            arr_30 [i_2] [i_1] [i_1] [i_6] [(unsigned char)12] = ((/* implicit */unsigned short) ((unsigned char) arr_3 [i_6] [i_2] [i_0]));
                            var_20 = ((/* implicit */unsigned char) 13872471405485913231ULL);
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */int) -1382148282642907129LL);
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4097803638U)) ? (((/* implicit */int) (unsigned short)45845)) : (((/* implicit */int) (unsigned short)7))))) ? (837530518U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)12)) + (((/* implicit */int) (unsigned short)8191)))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9293934376581381713ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_8)));
                            arr_39 [i_0] [i_2] [20U] [i_9] [(unsigned short)3] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned short) (unsigned short)2675));
                            var_24 = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]);
                        }
                        arr_40 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1547085329U))));
                    }
                    var_25 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4)))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_2), (var_2))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (197163657U)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)198)) / (65535)))) - (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                }
                arr_41 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) (unsigned char)147)) ? (var_8) : (var_7)))) - ((((_Bool)1) ? (2747881946U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))));
                arr_42 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned short)9773))))) ? (((-1981676424035061623LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1768047143U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned short)18040))))), (((unsigned int) var_12))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) (unsigned char)26)) ? (-562949953421312LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49082))))))))))));
            }
        } 
    } 
}
