/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157553
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (~(min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)126))))));
        var_19 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */short) min((arr_1 [i_1] [i_1]), (max((-24LL), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) & (-2020495517313858820LL)))))));
        var_20 = ((/* implicit */signed char) min((arr_1 [i_1] [i_1]), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (max((arr_2 [i_1]), (((/* implicit */unsigned int) (short)32767)))))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((long long int) arr_1 [i_1] [i_1]));
        var_21 *= ((((unsigned long long int) 6U)) > (((/* implicit */unsigned long long int) min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) ((9535577791196409574ULL) | (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) (short)18836)))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (short)-18836)) : (((/* implicit */int) (unsigned char)97)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_12 [i_2] [i_2] [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3])) ^ (((((/* implicit */_Bool) max((arr_2 [i_2]), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (arr_7 [i_2])))) : (((/* implicit */int) ((unsigned short) arr_0 [i_2])))))));
            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (signed char)50)))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 4; i_4 < 16; i_4 += 3) 
            {
                arr_15 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */short) ((max((((/* implicit */long long int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_3 [i_2] [(signed char)3]))))), (min((arr_9 [4U] [i_2]), (((/* implicit */long long int) arr_3 [i_2] [i_2])))))) << (((min((((/* implicit */long long int) min(((short)17158), (((/* implicit */short) (unsigned char)255))))), (min((((/* implicit */long long int) (unsigned char)253)), (arr_9 [(short)12] [i_3]))))) + (2744221300414896108LL)))));
                var_23 = ((/* implicit */unsigned int) min((arr_1 [i_2] [i_3]), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)32767)), (1602990297U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -6196783273654577945LL)))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_6 [i_2])), (min((((/* implicit */unsigned short) arr_17 [i_2] [i_3] [(signed char)1])), (min((((/* implicit */unsigned short) (short)18835)), (arr_7 [i_2]))))))))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    arr_20 [i_2] [(short)4] [i_3] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_2] [i_3] [i_3])), (min((((int) (unsigned char)1)), (((/* implicit */int) max((arr_16 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (unsigned char)11)))))))));
                    arr_21 [i_2] [i_2] [i_2] [i_2] [5ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) min((arr_3 [i_2] [(_Bool)1]), ((_Bool)1)))), ((short)32760)))) | (((/* implicit */int) ((((arr_9 [i_5] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-30329))))) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_3]))))))));
                    arr_22 [(unsigned short)6] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) max((arr_11 [i_2] [i_3] [i_5]), (arr_19 [i_2] [11LL] [i_2] [(unsigned short)16] [i_2] [i_2])))) & (((/* implicit */int) ((((/* implicit */_Bool) 7295647957634019723ULL)) && (((/* implicit */_Bool) 0U)))))))) | (max((((/* implicit */long long int) arr_16 [i_6 + 3] [i_6 - 1] [i_6 - 1] [i_6 + 2])), (min((((/* implicit */long long int) 1074106214U)), (arr_1 [i_3] [i_3])))))));
                }
                for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_5] [i_7])) && (((/* implicit */_Bool) (unsigned char)153)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_0 [i_2]))))) : (-1773253217987696143LL))) + (((/* implicit */long long int) ((((arr_11 [i_3] [i_5] [i_3]) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [15U] [i_7] [i_7])) : (((/* implicit */int) (unsigned short)0)))) >> (min((8911166282513142032ULL), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_3])))))))));
                    var_26 = (+(((/* implicit */int) ((_Bool) (short)16165))));
                    var_27 = ((/* implicit */short) 6ULL);
                }
                for (unsigned char i_8 = 3; i_8 < 18; i_8 += 3) 
                {
                    arr_29 [i_2] [i_3] [i_5] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_8 + 1])) / (((/* implicit */int) arr_6 [i_8 - 3])))))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3] [i_5] [i_8 - 2])) << (((((/* implicit */int) (signed char)-123)) + (134)))))) % (((long long int) arr_13 [i_2] [i_3] [i_5] [i_8 - 2]))))) + (max((((/* implicit */unsigned long long int) arr_2 [i_8])), (((9535577791196409575ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_3] [i_5] [i_2] [i_8]))))))))))));
                }
            }
        }
        var_29 = ((/* implicit */short) ((_Bool) (_Bool)1));
    }
    var_30 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((5779780793934653046LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))))) ? (max((18446744073709551597ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-3997941338144256337LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_6)), (var_10))) % (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (signed char)-125)))))))))));
}
