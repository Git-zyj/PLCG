/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188876
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 - 2] [i_2]))) ? (((/* implicit */int) ((short) arr_1 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 2] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
                        arr_12 [i_0 + 2] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((unsigned long long int) (unsigned char)239)) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))));
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) ((((_Bool) arr_8 [i_0] [i_1] [i_2] [i_2])) ? (((((/* implicit */_Bool) 5849640334228074488ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)17)))) : (((((/* implicit */int) arr_5 [i_0 + 3] [i_2] [i_0 + 3])) ^ ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0]))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)215)) || (((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0] [i_0] [i_0] [i_0 + 1])))));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_9 [i_0 + 3] [i_1] [i_2] [i_1] [i_0 + 3]) : ((+(min((((/* implicit */long long int) arr_5 [i_1] [i_1] [i_3])), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned char)154)) | (((/* implicit */int) (unsigned short)12942)))))))));
                        arr_17 [i_0 + 2] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) : (-2342666952849185353LL)));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2])) & (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_5] [i_0 + 1])))))));
                    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) (unsigned short)65535))) : ((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_1]) : (arr_7 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0]))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((/* implicit */int) ((arr_9 [i_6] [i_0] [i_0 + 3] [i_0] [i_0]) > (arr_9 [i_8 - 1] [i_8] [i_0 + 3] [i_0] [i_0 + 1])))))))));
                                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0 - 1] [i_0] [i_0] [i_0])))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_15 [i_0] [i_0] [i_0] [i_0 + 3])))));
                                var_22 -= ((/* implicit */unsigned char) max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0 + 1] [i_6]))) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_0] [i_1] [i_0])) ? (8400170690353129737LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_8]))))) : (((/* implicit */long long int) arr_18 [i_0 + 3] [i_0 + 1] [i_0] [i_0])))))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((unsigned short) arr_22 [i_0] [i_1] [i_6] [i_1] [i_7] [i_0])), (((/* implicit */unsigned short) ((signed char) arr_18 [i_1] [i_6] [i_7] [i_8])))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_5))));
    var_25 -= ((/* implicit */short) (-(((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))));
}
