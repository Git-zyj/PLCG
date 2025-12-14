/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103616
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
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)54)), ((unsigned short)13291)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((signed char) 32767));
        arr_5 [i_0] = ((unsigned int) (-((-(702509586U)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) % (arr_7 [i_1])))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_12 = 2147483647;
            var_13 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5572690770136788328LL)) || (((/* implicit */_Bool) (short)-24896)))) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_21 [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_12 [i_1] [i_3])) != (2147483634))) ? (arr_20 [i_3] [i_3] [i_5]) : (((/* implicit */long long int) var_6))));
                        arr_22 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483647)) >= (arr_7 [i_1])));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 8; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */long long int) arr_15 [13U] [(signed char)12] [i_6])) & (arr_26 [i_6] [i_7]))))))));
                var_15 ^= ((/* implicit */_Bool) max((((/* implicit */short) arr_14 [i_6] [i_7])), (var_3)));
                /* LoopSeq 1 */
                for (signed char i_8 = 3; i_8 < 10; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)13)) ? (5572690770136788352LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_7))));
                        var_18 -= ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_6] [(unsigned short)6] [i_8] [i_9])) / (((/* implicit */int) var_3))))) - (var_8));
                        var_19 ^= ((/* implicit */short) ((var_8) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (3218990361364661787ULL)))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_5))));
                        arr_36 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) 968675512U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12904800838670397726ULL)) ? (var_7) : (((/* implicit */unsigned long long int) 2147483647))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) arr_28 [i_7] [i_6])) : (((/* implicit */int) var_9)))))))));
                        var_21 ^= ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (unsigned short)4092)), (6581603140213481885LL)))));
                        arr_37 [i_6] = ((/* implicit */_Bool) (-(max((arr_24 [i_6 - 2]), (arr_24 [i_6 + 2])))));
                    }
                    arr_38 [i_6] [i_7] [i_7] = ((min((-2147483626), (((/* implicit */int) (_Bool)0)))) - ((-(((/* implicit */int) (short)16202)))));
                }
            }
        } 
    } 
}
