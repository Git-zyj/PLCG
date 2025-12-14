/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170472
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
    var_20 = var_1;
    var_21 = ((/* implicit */_Bool) 0U);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_22 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)-1))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_23 *= ((/* implicit */short) ((long long int) min(((signed char)2), ((signed char)0))));
                        var_24 = ((/* implicit */unsigned int) arr_9 [i_0] [7U] [0U] [i_0] [0U]);
                        arr_10 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((signed char)12), (((/* implicit */signed char) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = arr_2 [i_0 - 3] [i_0];
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            arr_14 [i_0] [11U] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_12 [i_0 - 3] [i_0] [i_4])))));
            var_25 = ((/* implicit */int) (+(((arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 1]) ^ (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (signed char)127)))));
            arr_16 [i_0] [(short)2] [i_0] = ((/* implicit */short) ((int) ((((unsigned int) arr_1 [i_0])) << (((((33554431) - (((/* implicit */int) (signed char)5)))) - (33554413))))));
            arr_17 [i_0] = ((/* implicit */int) (-(((long long int) ((unsigned int) arr_5 [i_0 - 3])))));
        }
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_26 = ((/* implicit */int) (+(((long long int) (-(0U))))));
            arr_22 [(signed char)3] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (~(4294967293U)))), (min((min((arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])))), (min((((/* implicit */long long int) arr_1 [i_0])), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 21; i_7 += 3) 
            {
                for (signed char i_8 = 3; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_27 *= min((((-1LL) / (((/* implicit */long long int) arr_7 [i_6] [i_6] [i_6])))), (((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) (signed char)-1)))) + (2147483647))) << ((((+(((/* implicit */int) (signed char)15)))) - (15)))))));
                        arr_30 [i_0] [4LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((((~(((arr_13 [i_0]) ? (arr_4 [(signed char)6] [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))))) + (9223372036854775807LL))) >> (((/* implicit */int) min(((short)2783), (((/* implicit */short) (signed char)42)))))));
                        var_28 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_23 [i_7 - 1])) / ((-(((/* implicit */int) (signed char)12))))))));
                        var_29 = ((/* implicit */short) arr_9 [i_0] [i_0 - 3] [i_7 - 1] [14U] [i_8 + 1]);
                        arr_31 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((196608U) / ((~(0U))))) : (((/* implicit */unsigned int) (+(arr_29 [i_0 - 2] [i_7 - 2] [i_8 - 2]))))));
                    }
                } 
            } 
            arr_32 [20] [20] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (+(4294967295U)))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(_Bool)1])) ? (arr_3 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))))), (((/* implicit */long long int) (-(-1))))));
            var_30 = ((/* implicit */_Bool) max((min((2147483647), (((/* implicit */int) (signed char)-47)))), (((/* implicit */int) (signed char)-1))));
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_31 = ((/* implicit */short) max(((~(((/* implicit */int) (short)-15385)))), (max((((/* implicit */int) arr_1 [i_0])), (arr_29 [i_0 + 1] [i_0 - 1] [i_0 - 3])))));
                arr_36 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((+(-536870912)))));
                var_32 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) 4294967295U)) : (0LL)))) ? (((/* implicit */int) min(((signed char)-1), ((signed char)6)))) : ((-(((/* implicit */int) (signed char)127)))))) + (2147483647))) >> (((((((arr_25 [7] [7] [7]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))))) * (((/* implicit */long long int) (+(((/* implicit */int) (signed char)4))))))) + (2603832542656274894LL)))))) : (((/* implicit */short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) 4294967295U)) : (0LL)))) ? (((/* implicit */int) min(((signed char)-1), ((signed char)6)))) : ((-(((/* implicit */int) (signed char)127)))))) + (2147483647))) >> (((((((((arr_25 [7] [7] [7]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))))) * (((/* implicit */long long int) (+(((/* implicit */int) (signed char)4))))))) + (2603832542656274894LL))) - (5207665085312549637LL))))));
            }
            for (long long int i_10 = 1; i_10 < 18; i_10 += 4) 
            {
                arr_39 [i_6] [i_0] [i_0] [i_6] |= arr_6 [i_0] [i_0] [i_0] [(signed char)20];
                arr_40 [i_6] |= ((/* implicit */short) (-9223372036854775807LL - 1LL));
                var_33 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2147483647)) ? (arr_29 [i_6] [i_10 + 4] [i_10 + 4]) : (146684414))), ((+((~(arr_33 [i_0 - 1] [20] [20] [i_0 - 1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    arr_43 [i_0] [i_0] [i_10 + 3] = ((/* implicit */long long int) arr_33 [15] [15] [15] [15]);
                    arr_44 [i_0] [i_0] [i_6] [i_0] [i_6] [i_6] = ((/* implicit */short) ((arr_4 [i_10 + 2] [i_10 + 4] [i_10 + 3]) / (((/* implicit */long long int) 536870912))));
                    var_34 -= ((/* implicit */unsigned int) (signed char)-7);
                    var_35 -= ((/* implicit */unsigned int) (short)-1);
                    arr_45 [i_6] [20U] [6LL] [6LL] [i_6] |= ((/* implicit */signed char) arr_27 [i_0 + 1] [i_0 + 1]);
                }
                var_36 = ((/* implicit */unsigned int) (-(-1073741824)));
            }
            for (int i_12 = 2; i_12 < 19; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        {
                            arr_54 [i_0] = ((/* implicit */int) (signed char)-5);
                            var_37 = (+(arr_34 [i_0] [i_0] [i_12 + 2] [i_12]));
                            arr_55 [i_0] = ((/* implicit */_Bool) (-(min((arr_42 [i_0 - 2] [i_12 + 3] [i_0]), (((/* implicit */unsigned int) (signed char)-120))))));
                            var_38 = ((/* implicit */long long int) (short)32767);
                        }
                    } 
                } 
                arr_56 [i_12] |= ((signed char) ((((/* implicit */int) ((((/* implicit */int) arr_8 [(signed char)6] [(signed char)6] [(signed char)12] [(signed char)12])) != (((/* implicit */int) (short)32767))))) - (((/* implicit */int) (short)60))));
                var_39 = ((/* implicit */int) -8LL);
                /* LoopNest 2 */
                for (signed char i_15 = 1; i_15 < 18; i_15 += 1) 
                {
                    for (short i_16 = 2; i_16 < 20; i_16 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-4))))), (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26)))))));
                            var_41 = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [(short)10]);
                        }
                    } 
                } 
                var_42 += ((/* implicit */unsigned int) arr_51 [i_0] [i_0] [i_0] [i_0 - 3] [i_12]);
            }
        }
    }
    for (long long int i_17 = 1; i_17 < 13; i_17 += 4) 
    {
        arr_65 [i_17] [i_17 + 1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_60 [i_17] [i_17] [i_17]))))));
        var_43 = ((/* implicit */int) (short)-1);
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                {
                    arr_70 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(38895266U)))) ? (((/* implicit */int) (signed char)3)) : (((((/* implicit */int) arr_0 [14U] [i_17])) | (((/* implicit */int) arr_0 [i_17] [i_17]))))));
                    var_44 = ((/* implicit */unsigned int) ((_Bool) (signed char)-15));
                }
            } 
        } 
    }
    var_45 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1))));
}
