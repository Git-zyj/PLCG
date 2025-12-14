/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100945
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)81)))), (((/* implicit */int) (unsigned short)65535)))))));
                    arr_9 [(short)1] [i_2] [(short)1] [(short)1] = ((/* implicit */_Bool) (unsigned short)65535);
                    var_18 = ((/* implicit */short) (~(12654827717052204543ULL)));
                    arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) 3091722024U);
                        var_20 = ((/* implicit */unsigned short) (+((((_Bool)0) ? (3617362255158996401LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_3 - 1] [i_3 - 2] [i_3])))))));
                        var_21 = ((/* implicit */unsigned int) ((long long int) ((unsigned short) 12654827717052204556ULL)));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((_Bool) (signed char)84));
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -2932459250206404587LL)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1])))) != (((/* implicit */int) ((((/* implicit */int) (short)-32744)) < (((/* implicit */int) (_Bool)1))))))))) ^ (min((5791916356657347077ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2138845336514095547LL))))))))))));
                var_24 = ((/* implicit */unsigned short) (-((+((-(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
