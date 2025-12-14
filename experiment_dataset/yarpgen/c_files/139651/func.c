/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139651
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
    var_11 = min((((/* implicit */unsigned int) var_1)), (min((min((3216068807U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((_Bool) var_0))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [(_Bool)1] [i_0 - 1] &= ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */int) min(((signed char)-72), (((/* implicit */signed char) arr_1 [i_0 - 1]))))) < (((/* implicit */int) ((((/* implicit */int) (signed char)-53)) < (((/* implicit */int) (_Bool)1)))))))), (((short) arr_1 [i_0 - 1]))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) (((+(((/* implicit */int) var_1)))) * (((/* implicit */int) arr_1 [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_0] [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (short)14752);
                                arr_16 [i_4] [i_3] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_11 [i_0] [i_0])))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-3139602406302040765LL)))) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 2226917851U)), (16504473741286558007ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-45))))))))));
                        arr_19 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) min((3846968747U), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_13 [i_0 - 1] [i_1]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            arr_23 [(_Bool)0] [i_1] [i_6] [9U] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6] [i_1] [i_0] [i_5 - 1] [i_6] [i_0 - 1])) && (((/* implicit */_Bool) (signed char)72))));
                            arr_24 [i_0 - 1] [i_1] [i_0] [(signed char)0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */short) ((arr_22 [i_0] [i_0] [i_5 - 1] [(unsigned short)8] [i_6]) >> (((arr_22 [i_0] [i_0] [i_5 - 1] [(unsigned char)10] [1LL]) - (16770729357054422615ULL)))))) : (((/* implicit */short) ((arr_22 [i_0] [i_0] [i_5 - 1] [(unsigned short)8] [i_6]) >> (((((arr_22 [i_0] [i_0] [i_5 - 1] [(unsigned char)10] [1LL]) - (16770729357054422615ULL))) - (10724526604875650845ULL))))));
                            arr_25 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0 - 1] = (_Bool)1;
                        }
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (~((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-31)))))))))));
                            arr_29 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) min((((((/* implicit */int) var_8)) << (((arr_22 [i_5] [i_0] [i_5] [i_5] [i_5 - 1]) - (16770729357054422644ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */_Bool) min((((((/* implicit */int) var_8)) << (((((arr_22 [i_5] [i_0] [i_5] [i_5] [i_5 - 1]) - (16770729357054422644ULL))) - (10724526604875650835ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_32 [i_0 - 1] [i_5 - 1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-105))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_31 [i_8] [i_8] [i_0] [i_0] [i_1] [(signed char)5])))) + (((/* implicit */int) min((((((/* implicit */_Bool) (short)-28598)) || (((/* implicit */_Bool) arr_22 [(_Bool)1] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))), ((!(((/* implicit */_Bool) 902201733)))))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_8] [i_5] [(signed char)7] [i_0])) == (((/* implicit */int) ((signed char) var_2)))));
                            arr_33 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        }
                        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_31 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [i_1] [i_0 - 1])), (var_1)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7)))))))) <= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_5 - 1] [i_1])))))));
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (15284263210486054440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) arr_21 [i_0] [(unsigned char)7] [i_0] [(unsigned short)7] [i_0] [(_Bool)1])))))) : (((unsigned int) arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]))));
                        var_18 = (~(((/* implicit */int) arr_1 [i_0 - 1])));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_19 = ((/* implicit */int) ((long long int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1]));
                            var_20 = ((/* implicit */_Bool) ((arr_12 [i_0 - 1] [i_0] [i_0 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                            var_21 ^= ((/* implicit */signed char) ((unsigned int) ((short) (short)-20584)));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_11 = 1; i_11 < 9; i_11 += 1) 
                        {
                            arr_44 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_12 [i_0 - 1] [i_11 + 1] [i_11 + 2]) && (((/* implicit */_Bool) 663257940))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -5976449682324942171LL)) ? (((/* implicit */unsigned long long int) -89870285)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (6570455710470044819ULL)))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(short)8] [(_Bool)1] [i_2] [(_Bool)1] [i_2])) ? ((~(89870285))) : (var_0)));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_2] [i_12])))))));
                            arr_48 [i_12] [i_0] [i_2] [i_0] [4U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)51)) || (((/* implicit */_Bool) -6786566092485133922LL))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) (((((-(var_0))) + (2147483647))) >> (((var_6) + (804174445)))));
                            var_26 = (-(((/* implicit */int) arr_28 [i_0 - 1] [i_0 - 1] [i_0])));
                        }
                        arr_52 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-44)))) <= (((/* implicit */int) (signed char)108))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (var_8)));
                        var_28 = ((/* implicit */signed char) max((var_28), (max((((signed char) ((var_0) >= (((/* implicit */int) arr_31 [i_0 - 1] [i_1] [i_1] [(short)2] [(signed char)2] [i_14]))))), (((/* implicit */signed char) arr_1 [i_0 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            {
                                arr_59 [i_0 - 1] [i_0] [i_2] [i_15] [i_16] = ((/* implicit */long long int) arr_17 [i_16] [i_0]);
                                arr_60 [i_16] [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_0] [1ULL] [i_2] [(signed char)0] [i_16])) >= ((-(((/* implicit */int) max((((/* implicit */short) (signed char)4)), ((short)-31168))))))));
                                arr_61 [i_0] [i_0 - 1] [i_1] [i_2] [i_15] [i_16] [i_16] = ((/* implicit */int) var_8);
                                arr_62 [i_0] [2ULL] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_0] [i_0 - 1] [i_0 - 1] [4U] [3U] [i_0]))))) << (((((((/* implicit */_Bool) ((short) (_Bool)1))) ? ((((_Bool)1) ? (5037714859925505185LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */long long int) max((arr_26 [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned int) 2147483647))))))) - (5037714859925505180LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
