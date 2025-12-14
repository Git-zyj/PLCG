/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123348
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((unsigned short) var_4)))) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-12836)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_18 |= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) : (3857478862U)));
                        var_19 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */short) var_2)), (arr_3 [i_0]))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_9 [i_0] [(_Bool)1]))))) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) ((unsigned char) var_7)))))) ? (min((((long long int) 5178699402309682536ULL)), (min((((/* implicit */long long int) (_Bool)1)), (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))) : (var_0)));
                            var_22 ^= ((/* implicit */signed char) ((unsigned int) ((arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_10))));
                            var_24 *= var_6;
                        }
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) arr_11 [i_5 - 1]);
                            var_26 ^= ((((/* implicit */int) (unsigned short)32768)) / (((/* implicit */int) (short)26499)));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 3] [(unsigned char)12]))) : (var_3))))))));
                        }
                        for (signed char i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)92);
                            arr_22 [i_6 + 2] [i_0] [i_0] [(unsigned char)2] [i_0] [(unsigned char)2] [i_0] = ((/* implicit */_Bool) var_0);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned char) var_12);
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_3))));
                        }
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_2 [i_1] [i_0 + 2]))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)11803)) != ((-((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        arr_29 [i_0] [i_1] [i_2] [i_1] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (13268044671399869091ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 + 3] [i_0 + 2] [i_0 + 4])))))));
                        var_32 ^= ((/* implicit */signed char) arr_1 [i_1] [i_2]);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) min((13268044671399869072ULL), (13268044671399869080ULL))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_34 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_11)));
                        var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_4 [i_0 - 3] [(signed char)10] [(signed char)10])))) : (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_4 [i_0 + 4] [(unsigned char)4] [i_2]))))));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) arr_4 [i_0] [12] [i_0 + 2])) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (5178699402309682536ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-3815)))))));
                            var_37 = ((/* implicit */short) min(((-(var_0))), (max((var_0), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_9)))))))));
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) max((((var_13) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((((/* implicit */long long int) ((/* implicit */int) var_13))) * (var_5))))))));
                            var_39 = (((!(var_12))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_11)))))) : (((var_12) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 2] [(unsigned short)12]))))));
                            var_40 ^= ((/* implicit */signed char) (_Bool)1);
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) ((arr_5 [i_0] [i_0 - 3]) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_0 + 1])) : (((/* implicit */int) var_10))));
                            var_42 |= ((((_Bool) var_9)) && ((!(((/* implicit */_Bool) var_0)))));
                        }
                        for (signed char i_12 = 3; i_12 < 18; i_12 += 3) 
                        {
                            var_43 ^= var_8;
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-26500))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 13268044671399869070ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_5))))));
                        }
                        var_45 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((-(((/* implicit */int) var_9)))) << ((((_Bool)1) ? (((/* implicit */int) arr_19 [i_0] [i_0 + 3] [i_1] [i_0 + 3] [i_2] [i_9] [i_9])) : (((/* implicit */int) var_13))))))), (var_5)));
                        var_46 &= ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_11 [i_0 + 1])))));
                    }
                    var_47 ^= ((/* implicit */unsigned char) ((_Bool) arr_11 [i_0 - 2]));
                    var_48 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_15)), (((arr_7 [i_0]) ? (((/* implicit */unsigned long long int) var_5)) : (var_3))))), (((/* implicit */unsigned long long int) (unsigned char)248))));
                }
            } 
        } 
    } 
}
