/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152736
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-(((/* implicit */int) ((3568775578262448545LL) == (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                            var_13 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_2 [7LL] [i_1] [i_2]))))), (18446744073709551615ULL))));
                        }
                    } 
                } 
                arr_10 [(short)10] [i_0 + 1] [i_1] = ((((((/* implicit */_Bool) ((unsigned long long int) -549755813888LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) -549755813883LL))))))) ? (-3568775578262448525LL) : (((/* implicit */long long int) 16352U)));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_3))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) / (var_5)))) ? (((/* implicit */int) max((arr_2 [i_0 - 2] [i_1] [i_1 + 2]), (arr_2 [i_0 + 1] [i_1] [i_1 + 1])))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0 + 2] [i_0 + 1])))));
                arr_11 [i_1] = ((/* implicit */unsigned char) arr_1 [i_1] [i_0]);
            }
        } 
    } 
    var_16 -= ((/* implicit */signed char) max((0ULL), (((/* implicit */unsigned long long int) (signed char)10))));
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)8866)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11868))) : (var_7)))))) == (min((min((((/* implicit */unsigned long long int) var_6)), (6201128029559337225ULL))), (((/* implicit */unsigned long long int) ((_Bool) 6201128029559337233ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        arr_16 [(unsigned short)4] = ((/* implicit */long long int) ((unsigned int) (+(262143))));
        var_18 = ((/* implicit */_Bool) (~(arr_14 [i_4] [i_4 + 3])));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4]))))) ? (arr_15 [i_4] [i_4 + 2]) : (var_5)));
        var_20 ^= ((/* implicit */unsigned short) (+(arr_15 [i_4] [i_4 + 3])));
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) var_9);
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((arr_19 [i_5]), (4294950932U))))));
                    arr_25 [i_5] = ((/* implicit */unsigned char) min(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_20 [i_6 + 1])))));
                }
            } 
        } 
    }
}
