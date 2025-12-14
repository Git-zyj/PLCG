/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144221
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (min((var_0), (var_0)))));
    var_11 *= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */int) min((((/* implicit */short) var_3)), (arr_2 [i_0 - 1])))) : (((/* implicit */int) min((max((((/* implicit */short) var_7)), ((short)-27949))), (((/* implicit */short) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_5))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        arr_11 [i_1] [(short)9] = max(((~(((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) (short)27954)) | (((/* implicit */int) (short)27974)))) | ((~(arr_5 [12LL] [12LL]))))));
                        var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_2 - 2])) | (((/* implicit */int) arr_6 [i_0 - 1] [i_2 + 1]))))), (((min((((/* implicit */long long int) arr_6 [i_0] [i_1])), (arr_3 [i_0 - 1]))) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (288230376151711743LL)))))));
                        var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((min(((short)(-32767 - 1)), ((short)-27964))), (((/* implicit */short) var_3))))), (((((/* implicit */int) max((((/* implicit */short) var_5)), ((short)32767)))) * (((/* implicit */int) max((arr_2 [i_0 - 1]), (var_1))))))));
                    }
                }
            } 
        } 
        var_15 = (!(((/* implicit */_Bool) max(((((_Bool)1) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) arr_2 [(unsigned char)10])))), (((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_0] [i_0 - 1])), ((signed char)20))))))));
        arr_12 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned short) arr_9 [i_0 - 1] [(short)9] [(_Bool)1] [(unsigned char)1] [i_0]))))) + (arr_10 [5LL] [i_0])))) ? ((-((-(1400092666U))))) : (((/* implicit */unsigned int) ((max((((/* implicit */int) (short)18209)), (arr_5 [(short)12] [(short)7]))) - ((-(((/* implicit */int) (unsigned short)15797)))))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4 - 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (-288230376151711737LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (var_9) : (((/* implicit */int) arr_0 [i_4 - 1])))))));
        /* LoopNest 2 */
        for (long long int i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) arr_10 [i_5 + 1] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_7])) ? (((/* implicit */int) arr_21 [i_5] [i_5 - 2] [i_7 + 2])) : (((/* implicit */int) var_7))))) > (((((/* implicit */_Bool) 3581093958U)) ? (max((((/* implicit */long long int) (_Bool)1)), (288230376151711737LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_29 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)61731))));
                                arr_30 [i_8] [i_8] [i_8] [i_5] [i_5] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_21 [i_5] [i_7] [i_8]))));
                                var_18 = ((/* implicit */int) min((var_18), (min((((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (((/* implicit */int) arr_16 [i_4 - 1] [i_8])) : (arr_13 [i_4 - 1]))), (max((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)6239)))), ((((_Bool)1) ? (((/* implicit */int) (short)-27964)) : (((/* implicit */int) (short)-27975))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_5] = ((/* implicit */int) (-((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) arr_17 [i_6])), (arr_3 [i_5])))))));
                    var_19 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) max((-7844907457479558905LL), (((/* implicit */long long int) (unsigned short)10767)))))), ((+(((/* implicit */int) arr_6 [i_4] [0U]))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (min((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)54790)))), (((((/* implicit */int) var_3)) * (((/* implicit */int) var_8))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-14917)) ? (((/* implicit */int) (short)-6240)) : (((/* implicit */int) (unsigned char)144))));
}
