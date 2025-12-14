/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153986
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
    var_17 = ((/* implicit */short) var_10);
    var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (8016772498313277091LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_5)))) ? (((/* implicit */int) max(((unsigned short)8191), ((unsigned short)57332)))) : (((/* implicit */int) (unsigned short)31407)))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((arr_0 [i_0] [i_0]) ? (992630075U) : (var_0))) << (((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)22)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_8 [5U] = ((/* implicit */unsigned short) 3719543271U);
        var_21 += (+(((((/* implicit */_Bool) 786432)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((unsigned long long int) arr_1 [i_1])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))) ^ (((/* implicit */int) (unsigned short)32768))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (var_10)));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40390))))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_0 [i_2] [i_2]))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) var_0)) : (arr_13 [i_3]))), (((/* implicit */long long int) min((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)16))))), (((((/* implicit */int) arr_0 [i_3] [i_3])) << (((arr_4 [i_3]) - (12994880253043099211ULL))))))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_3] [i_3])) / (((/* implicit */int) arr_7 [i_3] [i_3])))) & (((/* implicit */int) arr_7 [i_3] [i_3])))))));
        arr_18 [i_3] = ((/* implicit */short) ((unsigned int) (short)32767));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_21 [i_3] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_3]))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (arr_19 [i_3] [i_4] [i_4])));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) (short)-32767)))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        arr_26 [i_3] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_5 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [(signed char)3] [i_3] = ((/* implicit */int) (unsigned short)4088);
                            var_27 = ((/* implicit */short) var_13);
                            arr_30 [6ULL] [6ULL] [i_5 - 2] [i_5 - 2] [i_7] = ((/* implicit */long long int) (+(arr_23 [i_5 - 3] [i_5 - 2] [i_5])));
                        }
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(arr_28 [i_5] [i_5] [i_5 + 1] [i_5 - 3] [i_5 + 1] [i_5 + 1]))))));
                    }
                } 
            } 
        }
    }
}
