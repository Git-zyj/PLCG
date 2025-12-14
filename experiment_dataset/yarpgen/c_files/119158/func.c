/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119158
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) 2598449142U))))) ? (((/* implicit */int) max((((((/* implicit */_Bool) var_2)) && (var_9))), (((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (short)32763))))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) (short)-32763)) && (((/* implicit */_Bool) (short)-32763)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)43684)) < (((/* implicit */int) (short)-32763)))))));
                    var_20 = ((/* implicit */_Bool) (-(1152921504602652672ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3 - 1] [i_4]);
                                var_22 &= var_17;
                                arr_13 [i_0] [i_1] [i_2] [i_2 - 4] [i_0] = ((/* implicit */long long int) var_4);
                                arr_14 [i_0] [i_1] [i_2] [i_2] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_2 - 2]) >= (arr_1 [i_2 + 2]))))) - (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_1 [i_2 - 4])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_11 [i_2 - 1] [i_2] [12] [i_2] [i_2 - 1])))));
                        arr_18 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32763))))))))) : (17293822569106898952ULL)));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_26 [i_7] [i_1] [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)50618)), (min((((((/* implicit */_Bool) (unsigned short)56577)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_5 [i_1] [i_8]))), (((/* implicit */long long int) min(((unsigned short)56577), (var_3))))))));
                                arr_27 [0ULL] [i_1] [i_0] [i_7] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1598173937U)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) (short)-32763))));
                                arr_28 [i_7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)54648)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_1 [i_8])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) ((((_Bool) min(((short)16841), (((/* implicit */short) (unsigned char)31))))) ? (((((/* implicit */_Bool) -2335909189250420099LL)) ? (1152921504602652656ULL) : (arr_7 [i_1] [i_1] [i_9]))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_9])) - (((/* implicit */int) arr_29 [i_9] [i_1] [i_1] [i_9])))))))));
                        var_25 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_1]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (arr_3 [i_0])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) / (1681050669653205941ULL)))))));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                arr_42 [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) 446002358610616846ULL);
                                var_26 = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (short)-32763)))) & (((((/* implicit */int) (signed char)-61)) | (((/* implicit */int) (_Bool)1)))))));
                                arr_43 [i_0] [i_12] [i_1] [i_11] [i_10] [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (1970399308134023574ULL)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-16)))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-10931))))))) | (18446744073709551615ULL)));
                            }
                        } 
                    } 
                    arr_44 [i_1] [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) ? (16765693404056345675ULL) : (arr_4 [i_10])))) ? ((+(1681050669653205938ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_10])) << (((((/* implicit */int) var_13)) - (45038)))))), (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_1])) ? (16476344765575528041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763)))))))));
                }
                var_27 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)83)) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)56577)))) - (56560))))) != (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)3611))))));
                var_28 = ((/* implicit */long long int) (unsigned short)62472);
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)75))))) : (1970399308134023583ULL)));
}
