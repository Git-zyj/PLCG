/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130031
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26739))) : (var_4))) >= (((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_4);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_10 -= ((/* implicit */unsigned long long int) var_1);
                            arr_15 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (4462527363920705343ULL)));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((((unsigned long long int) 14504432275272219282ULL)) | (((/* implicit */unsigned long long int) -159890216331256806LL))));
                            arr_19 [i_2] [i_1] [i_2] [i_2] [i_5] = ((short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_12 [i_5] [i_3] [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 159890216331256806LL))));
                            var_11 += ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_17 [i_5] [i_3] [i_3] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) -3781127288783248656LL)) : (arr_16 [i_1] [i_2])));
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_22 [i_2] [i_3] [i_3] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_1))));
                            var_12 = ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6]) : (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_6]));
                            arr_23 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((var_5) << (((8463378641685877225ULL) - (8463378641685877224ULL))))) : (((long long int) var_4))));
                        }
                        arr_24 [i_0] [i_3] [i_1] [i_3] [i_3] [i_2] = ((/* implicit */short) arr_16 [i_0] [i_0]);
                        arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0])))));
                        arr_26 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1]);
                        arr_27 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    }
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_13 = arr_13 [i_0] [i_2];
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_21 [i_7] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_13 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21011)))));
                        arr_32 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) var_9))));
                    }
                    var_15 = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_1] [i_0]);
                }
                for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_16 = (-(min((9983365432023674391ULL), (((/* implicit */unsigned long long int) -8525787898913490331LL)))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (10322436968290515592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26313)))))) ? (((((/* implicit */_Bool) var_8)) ? (min((arr_0 [i_9]), (9478228672162737765ULL))) : (((arr_7 [(unsigned short)4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26313))))))) : ((+(arr_36 [i_8] [i_9]))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 3; i_10 < 16; i_10 += 1) 
                        {
                            arr_42 [i_0] [16LL] [i_1] [i_0] [i_9] [i_10 - 1] &= ((/* implicit */long long int) arr_37 [i_0] [i_0] [i_0] [i_0]);
                            arr_43 [i_8] [i_8] [9ULL] = (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (16508576911966926125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))));
                            arr_44 [0ULL] |= ((/* implicit */short) var_0);
                        }
                        /* vectorizable */
                        for (long long int i_11 = 1; i_11 < 16; i_11 += 2) 
                        {
                            arr_47 [i_0] [i_1] [i_8] [i_9] [i_0] [i_9] [i_8] = ((/* implicit */long long int) arr_31 [i_8] [i_8] [i_9] [i_11 - 1]);
                            arr_48 [i_8] = ((((/* implicit */unsigned long long int) (-(arr_21 [i_0] [i_1] [i_9])))) % (arr_39 [i_0] [i_0] [i_8] [i_9] [i_8]));
                            arr_49 [i_0] [i_8] [i_1] [i_1] [i_9] [i_9] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((var_7) <= (arr_40 [i_0] [i_1] [11ULL] [i_9] [i_0])))) / (((/* implicit */int) arr_11 [i_8] [i_11 + 1] [i_11] [i_11] [i_11 - 1]))));
                        }
                        for (unsigned short i_12 = 2; i_12 < 17; i_12 += 3) 
                        {
                            arr_53 [i_8] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8] [i_12 - 2] [i_12 - 2] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */int) arr_11 [i_8] [i_12 + 1] [i_12] [i_12] [i_12 - 1])) : (((/* implicit */int) arr_11 [i_8] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 2]))))) & (min((((/* implicit */unsigned long long int) -159890216331256806LL)), (9983365432023674389ULL))));
                            arr_54 [i_0] [i_0] [i_1] [i_8] [i_0] [i_0] = var_5;
                            arr_55 [i_12 - 2] [i_8] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
                        }
                        var_18 = ((((/* implicit */_Bool) var_6)) ? (max((1587919749061524496LL), (((/* implicit */long long int) ((3585726677681108972LL) < (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) * (0ULL))) <= (3711801452583278306ULL))))));
                    }
                    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 17; i_14 += 4) 
                        {
                            arr_62 [i_8] = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26313))) / (6442187361396202008LL)))));
                            arr_63 [i_8] = min((10683708763110301326ULL), (((/* implicit */unsigned long long int) (unsigned short)46040)));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), ((((!(((/* implicit */_Bool) 10683708763110301326ULL)))) ? ((-(min((((/* implicit */unsigned long long int) 67108863LL)), (arr_30 [i_13]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)837))))) ? (((/* implicit */unsigned long long int) ((long long int) var_1))) : (((((/* implicit */unsigned long long int) arr_51 [i_1] [i_1])) % (var_4)))))))));
                            arr_64 [i_0] [i_1] [i_8] [i_13] [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1169367826611337271LL)), (12175649607382123143ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-3273))))) : ((-(var_6)))))));
                        }
                        arr_65 [i_8] = -8708113707167660531LL;
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            {
                                arr_72 [i_8] [i_8] [i_8] = ((long long int) (~(arr_0 [i_0])));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((-4579891049764960663LL) >= (2528652153059182926LL)))) ^ (((/* implicit */int) ((max((var_0), (((/* implicit */long long int) arr_50 [i_8] [i_1] [i_8] [i_15] [i_8])))) != (2434717900669898663LL))))));
                                arr_73 [i_0] [i_0] [i_1] [i_1] [i_8] [i_15] [i_16] = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_16]);
                                arr_74 [i_16] [i_16] [i_16] [i_16] [i_8] [i_16] = ((/* implicit */unsigned long long int) (((-(-2434717900669898663LL))) + (((/* implicit */long long int) ((/* implicit */int) (((-(9256175525396933350ULL))) == (((/* implicit */unsigned long long int) (+(var_5))))))))));
                                arr_75 [i_16] [i_0] [i_8] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_16]))))), ((~((~(2097151ULL)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 ^= ((var_4) + (((((/* implicit */_Bool) var_8)) ? (15363373763806023556ULL) : ((+(14734942621126273339ULL))))));
}
