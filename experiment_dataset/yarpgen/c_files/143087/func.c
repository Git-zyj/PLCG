/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143087
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) (short)-12940);
                var_21 = ((/* implicit */unsigned long long int) min((((2147483647) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) != (6322138126492539008LL)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)12940)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) (short)-12925)) : (((/* implicit */int) var_3))))));
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) != (((/* implicit */int) (short)12939)))))));
                    arr_13 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_3] [i_4 - 1])) > (arr_10 [i_2] [10ULL] [4])));
                    arr_14 [9ULL] [i_3] [(short)8] = ((/* implicit */unsigned char) (~(var_9)));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [(_Bool)1] [i_3] [6LL] = (-((~(((/* implicit */int) (!(((/* implicit */_Bool) 13488615881758353071ULL))))))));
                    var_24 = ((/* implicit */unsigned char) max(((-(arr_1 [i_2]))), (((/* implicit */unsigned long long int) (signed char)102))));
                    var_25 = ((/* implicit */short) 4958128191951198543ULL);
                    var_26 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                }
                for (unsigned int i_6 = 3; i_6 < 8; i_6 += 1) 
                {
                    var_27 += ((/* implicit */unsigned char) 4958128191951198561ULL);
                    arr_22 [i_3] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((13488615881758353072ULL) == (max((9907130510725221070ULL), (((/* implicit */unsigned long long int) 576460752303423480LL))))))) == (((/* implicit */int) ((unsigned char) (short)-12940)))));
                    arr_23 [i_6] [i_6] = max((((int) (unsigned short)11785)), (((/* implicit */int) max((((/* implicit */unsigned char) var_19)), (arr_7 [i_2])))));
                }
                var_28 = ((/* implicit */unsigned char) ((13488615881758353074ULL) != (((/* implicit */unsigned long long int) ((arr_12 [i_2] [i_2] [(short)9] [8ULL]) / (((/* implicit */int) ((unsigned char) arr_7 [i_3]))))))));
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) 1518360923597375457ULL);
                                arr_31 [i_2] = ((/* implicit */short) (-((-(((long long int) var_7))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
