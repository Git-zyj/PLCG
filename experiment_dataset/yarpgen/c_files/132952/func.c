/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132952
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
    var_19 = ((/* implicit */unsigned char) (((((((_Bool)1) || (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7665770957705137042LL)))))) || (((/* implicit */_Bool) max((((unsigned char) 2147483646)), (((/* implicit */unsigned char) var_7)))))));
    var_20 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (7665770957705137054LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) var_3)) : (var_11)))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) var_7);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [0LL] [i_1] [0LL] [i_3] [i_0] = ((/* implicit */short) (~((-(((/* implicit */int) var_2))))));
                                var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((-7665770957705137042LL), (15LL)))))) ? (((/* implicit */long long int) (+(arr_9 [i_1] [i_0] [i_0])))) : (16LL)));
                                arr_14 [i_0 + 3] [i_1] [i_2] [(signed char)11] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) 7665770957705137035LL));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        var_23 = (!(((/* implicit */_Bool) var_4)));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0] [0LL] [(short)7] [i_0])) : (((/* implicit */int) var_7))))) ? (var_10) : (((/* implicit */long long int) (+(arr_16 [i_0] [i_1] [i_0]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_15 [i_0 + 1] [i_0]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            arr_21 [i_0] [i_0] [(short)10] [(short)10] [i_7] = ((/* implicit */int) ((((/* implicit */int) arr_11 [(unsigned short)10] [i_0 + 3] [i_2 - 3] [i_7 - 1] [10] [(unsigned char)1] [i_7 + 3])) != (((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 1] [i_2 - 1] [i_7 + 4] [(unsigned short)0] [7LL] [i_2]))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((6968525690673681080LL) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0] [i_0]))))))));
                            var_27 = ((/* implicit */signed char) var_17);
                        }
                    }
                    arr_22 [i_0] = ((/* implicit */unsigned short) ((min((6968525690673681102LL), (((arr_20 [i_0 + 4] [i_0] [i_1] [i_2] [i_0]) ? (var_10) : (7665770957705137049LL))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 361941487)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) min(((short)7050), (((/* implicit */short) arr_10 [(signed char)3] [(unsigned char)12] [11] [(_Bool)1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)11808))))))))));
                    arr_23 [4U] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-3LL));
                }
            } 
        } 
    }
    for (int i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_8 + 1]) || (((/* implicit */_Bool) 3LL)))) ? (-1723163198) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_8] [i_8] [8U])) && (((/* implicit */_Bool) var_3)))))))) && (((/* implicit */_Bool) (signed char)-15)))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (unsigned short i_10 = 2; i_10 < 12; i_10 += 3) 
            {
                {
                    var_29 &= ((/* implicit */unsigned char) (short)-32112);
                    arr_33 [i_8] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)32113)) % (((int) -6968525690673681053LL)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (-7665770957705137034LL))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_30 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((-39LL), (((/* implicit */long long int) var_15))))))))));
            var_31 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                for (int i_14 = 1; i_14 < 10; i_14 += 1) 
                {
                    for (unsigned short i_15 = 1; i_15 < 12; i_15 += 2) 
                    {
                        {
                            var_32 ^= var_0;
                            arr_50 [i_8] [i_13] [6] [i_14] [i_15] &= ((/* implicit */unsigned int) arr_35 [i_15 + 1] [i_14 - 1]);
                            var_33 = ((/* implicit */unsigned int) (signed char)0);
                            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_29 [i_8] [i_8] [11LL]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */_Bool) arr_48 [i_8] [i_12] [(unsigned char)3] [i_8] [i_8]);
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) arr_1 [i_8] [i_12]))));
        }
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (min((max((((/* implicit */unsigned long long int) var_2)), (11652819918864969305ULL))), (((/* implicit */unsigned long long int) 6968525690673681066LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_5)) : (3901933863U)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
}
