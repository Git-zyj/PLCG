/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171523
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
    var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 268435455)) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) (_Bool)1))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0] [i_0])) != (-3413240136592838084LL)));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [i_0])));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3413240136592838084LL)) ? (((/* implicit */long long int) -730570108)) : (3413240136592838084LL)));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : ((~(arr_0 [i_0] [(_Bool)1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) (_Bool)1);
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_1)))) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) -2000085184))));
        var_22 += ((/* implicit */short) 4294967267U);
        var_23 = ((/* implicit */unsigned long long int) ((long long int) arr_3 [i_1]));
        var_24 = ((/* implicit */short) max((((/* implicit */long long int) ((arr_4 [i_1]) != (((/* implicit */long long int) arr_3 [i_1]))))), (((arr_4 [i_1]) << (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_25 = var_0;
        var_26 = ((((/* implicit */_Bool) var_14)) ? (min((arr_6 [i_2]), (((/* implicit */unsigned int) var_8)))) : (min((((/* implicit */unsigned int) ((unsigned short) 7483609498382733192LL))), (((arr_9 [i_2]) >> (((((/* implicit */int) var_3)) - (32496))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) arr_5 [14U]);
                    arr_16 [i_4] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_4]))) > (min((((/* implicit */unsigned int) (_Bool)1)), (1574956306U)))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_28 = ((/* implicit */long long int) arr_10 [i_5] [i_6] [i_7]);
                        var_29 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)30)), (1148530801)));
                    }
                } 
            } 
        } 
        var_30 = ((short) (signed char)77);
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_31 += ((/* implicit */short) arr_0 [i_5] [i_5]);
            var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_5 - 1])) | (-7483609498382733204LL)))) ? (((arr_5 [i_5 + 4]) * (arr_5 [i_5 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_5 + 1]) > (arr_5 [i_9])))))));
        }
    }
}
