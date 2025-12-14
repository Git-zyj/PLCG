/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166706
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
    var_10 += ((/* implicit */long long int) var_3);
    var_11 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)1023)), (4491673657131534542ULL)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 -= ((/* implicit */unsigned int) -8826381148520860941LL);
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned short) ((unsigned char) (~(var_2))))))));
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) (~((~(arr_6 [i_2 - 3] [i_2] [i_2])))));
                arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max(((+(4491673657131534542ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2 - 3])) | (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2 + 3])))))));
            }
        }
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_4), (((/* implicit */int) var_7)))) / ((-(((/* implicit */int) (short)-11752))))))) ? (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) | (((((/* implicit */_Bool) 9079134030701028997LL)) ? (4491673657131534539ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_0] = ((/* implicit */_Bool) (~(((int) ((_Bool) var_9)))));
                var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(9079134030701028969LL)))) > (((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_3] [i_3])), (arr_1 [i_0] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((arr_11 [i_0] [i_3]) ? (4491673657131534564ULL) : (((/* implicit */unsigned long long int) arr_15 [i_3] [i_4 - 1]))))))));
            }
            for (long long int i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((+(1380786788U))) : (((arr_15 [i_3] [i_5 + 3]) << (((/* implicit */int) var_7))))))) >= (-9079134030701028985LL)));
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0])) + (((/* implicit */int) arr_12 [i_0]))))), (((((/* implicit */_Bool) 13955070416578017070ULL)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)11750)) : (1632562696)))) : (2901668493U)))));
                arr_19 [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9779)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11732)))))) ? (((/* implicit */int) min((arr_14 [i_3] [i_3] [i_5] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))), (((int) (-(((/* implicit */int) var_1))))));
            }
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_20 [i_0])), (arr_15 [i_0] [i_7])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_6] [i_0]))) == (var_2)))) : (((((/* implicit */_Bool) 252962678U)) ? (((/* implicit */int) (short)-14)) : (-1)))))) : (arr_21 [i_0] [i_6] [i_3] [i_0])));
                        arr_25 [i_0] [i_3] [i_6] [i_7 + 1] = min((((/* implicit */unsigned long long int) arr_17 [i_3])), (min((max((((/* implicit */unsigned long long int) (short)11748)), (9007199254740991ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11777)) / (((/* implicit */int) arr_7 [i_0] [i_6] [i_3] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            var_18 = ((((int) var_1)) > (max((((/* implicit */int) (short)17231)), (-1))));
                            var_19 = ((/* implicit */short) (+(-3)));
                        }
                        arr_28 [i_0] = ((/* implicit */_Bool) (-(var_4)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    arr_33 [i_0] [i_0] [i_0] [i_10] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0]))))), (min((min((((/* implicit */unsigned long long int) var_8)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_9] [i_0])))))))));
                    var_20 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -9079134030701028991LL)) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (arr_13 [i_0] [i_9] [i_10])))))) + (((((/* implicit */_Bool) (-(31744)))) ? (((((/* implicit */unsigned long long int) 1632562692)) - (8582456638016720020ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11748)) ? (((/* implicit */int) arr_12 [i_10])) : (((/* implicit */int) var_7)))))))));
                }
                arr_34 [i_0] [i_3] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_22 [i_0] [i_0])), (-968268787))), (((/* implicit */int) min((arr_26 [i_0] [i_3] [i_9]), (arr_26 [i_0] [i_3] [i_3]))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((int) var_6)))));
                arr_35 [i_0] [i_0] = arr_17 [i_0];
            }
            arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) ((arr_5 [i_0] [i_0]) == (var_0)))), (var_4)))));
        }
    }
    var_21 = ((/* implicit */short) var_3);
}
