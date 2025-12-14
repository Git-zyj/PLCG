/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152461
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max(((short)-1), (((/* implicit */short) (signed char)-79))))), (((((/* implicit */_Bool) 1948295055U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)123)))) : (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) : (8856586343304216885ULL)))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) ((unsigned short) 2346672241U)))))) ? ((-(max((3660288260U), (((/* implicit */unsigned int) 352108562)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -740889594))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) var_9)) : (var_2)))));
                        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_2)))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (-356077266))) : ((~(var_9)))));
                        var_20 = ((/* implicit */int) (~(8437525471508585657LL)));
                        var_21 = ((/* implicit */int) ((unsigned short) var_1));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2] [i_4])) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_4])) : (((/* implicit */int) var_11)))))));
                        var_22 ^= (+((+(((/* implicit */int) var_14)))));
                        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1] [i_2] [2ULL])) : (352108562)));
                    }
                    var_24 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (unsigned short)56444)))));
                }
                var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) (unsigned char)131))), (max((2389646018U), (((/* implicit */unsigned int) 352108557))))));
                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))) : (-7453791075525505975LL)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)176)) : ((+(((/* implicit */int) (short)16383))))))));
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (0U)));
                var_29 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5 + 1])))))));
                var_30 = ((/* implicit */signed char) (+((-(-6514021783140323814LL)))));
            }
        } 
    } 
}
