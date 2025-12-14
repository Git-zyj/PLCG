/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118242
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
    var_16 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20467))) : (2375083983U));
    var_17 = var_6;
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((+(((/* implicit */int) (unsigned short)5)))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_15 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1] [i_3]))));
                        arr_16 [i_0] [i_2] = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_3]);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 8191)) ? (((/* implicit */long long int) -8186)) : (-491990510445230845LL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4])) | (((((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4])) << (((arr_17 [i_4]) - (2124358863)))))))), ((~(min((-491990510445230845LL), (((/* implicit */long long int) arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
        var_20 += ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)29)), (arr_11 [i_4] [i_4] [i_4] [i_4])))) ? (11ULL) : (((/* implicit */unsigned long long int) 8188)))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_5 [i_4])))))))));
        var_21 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) min(((signed char)41), (((/* implicit */signed char) (_Bool)1)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) arr_24 [i_5]);
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_23 |= ((/* implicit */_Bool) ((unsigned short) arr_2 [i_6]));
                        arr_30 [i_7] [i_6] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_12 [i_4] [i_5] [i_4] [i_6] [i_6] [i_7])))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((arr_13 [i_7] [i_4] [i_4] [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5]))))))));
                    }
                } 
            } 
            arr_31 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1261466100U))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_4])) : (((/* implicit */int) arr_27 [i_4] [i_5] [i_5]))));
        }
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) arr_32 [i_8] [i_8]);
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            var_26 = ((/* implicit */_Bool) arr_35 [i_8] [i_8]);
            arr_39 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3160210631U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)3584))));
            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)0)), (arr_35 [i_8] [i_9]))), (arr_35 [i_8] [i_9]))))));
        }
    }
    for (short i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
    {
        arr_44 [i_10] [i_10] = arr_40 [i_10];
        var_28 = ((/* implicit */unsigned int) (-((((-(((/* implicit */int) arr_35 [i_10] [i_10])))) % ((~(arr_37 [i_10] [i_10])))))));
    }
}
