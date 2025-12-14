/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158605
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_10);
        var_14 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_1 [i_0 - 3])) & (((/* implicit */int) min((arr_1 [i_0]), (arr_0 [i_0 - 1])))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_11))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_16 = ((2343752548U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((2343752571U), (2343752571U))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (unsigned char)0))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((int) ((unsigned char) max((17ULL), (((/* implicit */unsigned long long int) var_12))))));
        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (1951214752U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (2343752554U) : (arr_3 [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 3]))))))) : (2343752548U)));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_4] [i_4] [i_6] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_27 [i_4] [i_5] [i_4])))) ^ (arr_21 [i_4 + 1] [i_6 - 1])));
                        var_21 = ((/* implicit */int) 1951214752U);
                        arr_29 [10ULL] [i_5] [i_5] [10ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            arr_35 [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) 1951214724U);
                            var_22 = ((((/* implicit */int) var_10)) == (((((/* implicit */int) (unsigned char)200)) & (((/* implicit */int) (_Bool)1)))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_5 [i_8] [i_8]))))) ^ (((/* implicit */int) ((_Bool) arr_11 [i_4]))))))));
                            var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4 - 2] [i_4 - 1] [i_4 - 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4 - 2] [i_4 - 1] [i_4 + 1])))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 1]))) + (arr_30 [i_4] [i_5] [i_9] [i_8])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((arr_23 [i_4 - 1]) % (((/* implicit */int) arr_4 [i_4 - 2] [i_6 + 1])))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((2945301461U) + (2343752543U))))));
                        }
                    }
                    arr_38 [i_4] [i_4] [4LL] = ((/* implicit */_Bool) (((((_Bool)1) ? (2343752555U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))))) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (int i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        arr_50 [i_4] [i_11] [i_12] [i_13] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_4 - 2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (6186388364148941553ULL)))) : (((/* implicit */int) ((_Bool) var_2)))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1951214719U)) ? (var_0) : (((/* implicit */unsigned int) arr_47 [i_4 - 1]))))) ? ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_13] [i_13])) : (((/* implicit */int) var_2))))));
                        var_29 = ((/* implicit */_Bool) 1874350304U);
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_4 - 1] [i_13] [i_4 - 1] [i_13])) && (((/* implicit */_Bool) arr_17 [i_4 + 1]))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) ((arr_7 [(signed char)1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 - 2] [i_4])))))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min((var_8), (((/* implicit */unsigned int) var_13))))))) == (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1951214741U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2945301461U))))))));
    var_33 = ((/* implicit */_Bool) var_8);
    var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))) * (((/* implicit */int) var_3))));
    var_35 = var_4;
}
