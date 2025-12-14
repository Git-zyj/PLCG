/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125966
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
    var_16 = ((/* implicit */unsigned short) ((7736505941569271080ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) var_9)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) ((signed char) arr_2 [i_1] [i_0]))))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) ^ (arr_0 [i_0])))) ? (((arr_5 [i_1 - 3]) % (((/* implicit */unsigned long long int) ((var_5) & (var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 20; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 19; i_5 += 2) 
        {
            for (short i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_21 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-5308471829650553044LL)))) ? (arr_15 [i_6 + 2] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_20 = ((var_13) ^ ((-(var_1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (-(var_2)));
                                var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_7] [i_6 - 1]))));
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */int) (unsigned short)21162);
                                var_23 = ((/* implicit */unsigned short) ((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                    arr_28 [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) var_9);
                    arr_29 [i_6] = arr_17 [i_4] [i_5];
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 2; i_10 < 18; i_10 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4 - 3] [i_10] [i_10])) ? (((/* implicit */int) arr_18 [i_4] [i_4 - 1] [i_10] [i_10])) : (((/* implicit */int) arr_18 [i_4] [i_4 - 1] [i_9] [i_9]))));
                    arr_35 [i_9] = ((/* implicit */int) (+((+(5308471829650553044LL)))));
                    arr_36 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((short) arr_23 [i_10] [i_10] [i_9] [i_10]));
                }
            } 
        } 
        arr_37 [i_4] [i_4] = ((/* implicit */_Bool) (signed char)40);
    }
    var_25 = ((/* implicit */unsigned short) (!(((_Bool) ((((-5308471829650553044LL) + (9223372036854775807LL))) << (((7140664680124463546LL) - (7140664680124463546LL))))))));
}
