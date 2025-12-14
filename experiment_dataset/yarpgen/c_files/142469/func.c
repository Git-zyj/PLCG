/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142469
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)105))))))) ? (((/* implicit */long long int) (+(1849778710)))) : (min((((/* implicit */long long int) ((unsigned int) 1995379227U))), (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) var_8))))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [(unsigned char)7] [i_1]);
                    arr_8 [i_0 + 2] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 6983426212650642024ULL))))), (((((/* implicit */_Bool) max((521780364920169169ULL), (((/* implicit */unsigned long long int) (signed char)71))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_14))))));
                    var_18 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((var_10) || (((/* implicit */_Bool) var_5))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (short)512))))) ^ (((/* implicit */int) arr_15 [(unsigned char)14] [i_3] [i_0] [i_0])))))))));
                    arr_16 [i_0] [i_0] [i_3] [3U] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */int) ((signed char) -67108864))), (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (signed char)0)))))));
                }
            } 
        } 
        arr_17 [i_0] = ((((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (-3483807215371024827LL))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (-(var_11)));
        arr_21 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-21392)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) : (var_8)));
    }
}
