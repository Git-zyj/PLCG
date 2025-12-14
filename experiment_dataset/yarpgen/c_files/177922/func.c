/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177922
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
    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_14), (((/* implicit */long long int) var_8)))), (((((/* implicit */long long int) ((/* implicit */int) (short)18932))) & (var_10)))))) ? (var_18) : (((/* implicit */int) var_17))));
    var_20 &= ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_10))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-18937)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18937))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (unsigned short i_3 = 4; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1] [i_3 - 2])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_3 - 2] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_3 - 3]))))) ? (min((arr_6 [i_1] [i_2 - 1] [i_3 - 1]), (arr_6 [i_1] [i_2 + 1] [i_3 - 1]))) : (((((/* implicit */_Bool) (short)-18933)) ? (((/* implicit */int) (short)-32276)) : (((/* implicit */int) (short)18933)))));
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2641624587974434851LL)) ? (((/* implicit */int) (short)32285)) : (((/* implicit */int) (short)-18940))))) && (((/* implicit */_Bool) (~(arr_6 [i_1] [i_2 - 1] [i_3 + 1]))))));
                        arr_12 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((arr_6 [i_0] [i_2 - 1] [i_3 - 3]), (max((arr_6 [i_0] [i_2 + 1] [i_3 - 1]), (arr_6 [i_0] [i_2 - 1] [i_3 - 1])))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((9223372036854775807LL), (((/* implicit */long long int) -1)))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (min((((((/* implicit */_Bool) arr_7 [i_0])) ? (var_10) : (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 10)) ? (((/* implicit */int) (short)18935)) : (((/* implicit */int) (short)18940))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    arr_24 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) var_4))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) min((var_6), (var_6)))) / (((/* implicit */int) ((short) var_14))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-32264)) ? (((/* implicit */int) (unsigned short)50324)) : (((/* implicit */int) (unsigned short)9628))))))));
                                arr_29 [i_4] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7 - 2] [i_7 - 2] [i_7 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 - 1] [i_7 - 2] [i_7 - 2]))) : (-7024246091908972956LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) arr_20 [i_7 + 1] [i_7 - 2] [i_7 - 2])) : (((/* implicit */int) arr_20 [i_7 + 1] [i_7 - 1] [i_7 - 1]))))) : (((long long int) arr_20 [i_7 - 2] [i_7 - 1] [i_7 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            for (short i_10 = 4; i_10 < 20; i_10 += 4) 
            {
                {
                    arr_36 [i_9] = ((/* implicit */int) max((((/* implicit */long long int) ((3065318137U) + (((/* implicit */unsigned int) -6))))), (min((((/* implicit */long long int) arr_0 [i_10 - 3])), (max((((/* implicit */long long int) var_16)), (var_14)))))));
                    var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_9 + 1] [i_10 + 1])) ? (((/* implicit */int) arr_19 [i_9 - 1] [i_10 - 4])) : (((/* implicit */int) arr_19 [i_9 - 1] [i_10 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5233519226850210095LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)40415))))) ? (((/* implicit */unsigned long long int) 1142318963U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [i_10]))) | (var_1))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_16 [i_10 - 1])), (((((/* implicit */int) (unsigned char)5)) % (var_3))))))));
                }
            } 
        } 
    }
}
