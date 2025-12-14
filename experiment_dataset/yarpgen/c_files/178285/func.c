/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178285
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) (unsigned short)65535);
        var_12 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) ((2097151U) == (var_3)))) << (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7ULL))))) << (((((((/* implicit */long long int) ((arr_0 [i_0]) ? (2097151U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & (2183596695862066468LL))) - (1260805LL)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) ((2097151U) == (var_3)))) << (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7ULL))))) << (((((((((/* implicit */long long int) ((arr_0 [i_0]) ? (2097151U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & (2183596695862066468LL))) - (1260805LL))) + (1260811LL))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) 706159399U);
        var_13 = ((/* implicit */unsigned int) ((unsigned short) ((18446744073709551608ULL) * (arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 4; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) 3139467343U);
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(max(((-(var_9))), (((/* implicit */unsigned long long int) arr_3 [i_1 - 3])))))))));
    }
    var_15 = ((((/* implicit */_Bool) 16U)) || (((/* implicit */_Bool) var_2)));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) arr_8 [i_2] [i_2]);
                var_17 = ((/* implicit */_Bool) max((var_8), (((((/* implicit */_Bool) (((_Bool)1) ? (5884694871977336948ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1792))) >= (3894952702U))))) : (max((var_8), (((/* implicit */long long int) 13300720))))))));
                var_18 *= ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_2]) || (((/* implicit */_Bool) 4123384826U)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_6] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) arr_20 [i_6] [i_5] [i_4] [i_3] [i_2])) : (var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_7 [i_4] [i_3]) >> (((var_5) + (2540847189630532353LL)))))))) : (((0U) << (((arr_1 [i_4 + 1]) - (14672858487169523391ULL)))))));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                arr_22 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) 951663978);
                                arr_23 [i_2] [i_3] [i_4 + 1] [i_5] [i_2] = var_4;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_29 [i_8 - 2] [i_2] [i_7] [i_4 + 1] [i_4] [i_2] [i_2] = ((/* implicit */long long int) (-(-1881353415)));
                                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((3894952713U) >= (4294967295U))))) - (max((arr_1 [i_7]), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_2])))))) << (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2835494672U)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_16 [i_8] [i_7] [i_4]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (16857488103070387342ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)4)), (-1102592744)))) ? (((((/* implicit */unsigned long long int) 3675291323U)) * (17327153273803648058ULL))) : (((/* implicit */unsigned long long int) -4956781088070934533LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) (_Bool)1)) || (((/* implicit */_Bool) arr_14 [i_2] [i_2]))))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 16; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 18; i_12 += 3) 
                        {
                            {
                                arr_40 [i_2] [i_3] [i_2] [i_11] [i_12] = ((/* implicit */_Bool) max(((-(var_10))), (4294967295U)));
                                arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                                arr_42 [i_2] [i_2] [i_4] [i_11] [i_11] [i_12 + 1] = max((((/* implicit */unsigned int) ((((int) 1418519273U)) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63744)) && (((/* implicit */_Bool) arr_33 [i_2])))))))), (arr_14 [i_2] [i_2]));
                                arr_43 [i_12] [i_11] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((17130016307140275644ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
