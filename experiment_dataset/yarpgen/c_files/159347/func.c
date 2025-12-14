/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159347
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (int i_4 = 3; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */int) var_5);
                            arr_12 [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((min((arr_8 [i_0] [i_0] [i_0] [i_0] [i_4 - 1]), (((/* implicit */unsigned int) ((unsigned short) arr_10 [i_1] [(short)14] [i_3] [i_4]))))) + (arr_7 [(unsigned short)12] [i_1 + 2] [i_1] [i_1])));
                            arr_13 [i_1] &= ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_1] [i_0 - 1] [i_0 - 1]));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(signed char)12] [i_0] [i_1] [18]))) : (min((arr_2 [i_0]), (arr_2 [i_0])))));
        }
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 19; i_5 += 1) 
        {
            var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_7 [i_0 + 2] [i_5] [i_0 - 1] [i_5]))))));
            var_12 |= ((/* implicit */int) var_8);
            var_13 = ((/* implicit */unsigned int) (short)32767);
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    {
                        var_14 = ((int) (signed char)32);
                        arr_22 [i_0] [i_5] [i_5] [i_5] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5 - 2] [i_5 - 2] [i_5] [i_0 - 1])) ? (arr_20 [i_0] [i_5 + 1] [i_0 - 1] [i_7 - 1] [i_0 - 1] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))));
                        var_15 = ((/* implicit */int) ((unsigned short) arr_8 [i_7 - 2] [i_7 - 2] [i_0] [i_7] [i_0]));
                        arr_23 [i_0 - 1] [i_0 - 1] [i_0] [i_7] = ((/* implicit */short) (signed char)-87);
                        arr_24 [i_0] [i_0] [(signed char)18] [10U] [i_7 - 1] [14U] = ((/* implicit */int) ((long long int) arr_0 [i_5 - 1] [i_0 + 2]));
                    }
                } 
            } 
            var_16 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((4503591037435904LL) | (((/* implicit */long long int) var_1)))))));
        }
        var_17 = ((/* implicit */unsigned int) var_0);
        var_18 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (2147483647U)));
    }
    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) 527610063U))))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_8))))));
}
