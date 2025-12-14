/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122291
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = min((arr_2 [i_0]), (((/* implicit */signed char) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_1 [18ULL]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_11)) : (-582849153)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
            arr_5 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)32759))));
        }
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_11 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((((((/* implicit */int) (signed char)-123)) + (2147483647))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    arr_12 [11] [i_2] [i_3] [11] = ((/* implicit */int) (!(((/* implicit */_Bool) min((387222816731215336ULL), (var_10))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_16 [i_0] [(unsigned char)14] [i_3] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3 + 2] [i_4]))) - (var_3))) == (((/* implicit */unsigned long long int) (~(-582849153))))))), (var_7)));
                        arr_17 [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((var_3) == (var_3)))), (((((/* implicit */_Bool) arr_9 [i_4] [i_3 + 1] [i_2])) ? (arr_15 [i_0] [i_3 + 3] [i_3 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        arr_18 [(signed char)13] [19U] [i_3] [i_3] = ((/* implicit */int) (+(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) - (var_3))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)57207)))))))));
                        arr_19 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (signed char)-126))));
                        arr_20 [9LL] [i_3] = ((/* implicit */int) arr_8 [i_0] [i_2]);
                    }
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1005069596))))) == (((/* implicit */int) (unsigned char)103)))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) var_9);
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) arr_13 [i_6]);
        }
        arr_29 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))));
    }
    var_15 = ((/* implicit */signed char) ((max((1211712199), (((/* implicit */int) var_8)))) == (((((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) * (((/* implicit */int) var_11))))));
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) var_0)))))));
}
