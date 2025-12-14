/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101980
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_9))));
                                var_13 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1322637488)) ? (8314194130132439429ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))))))), (min(((-(((/* implicit */int) var_8)))), ((~(((/* implicit */int) (unsigned short)57211))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */long long int) (signed char)-119);
        arr_17 [i_5] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) -1322637488)) ? (((/* implicit */unsigned long long int) -1322637488)) : (2550131416990671308ULL))));
    }
    for (signed char i_6 = 4; i_6 < 21; i_6 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [i_6])) ? (var_3) : (var_3))), (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) 812740851U))) > (((/* implicit */int) ((_Bool) 10132549943577112167ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8314194130132439441ULL))))))))));
        var_15 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)250)), (arr_19 [i_6])))))) ? ((~(((15328394221170293716ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [18]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6]))))))));
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_23 [16ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1634641770)) ? (8314194130132439455ULL) : (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned long long int) max((max((4206650971U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) min((var_5), (((/* implicit */short) arr_0 [i_7])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])) != (((/* implicit */int) (unsigned char)37)))))) + (((unsigned long long int) 15896612656718880317ULL))))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned short) max((8314194130132439429ULL), (var_2)));
        var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((var_0) == (-860224139))) ? (arr_13 [i_7] [i_7] [i_7] [i_7]) : ((-(((/* implicit */int) var_8))))))) != (((((/* implicit */unsigned long long int) -860224122)) - (((((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_7] [6ULL] [i_7] [i_7])) - (var_2)))))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) 2550131416990671308ULL)) || (((/* implicit */_Bool) 16437975920027078522ULL)))) ? (arr_13 [i_7] [i_7] [i_8] [i_7]) : (((/* implicit */int) min((((/* implicit */short) (signed char)-110)), (var_7))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (signed char i_10 = 2; i_10 < 19; i_10 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_31 [i_10] [i_10 - 2] [i_10] [i_9] [i_10 + 3] [i_10])), (arr_7 [(unsigned short)3] [i_10 - 2] [i_10 + 3] [i_10]))))));
                        arr_33 [i_9] [(short)15] [i_10] [(unsigned char)14] = ((/* implicit */unsigned char) var_9);
                        var_19 = ((/* implicit */short) (-(((var_9) ? (((/* implicit */int) arr_5 [i_9] [i_9])) : (((((/* implicit */_Bool) (short)28425)) ? (((/* implicit */int) (_Bool)0)) : (-1322637498)))))));
                        arr_34 [i_9] [i_9] = ((/* implicit */unsigned int) ((min((((arr_11 [16LL] [16LL] [(_Bool)1] [i_9] [i_9] [i_10 + 2]) / (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_31 [i_10] [i_9] [i_9] [i_9] [i_7] [(unsigned short)7])))))) - (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) + (1322637488)))) && (((/* implicit */_Bool) var_3)))))));
                        arr_35 [13U] [i_9] [i_8] [i_9] [i_7] = ((/* implicit */unsigned int) ((long long int) min((268431360ULL), (((/* implicit */unsigned long long int) (unsigned short)36442)))));
                    }
                } 
            } 
            arr_36 [i_8] [(unsigned char)21] [i_8] = ((/* implicit */short) ((signed char) 4218524766450603970LL));
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_20 = ((((int) ((((/* implicit */_Bool) arr_39 [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (26U)))) - (((/* implicit */int) ((_Bool) arr_39 [i_11] [i_11]))));
        var_21 = ((/* implicit */unsigned short) 4263450214U);
        var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_6)))))) ? (var_6) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_39 [i_11] [i_11])) : (arr_37 [(unsigned short)2] [i_11]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_39 [(short)21] [i_11])))))))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    arr_46 [i_13] [i_12] |= ((/* implicit */long long int) var_9);
                    var_23 = ((/* implicit */unsigned int) ((_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_40 [13ULL] [(unsigned char)23] [13ULL])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_14 = 2; i_14 < 22; i_14 += 3) 
        {
            arr_50 [i_11] = ((/* implicit */long long int) (-((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_42 [i_11] [i_14])))))));
            arr_51 [i_11] [(short)1] [i_14 + 2] |= ((/* implicit */unsigned int) ((_Bool) 8597448940138926197LL));
        }
    }
    var_24 &= ((/* implicit */signed char) ((unsigned int) 3765547259882516173LL));
}
