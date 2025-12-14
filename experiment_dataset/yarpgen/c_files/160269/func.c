/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160269
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned short) var_6);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            var_15 += ((/* implicit */signed char) 1925629686U);
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_11))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_13 [i_0] [i_1] [i_2] [i_5] [i_2 - 2] [i_2 + 2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : ((+(arr_13 [i_0] [(signed char)6] [i_2] [i_3] [i_2 - 1] [i_2 - 2])))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_5])) ? (((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_1] [i_0] [(signed char)14] [i_1]))) : (((/* implicit */int) ((signed char) ((2369337609U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                            arr_19 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) min(((short)-8962), (((/* implicit */short) (unsigned char)128))));
                            var_19 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((max((arr_2 [i_1]), (arr_16 [(unsigned short)6] [i_0] [i_1] [i_2] [i_3] [i_5] [i_5]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_5])) << (((/* implicit */int) (signed char)12))))))))));
                        }
                        arr_20 [4ULL] [(signed char)0] [i_0] [i_3] [(unsigned short)6] [i_3] = ((/* implicit */int) (!((!(var_6)))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), ((+(4029661860678002589LL)))));
        arr_23 [i_6] = ((/* implicit */signed char) var_2);
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2369337609U))))))))));
    }
    for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) (_Bool)0))))));
        arr_26 [i_7 + 1] = ((/* implicit */unsigned int) max(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_7]))) : (var_0))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((18446744073709551615ULL) & (15551407627910914843ULL)))))))));
        var_23 = ((/* implicit */unsigned char) (short)31411);
    }
    var_24 = ((/* implicit */unsigned char) min((var_9), (((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3580))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    var_25 = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
}
