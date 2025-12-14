/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120777
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
    var_17 = ((/* implicit */long long int) var_6);
    var_18 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((9618752302986562905ULL), (((/* implicit */unsigned long long int) -7344982759200567866LL))))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)30123)) > (((/* implicit */int) var_3)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [1U] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967285U)))))) | (arr_1 [i_0]));
        var_19 = ((unsigned long long int) 3837999187207014798LL);
        var_20 = ((/* implicit */unsigned short) 4294967283U);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_21 = (((-(arr_1 [i_1]))) << (((((/* implicit */int) arr_0 [i_0])) - (61034))));
            var_22 = ((/* implicit */long long int) arr_0 [i_0]);
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_1 [i_0]))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_24 = ((1606079120U) ^ (arr_4 [i_0] [i_0] [i_0]));
            var_25 = ((signed char) ((unsigned long long int) arr_8 [i_0] [i_0]));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~(((arr_5 [i_0] [14U]) / (((/* implicit */unsigned long long int) arr_6 [17LL] [i_2]))))));
        }
    }
    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        var_26 = arr_12 [i_3];
        arr_14 [i_3] &= ((/* implicit */unsigned int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3])))) << (((5151994762669225383ULL) - (5151994762669225322ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        arr_26 [i_3] [11LL] [i_5] = ((/* implicit */unsigned long long int) (~(arr_1 [i_6])));
                        var_27 -= ((/* implicit */unsigned short) min((((((/* implicit */long long int) arr_10 [i_3 + 4])) / (-1LL))), (((/* implicit */long long int) ((((/* implicit */long long int) 744448000U)) != (3837999187207014808LL))))));
                        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_10 [i_3 + 2]) > (arr_12 [i_3 + 4]))))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_12 [i_5]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 3; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_43 [i_7] [i_7] [i_7] [i_10] [i_7] = ((/* implicit */unsigned long long int) 7344982759200567865LL);
                                var_30 = ((/* implicit */unsigned int) ((46202087558066009ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3837999187207014809LL)) || (((/* implicit */_Bool) -7344982759200567866LL))))))));
                            }
                        } 
                    } 
                    arr_44 [(unsigned short)6] &= arr_31 [2U];
                    arr_45 [i_7] = ((/* implicit */signed char) (-(((2999895795U) << (((3837999187207014785LL) - (3837999187207014754LL)))))));
                }
            } 
        } 
        var_31 += (unsigned short)47368;
    }
    var_32 = ((unsigned long long int) ((long long int) 3837999187207014808LL));
}
