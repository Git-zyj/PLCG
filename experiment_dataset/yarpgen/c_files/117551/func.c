/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117551
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
    var_18 = var_6;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_2] [i_1 + 1])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)4)))))));
                            arr_11 [i_3] = ((/* implicit */long long int) ((int) -3846958952588284961LL));
                            var_20 = var_17;
                            var_21 = ((/* implicit */int) max((var_21), (arr_5 [i_0] [i_3 + 1])));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 68719476735LL)) ? (-68719476735LL) : (-68719476742LL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) ((unsigned long long int) 2097136))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
        }
        var_24 = (+(((/* implicit */int) ((((/* implicit */_Bool) 3814389663920000863LL)) && (((/* implicit */_Bool) 68719476741LL))))));
    }
    for (long long int i_5 = 3; i_5 < 8; i_5 += 2) 
    {
        var_25 = ((((68719476735LL) == (arr_2 [i_5 - 3]))) ? ((+(8))) : (arr_1 [i_5 + 1] [i_5 + 2]));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_26 = ((max((var_12), (((/* implicit */int) arr_20 [i_6])))) - (((((/* implicit */_Bool) arr_13 [i_5 - 3])) ? (((/* implicit */int) (short)-16032)) : ((-2147483647 - 1)))));
                    var_27 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_23 [i_5] [9U] = ((/* implicit */unsigned char) -12);
            var_28 = (((+(-1))) / (((int) max((var_5), (((/* implicit */long long int) var_10))))));
            arr_24 [i_5] [i_5 - 3] [i_5] &= (~(2142132032));
        }
    }
    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        arr_29 [i_9] = ((/* implicit */unsigned char) arr_25 [i_9]);
        arr_30 [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned int) (+(((int) 9090403619406656169LL)))));
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (arr_28 [i_9] [i_9])))) ? (((((/* implicit */int) ((var_13) > (-1451450918)))) >> (((((/* implicit */int) (unsigned char)255)) - (253))))) : (((((/* implicit */_Bool) ((long long int) -12))) ? (var_12) : (-25)))));
    }
}
