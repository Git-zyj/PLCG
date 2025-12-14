/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109426
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
    var_20 = ((/* implicit */long long int) (unsigned short)13);
    var_21 = ((/* implicit */unsigned int) max((24ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551573ULL)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) var_18))))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))))) && (((_Bool) 28ULL))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((((arr_5 [i_1] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) | (((/* implicit */long long int) max((var_19), (var_19))))))) == (max((((/* implicit */unsigned long long int) var_12)), (24ULL))));
                            var_23 = ((/* implicit */unsigned short) arr_3 [i_1]);
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((-9223372036854775795LL), (((/* implicit */long long int) (signed char)13)))), (arr_7 [(_Bool)1] [i_1] [i_1] [(_Bool)1]))))));
                                arr_12 [i_1] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                                var_25 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) var_0)) % (max((((/* implicit */unsigned long long int) var_18)), (arr_0 [4LL]))))), (((/* implicit */unsigned long long int) -4297958110055327380LL))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)161)) - (((/* implicit */int) ((signed char) 0U)))))) && (((/* implicit */_Bool) arr_3 [i_1]))));
                            }
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (~(min(((-(var_14))), (((((/* implicit */_Bool) arr_10 [i_0] [2LL] [i_2] [i_1] [i_0] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (7343551961729058138LL))))))))));
                            var_28 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) (signed char)-28)))) ? (1207330324U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_18))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (-9223372036854775807LL - 1LL)));
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_5 [2LL] [i_0 + 1]))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_5] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (arr_4 [i_0 - 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) 713079823U))))))));
                                arr_24 [i_6] [i_6] [i_6] [i_6 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) ? ((-(min((-9223372036854775807LL), (-3133267627970111578LL))))) : (8177414815048720165LL)));
                                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [(_Bool)1])), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_3 [(signed char)0]))))))) : (((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) arr_22 [i_7] [10LL] [(short)6] [10LL] [(unsigned char)4])), (18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_19 [10LL] [i_1]))))))));
                                var_31 -= ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_0))));
    var_33 = ((/* implicit */unsigned short) (unsigned char)4);
}
