/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183678
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
    var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_14)), (var_10))), (var_3)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)12)) <= (((/* implicit */int) (unsigned short)65535))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                arr_7 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((short) var_15))), (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (var_3) : (((/* implicit */long long int) (-(var_12))))))));
                arr_8 [i_2] = ((/* implicit */unsigned char) (-((-(arr_6 [i_2] [i_1] [i_0] [i_0])))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_4 [i_0] [i_1])))), ((-(((/* implicit */int) arr_4 [i_0] [i_2]))))));
            }
            var_19 = ((/* implicit */_Bool) var_5);
            arr_10 [i_0] [i_0] = max((((/* implicit */int) ((signed char) var_14))), ((-(-2039487193))));
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(95140299))))))));
            var_21 = ((/* implicit */int) (unsigned short)53298);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            var_22 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)14254)) << (((((/* implicit */int) (unsigned short)40479)) - (40476)))))));
            var_23 |= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_3 + 3] [i_3 + 1])) <= (((/* implicit */int) arr_2 [i_3 - 1] [i_3 + 1]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) (-(-1729500736)));
                            var_25 = ((/* implicit */_Bool) ((short) arr_18 [i_3] [i_3 + 1] [i_5] [i_5] [i_5]));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1])) ? (arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_4 + 2]) : (arr_16 [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2])));
                            arr_21 [i_3 + 2] [i_4 - 2] [i_5] [i_6] = arr_17 [i_0] [i_3] [i_3 - 2];
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)40508))));
                    arr_24 [i_3] [i_3] [i_4 + 2] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                }
                for (long long int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) 2199023255424ULL))));
                        var_29 = ((((((/* implicit */_Bool) arr_0 [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_22 [i_8] [i_4 + 1] [i_3]))) > (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9)) * (((/* implicit */int) arr_13 [i_0] [i_4] [i_9]))))));
                    }
                    var_30 = ((/* implicit */long long int) var_6);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        arr_32 [i_0] [i_3 + 1] [i_4] [i_8] [i_10] = ((/* implicit */_Bool) ((unsigned short) 29));
                        arr_33 [i_0] [i_10] [i_4 - 1] [i_10] [i_10] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4] [i_4] [i_3 + 2] [i_3]))));
                        arr_34 [i_10] [i_8] [i_4 + 1] [i_3 - 1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_4 + 2] [i_3 + 2]))));
                    }
                    for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_0] [i_3 + 3] [i_3 + 2] [i_4] [i_8] [i_11] = ((/* implicit */short) (-(((/* implicit */int) arr_25 [i_0] [i_3 + 3] [i_4 - 2]))));
                        var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)25))));
                        arr_38 [i_0] [i_3] [i_8] [i_3 - 2] [i_11] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 9063594583496276456LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_6))));
                        var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4 + 2] [i_3 - 2] [i_3 + 1])) ? (((/* implicit */int) arr_25 [i_4 + 2] [i_3] [i_3])) : (((/* implicit */int) arr_25 [i_4 + 2] [i_4] [i_0]))));
                        var_33 -= ((/* implicit */unsigned short) var_11);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_34 = arr_12 [i_3 + 1] [i_4 - 2];
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_28 [i_4 - 2] [i_4 + 2] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 + 2])));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] [i_8] [i_13] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (380599987627223157ULL))) > (arr_35 [i_4 + 2] [i_3 + 2])));
                        var_36 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) (short)3840)))) ? (arr_28 [i_0] [i_4 - 2] [i_4] [i_4 + 1] [i_13] [i_0] [i_4]) : (((/* implicit */long long int) arr_3 [i_4 - 1]))));
                        arr_45 [i_0] [i_3] [i_4] [i_8] [i_13] = (~(((/* implicit */int) (unsigned short)59384)));
                        var_37 = ((/* implicit */long long int) arr_1 [i_0]);
                    }
                }
            }
            for (unsigned long long int i_14 = 3; i_14 < 20; i_14 += 2) 
            {
                var_38 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14 - 3] [i_3 + 2]))) < (((((/* implicit */_Bool) var_4)) ? (5034700674241915872LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37)))))));
                var_39 = ((/* implicit */long long int) (_Bool)0);
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_0] [i_3 - 2] [i_3 + 1] [i_14 - 3] [i_14 - 1])) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) var_1))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_41 -= ((/* implicit */long long int) ((unsigned short) var_11));
                var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_3 + 2] [i_3]))));
                arr_53 [i_0] [i_15] = ((/* implicit */signed char) ((long long int) arr_0 [i_3 - 2] [i_3 + 3]));
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)13)) + (((/* implicit */int) (unsigned short)3))));
            }
            for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                arr_56 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6151)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        {
                            arr_65 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) arr_36 [i_3 - 1] [i_3]);
                            var_44 = ((/* implicit */unsigned long long int) var_3);
                            var_45 |= ((/* implicit */unsigned short) ((signed char) (unsigned short)6151));
                            arr_66 [i_0] [i_3] [i_16] [i_17] [i_18] = ((/* implicit */signed char) (+(-95140299)));
                        }
                    } 
                } 
                var_46 = ((/* implicit */int) (!(var_11)));
            }
        }
        var_47 -= ((/* implicit */signed char) ((unsigned char) (~(var_13))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        var_48 = ((/* implicit */long long int) -1808732069);
        arr_69 [i_19] |= (((_Bool)1) ? (((/* implicit */int) (unsigned short)49587)) : (((/* implicit */int) (unsigned short)0)));
    }
}
