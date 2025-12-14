/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174992
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 *= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1911389390)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((((/* implicit */int) arr_1 [19U])) > (((/* implicit */int) arr_1 [i_0])))) ? ((~(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (_Bool)1))))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    arr_9 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) arr_7 [(_Bool)1])))));
                    arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) arr_7 [i_1]);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9223372036854775787LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-53)))))) ? (((/* implicit */int) arr_5 [i_3])) : ((~(((/* implicit */int) arr_4 [i_2] [22U]))))));
                }
            } 
        } 
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_3 [8LL]))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_17 [i_4] [10ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                    arr_18 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((unsigned short) arr_7 [i_1]));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_3 [i_5 - 1]) ? (((/* implicit */int) arr_3 [i_5 - 1])) : (((/* implicit */int) arr_3 [i_5 - 1]))))), (((((/* implicit */_Bool) min((3549005320092130925LL), (((/* implicit */long long int) arr_8 [i_4] [i_4] [i_1] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)62))) < (-7744054536106419969LL))))) : (((2898647565565800696LL) * (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                                var_21 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)3)), ((+(((/* implicit */int) (signed char)127))))))) ? (((((/* implicit */_Bool) arr_24 [i_7] [i_7 - 1] [i_6 + 1] [(_Bool)1] [i_5 - 1] [i_1])) ? (var_0) : ((-(-9223372036854775806LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) min(((_Bool)0), (arr_7 [i_7]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) arr_16 [i_1]);
    }
    var_23 = ((/* implicit */long long int) (signed char)12);
}
