/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118791
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 = var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) (signed char)-1);
                var_17 |= ((/* implicit */unsigned char) (+(max((((/* implicit */int) arr_6 [i_0] [(signed char)8])), (((((/* implicit */int) (signed char)-18)) + (arr_2 [i_0 + 1] [i_1])))))));
                var_18 = ((/* implicit */unsigned long long int) var_7);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                                var_20 += ((/* implicit */short) (-(var_3)));
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_4 - 3]) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_4 - 4] [i_4 - 2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned long long int) arr_6 [i_5] [10]);
                                var_23 = ((/* implicit */unsigned short) ((signed char) var_6));
                                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 + 1]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                                var_25 *= ((/* implicit */short) (((-(arr_8 [i_6] [i_0 + 1] [i_0 + 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_2))) >> ((((~(var_11))) - (5203570289432238157LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_10 = 3; i_10 < 18; i_10 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) 4294967291U);
                    arr_31 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */int) arr_21 [(_Bool)1]);
                    var_28 = (+(var_6));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) var_9)) != ((~(var_3))))))));
                    /* LoopSeq 2 */
                    for (int i_11 = 2; i_11 < 18; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-7))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8] [i_10 + 2] [i_10] [i_10 + 1] [i_11 - 1] [1LL])) ? (var_5) : (((/* implicit */int) arr_28 [i_9] [i_9] [i_10 - 1]))));
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */int) var_12);
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) 3937714076070177714ULL))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            var_34 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_36 [i_13] [i_13] [i_10] [i_11] [i_11] [i_13])) ? (((/* implicit */int) var_10)) : (var_5)))));
                            arr_40 [i_11] [i_11] [i_11] [i_11] [10ULL] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_13))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_8] [i_8] [i_9] [i_10] [i_10 - 2] [i_11] [(unsigned char)16]))) - (arr_21 [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        }
                        var_36 = ((/* implicit */short) (+(((/* implicit */int) (signed char)12))));
                    }
                    for (long long int i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3937714076070177718ULL)) ? (var_6) : (var_6)));
                        var_38 |= ((/* implicit */_Bool) var_11);
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 19; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)15)))) >= (((/* implicit */int) (((-(var_11))) >= (((/* implicit */long long int) ((/* implicit */int) (short)32739))))))));
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_29 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1]))))))));
                            var_41 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
                arr_50 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_46 [i_8] [i_9] [i_8] [i_9])))) ? (((/* implicit */long long int) ((int) ((((/* implicit */int) arr_20 [i_8])) % (((/* implicit */int) arr_45 [(unsigned short)0] [(unsigned short)0] [i_8])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_8] [i_8] [i_8]))))) ? (arr_21 [i_8]) : ((-(-10LL)))))));
            }
        } 
    } 
}
