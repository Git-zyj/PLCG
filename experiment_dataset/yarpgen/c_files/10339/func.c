/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10339
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
    var_13 = ((/* implicit */short) ((unsigned char) (+((((_Bool)1) ? (2595663135775374375ULL) : (18446744073709551615ULL))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 4])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_0 - 1])))))) + (arr_6 [i_0] [i_0] [i_0 + 2])));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 15851080937934177233ULL))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) 1161869547)) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 3]))) + (((arr_3 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) arr_14 [i_3])))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            arr_18 [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_12 [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_3])))))) || (((/* implicit */_Bool) arr_12 [(short)8])))) ? (max((((((/* implicit */int) (unsigned char)91)) - (((/* implicit */int) arr_15 [i_3] [i_3] [i_4])))), (((/* implicit */int) (short)18276)))) : (((int) arr_13 [i_4]))));
            var_18 = ((/* implicit */short) ((_Bool) (_Bool)1));
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_19 [i_5 + 1] [i_5 + 1] [i_6 + 1]) | (660385599766359001ULL)))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_11 [i_3]))))))) : (((((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (unsigned short)61028)) : (((/* implicit */int) (unsigned char)65)))) * (((((/* implicit */int) (unsigned char)225)) - (((/* implicit */int) arr_24 [i_3] [i_4] [i_5] [i_5 - 1] [i_6] [(short)8] [i_7]))))))));
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) 1186598023))), (min((((/* implicit */unsigned long long int) arr_20 [i_6 - 1] [(short)0] [i_5 + 1])), (arr_12 [i_5 + 1])))));
                        }
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (15082890104676054881ULL))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)17)))))));
                        arr_26 [i_3] [(short)16] [i_3] [i_6 + 1] = ((/* implicit */_Bool) ((unsigned short) ((((arr_19 [14] [14] [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((min((2147483643), (((/* implicit */int) arr_20 [i_4] [(short)14] [i_6])))) + (151))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 1837542206))));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_25 [i_3] [i_3]), (arr_25 [i_3] [i_3])))))))));
    }
    var_24 += ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            {
                var_25 = ((/* implicit */_Bool) ((int) (_Bool)1));
                var_26 += ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(signed char)0] [i_8] [i_9]))) : (arr_19 [i_8] [3] [i_8 - 1]))))) & (((/* implicit */int) min((arr_17 [i_8 - 1] [i_9] [i_8]), (arr_17 [i_8 - 1] [i_8 - 1] [i_9]))))));
            }
        } 
    } 
}
