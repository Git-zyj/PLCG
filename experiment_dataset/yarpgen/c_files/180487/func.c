/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180487
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
    var_11 ^= ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 1] = ((/* implicit */short) ((((arr_4 [i_2 - 1]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))) ? ((~(var_5))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)6)) <= (((/* implicit */int) var_1)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((unsigned short)6), (((/* implicit */unsigned short) (short)1416))))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */signed char) var_10);
                        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_6))))) ? (max((((/* implicit */unsigned int) (short)6725)), (1474427310U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((var_10) - (1338158596058465591LL)))))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) var_8))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_2)))))))));
                        var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) (short)-31177)), (1869977699978920756LL)));
                        arr_12 [i_0] [i_1] [i_1] [i_0] = var_1;
                    }
                    /* LoopSeq 2 */
                    for (short i_4 = 4; i_4 < 24; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) (+(((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65516))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31761))) + ((-9223372036854775807LL - 1LL)))), (min((-1869977699978920756LL), (((/* implicit */long long int) (signed char)103))))))));
                        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_14 [i_1 - 1] [i_1 - 1] [i_4] [i_4])))) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_7)), (var_0))))) - (((1869977699978920756LL) - (var_5))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) ? (min((-2896669992305379051LL), (((/* implicit */long long int) (unsigned short)16)))) : (max((arr_13 [i_0] [i_0] [i_1] [i_1 + 1] [i_2] [i_0]), (((/* implicit */long long int) (unsigned short)65515))))))));
                        var_17 ^= ((/* implicit */short) var_2);
                        var_18 = ((/* implicit */signed char) -890868497620135540LL);
                        var_19 = ((/* implicit */short) var_9);
                    }
                    for (short i_5 = 4; i_5 < 24; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_3))))));
                        arr_18 [i_0] [i_1] [i_5] &= ((/* implicit */short) min((var_9), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (arr_4 [i_5 - 1]))))));
                        var_20 = (-((~(((var_1) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                        var_21 += ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (unsigned char)135)), (arr_2 [i_5 - 4] [i_5]))), (((/* implicit */long long int) (signed char)-101))));
                    }
                    var_22 += ((/* implicit */short) (((~(7897319372960987547LL))) % (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_2 - 1] [i_1] [i_1] [i_1] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */_Bool) var_9);
}
