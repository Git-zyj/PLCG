/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156063
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
    var_19 = ((/* implicit */short) max((((/* implicit */int) ((short) ((((/* implicit */int) (signed char)63)) >> (((var_5) + (796510941483609838LL))))))), (((int) ((((/* implicit */_Bool) 1306183783)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_3)))))));
    var_20 = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned int) var_4)), (var_11))), (((/* implicit */unsigned int) 1997035716)))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (0ULL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 += (((~(((((/* implicit */int) (short)-891)) / (((/* implicit */int) arr_1 [i_0])))))) <= (max((min((-1306183768), (((/* implicit */int) (unsigned short)3)))), (((/* implicit */int) var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) ((int) var_3))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [(short)1] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) max((var_16), ((unsigned char)86)))));
                                arr_14 [i_0] [i_2] [(unsigned char)5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) (signed char)-77);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_23 ^= ((unsigned long long int) ((((/* implicit */int) (signed char)75)) <= (-1306183784)));
                        arr_17 [i_0] [i_0] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((14985383865638767171ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2856167105480184391ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)249))))))) : (((arr_8 [i_1 - 2] [i_1] [i_2] [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1] [(unsigned short)0] [i_0] [i_2] [i_2] [i_0])))))));
                        var_24 = ((/* implicit */unsigned short) ((1927777461U) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_1 + 2]) || (((/* implicit */_Bool) arr_6 [i_5]))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_1]) % (max((var_12), (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) arr_18 [i_1 + 1] [i_1] [i_0] [i_6] [i_0])) ? (min((((/* implicit */unsigned long long int) var_18)), (5340029789754907849ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 15590576968229367209ULL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((13952310389427469408ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2110912146)) ? (var_17) : (((/* implicit */unsigned long long int) var_15))))))))))))));
                        var_26 &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)249)) : (246243195)));
                        var_27 = var_4;
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        var_28 &= (-(((((-1306183776) + (2147483647))) << (((((((/* implicit */int) (short)-24289)) + (24315))) - (26))))));
                        arr_24 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_29 &= ((/* implicit */unsigned char) ((int) (_Bool)1));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)120)) : (16777200)))) ? (((((/* implicit */_Bool) arr_23 [i_8] [i_8] [(_Bool)1] [i_1 - 2] [i_0])) ? (3889369015U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)140)), ((short)4674))))))))))));
                        var_31 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_12 [i_8] [i_2] [i_2] [i_1 - 2] [i_1] [i_0])))));
                    }
                    var_32 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((8550019676971748431LL) + (((/* implicit */long long int) 51667541))))) ? (4645643250305171079ULL) : (max((arr_20 [i_2] [i_0] [i_2] [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_15 [i_0] [i_0]), (arr_15 [i_0] [i_0])))), (min((7519598381789387604ULL), (((/* implicit */unsigned long long int) 16383LL))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2856167105480184407ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7522))));
        var_35 -= ((/* implicit */unsigned int) 998637055492757436LL);
        var_36 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5327830108938682430ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 13801100823404380536ULL))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9]))) : (4294967295U))) : (max((arr_30 [(unsigned short)10]), (8U))))))));
    }
}
