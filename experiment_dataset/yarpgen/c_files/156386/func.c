/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156386
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
    var_11 = ((/* implicit */_Bool) min((963050737U), (((/* implicit */unsigned int) -899749325))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [7] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)11] [i_0] [i_0]))) % (11458467536061344875ULL))) == (((/* implicit */unsigned long long int) arr_5 [i_0] [9LL] [9LL] [9LL])))))));
                    arr_10 [i_0] [i_1] [11ULL] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)45176))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) ^ (arr_5 [1LL] [i_2] [1LL] [(unsigned char)14]))) : (((/* implicit */long long int) 337923396U))))) & ((~(arr_0 [i_4 - 2])))));
                                var_12 ^= ((/* implicit */unsigned short) arr_3 [(unsigned char)0] [i_0] [i_0]);
                                var_13 = ((/* implicit */unsigned long long int) ((signed char) arr_6 [3U] [(short)1] [i_0] [i_0]));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [(short)15] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2))))) ? (arr_14 [i_3] [i_3] [i_1] [(short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [10] [10] [i_2] [14LL]))))));
                            }
                        } 
                    } 
                    arr_19 [10ULL] [10ULL] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-2048)), ((~(-1385563056)))));
                }
            } 
        } 
    } 
}
