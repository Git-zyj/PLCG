/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167054
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (_Bool)0))));
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)104)))) * ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(short)9] [i_1] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) : (var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_4])) - (((/* implicit */int) var_1))))))));
                                arr_13 [i_2] [i_1] [10] [i_2] [i_2 - 1] [i_2 - 1] = ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)152)) == (((/* implicit */int) (unsigned char)160)))))) : ((+(var_5)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 3963285645U)) || (((/* implicit */_Bool) var_9)))))))) || (((((var_8) || (((/* implicit */_Bool) arr_9 [i_2] [(short)3] [i_2] [i_1] [i_0])))) || (((/* implicit */_Bool) var_4))))));
                        arr_19 [6U] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) (unsigned char)31);
                        var_13 += ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1] [(signed char)3])) % (((/* implicit */int) (_Bool)1)))) > (-1418102880))));
                        var_14 = (!(((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_1))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_20 [i_6])), (arr_21 [i_6])))), (((((/* implicit */_Bool) arr_20 [i_6])) ? (var_9) : (((/* implicit */int) var_6))))))), (min((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(signed char)0]))))), (((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))))))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (unsigned char i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    {
                        arr_30 [i_6] [i_8] [i_8] [i_9 - 1] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_24 [i_6]), (((/* implicit */short) var_3))))), (max((((/* implicit */unsigned long long int) (unsigned char)178)), (15245984381777161402ULL))))))));
                        var_16 = ((/* implicit */int) -1LL);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        var_17 = ((/* implicit */signed char) (unsigned char)160);
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
        var_18 |= ((/* implicit */unsigned long long int) (short)-1803);
    }
    /* LoopNest 3 */
    for (signed char i_11 = 2; i_11 < 10; i_11 += 1) 
    {
        for (int i_12 = 2; i_12 < 10; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 2; i_14 < 9; i_14 += 1) 
                    {
                        for (int i_15 = 1; i_15 < 8; i_15 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (signed char)15))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [9ULL] [i_11] [i_12 - 1]))) & (-21LL)))));
                                arr_49 [i_11] [i_12] [i_14 + 1] [i_11] [i_11] = ((/* implicit */long long int) var_6);
                                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_11]))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_8))))))));
                                arr_50 [i_11] [i_14 - 1] [i_13] [i_12 - 2] [i_11] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : ((~(17055507710234924201ULL))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_14] [(unsigned char)6] [i_14 + 2] [i_14 - 2] [i_14 - 1])))))));
                                var_21 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) 538583584U)) * (8423426374344444599ULL))), (((/* implicit */unsigned long long int) ((int) arr_42 [i_11] [i_14 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 1) 
                        {
                            arr_56 [i_11] [i_12] [i_12 - 2] [i_12 - 2] [i_12 + 1] = ((/* implicit */unsigned short) (!((_Bool)1)));
                            arr_57 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] |= 3756383708U;
                            arr_58 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (400084288588392406LL) : (9007197107257344LL)));
                            var_22 += ((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned char)101)))));
                        }
                        for (signed char i_18 = 2; i_18 < 9; i_18 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned char) var_9)))));
                            arr_61 [i_13] [i_12] [i_11] [i_16] [i_18] [i_18] = ((((/* implicit */_Bool) 1391236363474627427ULL)) ? (((/* implicit */int) (unsigned char)218)) : (((950550684) & (-11))));
                        }
                        var_24 = ((((/* implicit */_Bool) arr_59 [i_12 - 2] [i_12 - 2])) ? (((/* implicit */int) arr_59 [i_12 - 1] [i_12 + 1])) : (((/* implicit */int) arr_59 [i_12 + 1] [i_12 + 1])));
                    }
                }
            } 
        } 
    } 
}
