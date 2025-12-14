/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161368
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
    var_17 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) 21U)) ? (14082156394409137706ULL) : (((/* implicit */unsigned long long int) -1626530530652262503LL))));
                    arr_7 [i_2] [9ULL] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) && (((/* implicit */_Bool) ((unsigned int) 6333814312972935644LL)))))), (((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */_Bool) var_11);
                                arr_13 [i_4] = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned char) 1619539507))), (min((min((((/* implicit */unsigned int) arr_3 [i_0])), (1842116689U))), (((/* implicit */unsigned int) ((unsigned char) (short)24952)))))));
                                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1] [i_1])) : ((+(((/* implicit */int) (signed char)-70)))))), (((((/* implicit */_Bool) arr_4 [3ULL] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */short) (signed char)72)), (var_12))))))));
                                var_21 = ((/* implicit */unsigned int) ((unsigned short) arr_11 [i_4] [(signed char)5] [i_3] [i_2] [2LL] [2LL]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) arr_20 [i_7]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 -= (+(min((((/* implicit */int) arr_25 [i_5 - 1] [i_7 - 1] [i_7 - 1] [14U] [i_7 - 1] [(short)5])), ((+(((/* implicit */int) var_12)))))));
                                arr_28 [i_5] [i_6] [i_7] [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [3U] [i_9])), (((unsigned long long int) (signed char)-45))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) : (((((/* implicit */_Bool) (signed char)-45)) ? (6333814312972935644LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = (short)-24952;
}
