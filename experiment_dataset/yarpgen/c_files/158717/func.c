/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158717
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6069188287561106629LL)) || (((/* implicit */_Bool) ((unsigned short) ((4031777274U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [2ULL] [2ULL] [(unsigned short)11] = ((/* implicit */unsigned char) var_11);
                arr_6 [i_1] = ((_Bool) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)47))));
            }
        } 
    } 
    var_14 *= ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) <= (((/* implicit */int) ((unsigned short) 0LL)))))) != (((/* implicit */int) var_8))));
    var_15 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (short i_2 = 1; i_2 < 19; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_20 [i_4] [i_3] [6ULL] = ((/* implicit */short) max((((unsigned long long int) (unsigned char)76)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) / (var_12)))))))));
                        arr_21 [i_4] [4LL] = ((((/* implicit */int) var_10)) >= (((/* implicit */int) ((1118233926U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5506)))))));
                        arr_22 [i_5] [i_3] [i_4] &= ((/* implicit */_Bool) var_0);
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)47)) < (((/* implicit */int) (signed char)-64)))))) : (((((/* implicit */_Bool) (short)10084)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (var_2)))));
                    }
                } 
            } 
        } 
        arr_23 [i_2] = ((/* implicit */_Bool) var_5);
        arr_24 [i_2] [i_2 - 1] &= ((/* implicit */unsigned short) min((((long long int) 11097655908984936681ULL)), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)96)), (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)25208)) : (((/* implicit */int) var_10))))))))));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (7349088164724614942ULL))))));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (short)0))))) : (((/* implicit */int) (unsigned short)5))));
        arr_27 [i_6] = ((/* implicit */long long int) ((var_7) << (((((((/* implicit */int) (unsigned short)40328)) / (((/* implicit */int) var_8)))) - (5)))));
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_1)))))));
            var_20 = ((/* implicit */short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_1))));
            arr_31 [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) var_10)) : (var_7))) : (((/* implicit */int) (unsigned short)65488))));
            /* LoopNest 3 */
            for (short i_8 = 2; i_8 < 19; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13624))))) ? (((long long int) var_0)) : (((/* implicit */long long int) var_7))));
                            arr_38 [i_6] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */long long int) ((unsigned short) var_8));
                        }
                    } 
                } 
            } 
            var_22 = ((((/* implicit */_Bool) 11652079805863335441ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
        }
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 3; i_12 < 18; i_12 += 2) 
            {
                for (short i_13 = 2; i_13 < 17; i_13 += 4) 
                {
                    {
                        arr_49 [i_11] [i_13] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)0))))));
                            arr_53 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [(unsigned short)18] [i_6 - 1] = ((/* implicit */unsigned long long int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        arr_54 [(unsigned char)18] [i_11] [14LL] [17LL] = (!(((/* implicit */_Bool) ((long long int) 0ULL))));
                        arr_55 [i_6] [i_6 + 1] [(signed char)8] [i_6 - 1] [i_6 - 1] [18U] = ((/* implicit */short) (unsigned short)0);
                    }
                } 
            } 
            var_24 += ((/* implicit */short) var_9);
            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (short)29418))));
        }
    }
    for (short i_15 = 1; i_15 < 19; i_15 += 4) /* same iter space */
    {
        var_26 ^= ((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */int) ((unsigned short) var_8)))));
        var_27 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) * (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    }
}
