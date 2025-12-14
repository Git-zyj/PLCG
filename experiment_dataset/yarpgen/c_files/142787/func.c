/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142787
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) var_8))))))) ? (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((-1649081056587175029LL) / (-6622584471553705711LL)))) : (var_3))) : (((((/* implicit */_Bool) ((var_6) ? (var_7) : (var_4)))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((((-1649081056587175036LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)255)) - (255))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((((_Bool)1) ? (7985736825562879308LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60963)))))))) / (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] [i_3] [(short)3] [i_2] = ((/* implicit */signed char) arr_3 [i_0] [i_4]);
                                var_12 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(1649081056587175045LL))))));
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = (+(9844456992975724898ULL));
                                arr_14 [i_0] [i_4] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [7LL] [i_2])))))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_1])))) : (((18446744073709551613ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (((((/* implicit */_Bool) (signed char)52)) ? (3107562359463937108ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16016)))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */_Bool) max((((min((((/* implicit */unsigned long long int) arr_11 [i_0])), (var_5))) & (((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0] [i_0] [i_1]), (arr_8 [i_0] [i_0] [i_1] [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [(_Bool)1] [i_0] [i_0] [i_1]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) var_2)))))) : (max((var_0), (((/* implicit */long long int) arr_11 [i_0])))))))));
                var_13 *= ((/* implicit */unsigned int) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_0)))))) == (((arr_11 [i_0]) | (arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (signed char i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_7] [i_1] [i_5] [i_5] [i_0] [i_0])), (max((var_5), (((/* implicit */unsigned long long int) var_1))))))) ? (((((/* implicit */_Bool) max((arr_18 [i_7] [i_6] [i_5] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_1] [i_1] [i_1] [i_6] [i_7]) : (((/* implicit */long long int) arr_11 [i_0])))) : (arr_18 [i_0] [i_5] [11ULL] [11ULL] [i_7] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                                var_14 = ((/* implicit */signed char) arr_4 [6] [i_1] [3U]);
                                arr_23 [i_7] [i_7] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)-67)))), ((!(var_6))))))));
}
