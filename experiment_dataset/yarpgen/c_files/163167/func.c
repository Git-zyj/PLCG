/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163167
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
    var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_18)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 21U))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_2 [15ULL] [i_1])))) : (((/* implicit */int) arr_2 [i_1] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7684770359720514715LL)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (min((4294967272U), (19U))) : (var_3)))) - (7764988843311810745LL)));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))) <= (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_1] [i_2]), (arr_7 [i_0] [i_1] [i_1] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_2] [i_1] [(unsigned short)9]);
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [0U]))))), (((((/* implicit */_Bool) var_16)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_24 = ((/* implicit */short) (~(max((((/* implicit */long long int) arr_3 [i_2] [i_2])), (var_1)))));
                }
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                arr_19 [i_4] [i_4] [(unsigned short)9] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_4] [i_0] [i_0])), (7ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_4 [i_5])))) ? ((+(max((((/* implicit */unsigned int) arr_5 [i_0] [i_3] [i_4])), (arr_16 [i_0] [i_1] [i_4] [i_4] [i_5]))))) : (var_15)));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (2147483627)))) - (var_8))));
                                arr_21 [i_4] [i_4] [i_3] [i_1] [i_4] = ((/* implicit */short) (((((-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_10)) : (arr_4 [i_0]))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29688))) == (6U))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_1] [i_0] = ((/* implicit */short) max((((arr_16 [i_0] [i_0] [(signed char)18] [i_1] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))), ((-(((((/* implicit */_Bool) -381377946338360544LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (6U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) arr_0 [i_3]);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_0] [i_3] [i_6] [i_6])) ? (arr_27 [i_0] [i_6] [i_3] [i_6] [i_7]) : (arr_27 [17] [i_6] [i_6] [i_6] [i_7])))) ? (arr_25 [i_0] [i_1] [i_3] [i_6] [i_6] [i_7] [i_6]) : (((((/* implicit */_Bool) arr_25 [16LL] [i_1] [i_7] [i_6] [i_7] [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (arr_25 [i_0] [i_1] [i_1] [i_3] [i_6] [i_7] [i_6])))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) arr_16 [i_1] [i_1] [12ULL] [i_1] [i_1]);
                }
                arr_29 [i_0] [i_1] [i_1] = ((((((((/* implicit */_Bool) -7764988843311810733LL)) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [12LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) << (((var_15) - (3572954100U))))) << (((arr_0 [i_0]) - (887951517))));
                var_28 = ((/* implicit */signed char) max((arr_16 [i_1] [i_1] [(unsigned short)14] [i_1] [i_1]), (((/* implicit */unsigned int) ((arr_28 [(unsigned short)10] [i_1] [i_0]) >= (((/* implicit */int) arr_24 [i_1])))))));
                arr_30 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_0]))) ? (max((((((/* implicit */_Bool) (short)26771)) ? (((/* implicit */int) (unsigned short)62439)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) (signed char)8)))) : ((+(((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
}
