/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181476
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
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    var_20 += ((/* implicit */_Bool) var_16);
    var_21 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
    var_22 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) max(((unsigned char)188), ((unsigned char)67)))) : (((/* implicit */int) var_18)))) : (min((((/* implicit */int) max((var_13), (var_13)))), (((((/* implicit */int) var_2)) - (((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((unsigned int) var_7));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_10);
        arr_4 [i_0] = ((/* implicit */int) var_12);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (unsigned char)243))))));
                        var_25 ^= (unsigned short)65535;
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)187)) && ((_Bool)0))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((short) arr_7 [i_4])))));
        arr_15 [i_4] &= ((/* implicit */signed char) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */short) max((5382262237903079940ULL), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)0))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_26 [i_6] = ((/* implicit */signed char) var_12);
                    arr_27 [i_5] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)111))));
                    arr_28 [i_5] [(_Bool)0] = ((/* implicit */int) 5382262237903079940ULL);
                    arr_29 [i_5] [i_6] [6LL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)18670)) ? (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (signed char)111)))) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (unsigned char i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                {
                    arr_35 [i_8] [i_8] [i_9 - 1] = ((/* implicit */long long int) (signed char)111);
                    var_29 = ((/* implicit */long long int) max((((arr_10 [i_9] [i_9 + 3] [i_9] [i_9 + 1] [i_9 - 1] [i_9]) ? (((/* implicit */int) arr_10 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9] [i_9 + 3] [i_9])) : (((/* implicit */int) arr_10 [i_9] [i_9 - 2] [i_9 + 3] [i_9 - 2] [i_9 - 2] [i_9])))), ((~(((/* implicit */int) ((9223372036854775807LL) < (((/* implicit */long long int) arr_6 [i_8])))))))));
                    arr_36 [i_8] [i_8] [i_8] [i_5] = max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)96)) && (((/* implicit */_Bool) var_6)))))))), (max((1418332508278666265ULL), (((/* implicit */unsigned long long int) var_16)))));
                    var_30 = ((/* implicit */unsigned short) (+(4123168604160LL)));
                }
            } 
        } 
        arr_37 [i_5] [i_5] = ((/* implicit */unsigned short) max((((((((/* implicit */unsigned long long int) var_7)) >= (17028411565430885351ULL))) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))), (((/* implicit */int) var_17))));
    }
}
