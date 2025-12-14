/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12257
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
    var_12 *= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) -6072053098922718062LL);
        var_14 -= ((/* implicit */_Bool) arr_3 [i_0]);
        var_15 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) * (var_7))) << (((-6332821997022496739LL) + (6332821997022496744LL)))));
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_17 += ((/* implicit */unsigned char) max((-6332821997022496739LL), (((/* implicit */long long int) 1147473405U))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */short) arr_4 [i_1] [i_1])))))) | ((~(-4775838879643050081LL)))));
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] [i_2] &= ((/* implicit */_Bool) var_7);
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_1] [i_2 + 3]), (arr_6 [i_1] [i_2 + 3])))) ? (((/* implicit */int) min((arr_6 [i_1] [i_2 + 3]), (arr_6 [i_1] [i_2 + 3])))) : (((/* implicit */int) arr_6 [i_1] [i_2 + 3])))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_15 [i_4] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_3 + 1])) ? (((/* implicit */int) arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_4])) : (((/* implicit */int) arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_4])))), (((/* implicit */int) max((arr_12 [i_2 + 1] [i_3 + 1] [i_2 + 3] [i_1]), (arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_4]))))));
                        var_20 = ((/* implicit */signed char) var_4);
                        var_21 |= ((/* implicit */long long int) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_3 - 1])))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [i_3 - 1] [i_1] [i_1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) 17876097759207906889ULL)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)254))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5] [i_4])) || (((/* implicit */_Bool) arr_5 [i_5])))))) : (max((arr_10 [i_3 - 1]), (arr_10 [i_1]))));
                            var_23 += ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) arr_4 [i_2 - 1] [i_2 - 1])), (arr_5 [i_3 - 1]))))));
                            arr_21 [i_4] = ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_14 [i_3 - 1] [i_3] [i_3 - 1]))))) : (-9114807633202041875LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [i_3 + 1])) / (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)76)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)3)) ^ (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_2 + 2] [i_3 - 1] [i_4] [i_6] [i_6]))) : (max((((/* implicit */unsigned long long int) 467055807U)), (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_9 [i_1] [i_4] [i_3 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (short)-29119))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_2 + 3] [i_3 - 1] [i_4] = ((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 2]);
                            arr_27 [i_4] [i_3 + 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_10 [i_7])) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_28 [i_7] [i_2 + 1] [i_3 - 1] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) 2669590573U);
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) ((unsigned int) (~(4294967295U))));
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)254)), (min((((/* implicit */unsigned long long int) arr_29 [i_1] [i_8] [i_8])), (13360959957965201090ULL)))));
            var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_1] [i_1] [i_1] [i_8])) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_8] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_8]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_10 [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1]))) / (2408965958953102887ULL)))))));
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_29 ^= (signed char)0;
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((unsigned char) max(((short)8085), (((/* implicit */short) (_Bool)1))))))));
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (long long int i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        {
                            arr_45 [i_1] [i_9] [i_10] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_1] [i_9] [i_9] [i_9] [i_10])) > (((/* implicit */int) arr_6 [i_1] [i_11]))));
                            var_31 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30002))) >= (0U)))), ((unsigned char)51))));
                        }
                    } 
                } 
            } 
        }
        var_32 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max(((signed char)38), ((signed char)0)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_44 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1])))));
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        var_33 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_25 [i_13] [i_13] [i_13] [i_13] [11U] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (arr_37 [i_13] [i_13] [i_13])))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6790878064226351251ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) : (4294967295U)));
    }
    var_35 = var_8;
    var_36 = ((/* implicit */short) var_7);
    var_37 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((0LL) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (2856915879091758032ULL))) - (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_7)), (var_5))))))));
}
