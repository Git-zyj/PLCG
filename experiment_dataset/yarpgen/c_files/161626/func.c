/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161626
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
    var_17 = ((((/* implicit */_Bool) min((((signed char) var_6)), (var_12)))) ? (((/* implicit */int) ((((8477730923347617725LL) >> (((8477730923347617710LL) - (8477730923347617676LL))))) > (((/* implicit */long long int) ((/* implicit */int) ((var_16) < (((/* implicit */long long int) var_0))))))))) : (((/* implicit */int) var_14)));
    var_18 = ((/* implicit */unsigned char) max((((long long int) min((-772535270), (491520)))), (((/* implicit */long long int) (signed char)0))));
    var_19 ^= ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) ((_Bool) arr_1 [i_1] [i_0]))) : (((/* implicit */int) (signed char)-1)))) <= ((+(((/* implicit */int) (unsigned short)48208))))));
                /* LoopSeq 4 */
                for (int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2 - 3] [i_2] [i_2 + 1])))))) > (((long long int) var_8))));
                    arr_8 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_8))))), (((unsigned char) min((((/* implicit */int) var_8)), (arr_0 [i_0 - 1]))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_18 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)0))));
                                arr_19 [i_0] [i_4] [i_3] [i_4] [i_3] [i_5 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)199))));
                                arr_20 [i_0] [i_1] [i_3] [i_4 - 2] [(unsigned char)0] = ((/* implicit */unsigned int) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 - 3] [i_4] [i_5 + 1])))));
                                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_4 + 1] [i_5]))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */unsigned char) var_6);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) arr_23 [i_6]);
                                arr_28 [(signed char)6] [i_1] [i_6] [(signed char)6] [(signed char)6] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)199)))) > ((+(arr_25 [i_0] [i_0] [i_3] [i_6] [i_7])))));
                                var_22 = ((/* implicit */signed char) ((unsigned int) arr_6 [i_7 + 1] [i_6 + 1] [i_0 + 1] [i_6 + 1]));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */int) (unsigned short)43034);
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) var_1);
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) - (((/* implicit */int) ((_Bool) ((1769421091U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) arr_17 [i_0] [i_1] [i_1] [i_8] [i_9] [i_9] [i_10]))))) : (max(((-(var_1))), (((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_8 + 1] [i_9] [i_10] [i_8 + 1]))))))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((arr_34 [i_0] [i_0] [i_1] [i_8] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])))))) == (var_0)))))))));
                        var_27 = ((int) min((((/* implicit */unsigned long long int) ((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_8] [i_11])))))), (((((/* implicit */_Bool) 17018442092533175849ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (3289123969108890584ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_41 [i_0] [i_8] [i_8] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) -8477730923347617726LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_37 [i_0 - 1]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_44 [i_8] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) -8477730923347617711LL)) : (1116892707587883008ULL)))) ? (((/* implicit */int) (unsigned short)48208)) : ((+(((/* implicit */int) var_2))))))) ? (((((var_16) != (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17328))) : ((+(var_6))))) : (((((-8477730923347617718LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))))) ? (((/* implicit */long long int) min((3994905460U), (((/* implicit */unsigned int) var_12))))) : (arr_23 [i_8])))));
                        arr_45 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-8477730923347617718LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (-51432402))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(arr_39 [i_0] [(_Bool)1] [i_8] [i_13])))) == (((var_16) & (((/* implicit */long long int) arr_0 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8)))) == ((~(((/* implicit */int) var_11)))))))));
                    }
                    arr_46 [i_8] = ((/* implicit */int) var_9);
                }
                for (unsigned long long int i_14 = 2; i_14 < 10; i_14 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) ((signed char) max((var_6), (((/* implicit */long long int) var_13)))));
                    var_30 ^= ((/* implicit */_Bool) min((-743785700), (((/* implicit */int) (_Bool)1))));
                    var_31 = ((/* implicit */unsigned int) var_11);
                }
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) arr_40 [i_0] [(_Bool)1] [i_1] [(unsigned char)2] [i_0]))))), (((((/* implicit */_Bool) arr_15 [8])) ? (((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0])) : (var_9))))))))));
                var_33 = ((/* implicit */unsigned long long int) ((signed char) var_4));
            }
        } 
    } 
}
