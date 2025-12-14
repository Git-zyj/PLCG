/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119948
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << ((((((((+(min((((/* implicit */long long int) (signed char)117)), ((-9223372036854775807LL - 1LL)))))) - (-9223372036854775803LL))) + (32LL))) - (6LL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) arr_2 [i_0 - 2]);
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [1LL] [(_Bool)0] [i_0] &= ((_Bool) ((signed char) arr_6 [4U] [4U] [i_2] [i_2]));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_2 [i_2]))));
                }
            } 
        } 
        var_13 = ((/* implicit */short) ((((((long long int) 14034783898044816615ULL)) + (9223372036854775807LL))) >> (((/* implicit */int) min(((_Bool)1), (arr_0 [i_0 - 1] [i_0 + 2]))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_14 = ((min((((unsigned long long int) 8070450532247928832ULL)), (1944049304164210673ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))));
                        arr_18 [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) * (((/* implicit */int) (signed char)39))));
                        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) (~(arr_16 [i_3]))))), ((~(arr_9 [i_3 - 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_7 = 4; i_7 < 18; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (unsigned char i_9 = 2; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)6))));
                        arr_27 [i_3] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_15 [(unsigned char)16] [i_3] [i_7] [i_7 - 2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_8]))) : (13893758203410648655ULL))))))));
                    }
                } 
            } 
        } 
        arr_28 [i_3] [i_3] = ((/* implicit */_Bool) 1ULL);
    }
}
