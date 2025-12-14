/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188908
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) (unsigned char)126);
                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -413589383)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5291566787110084208ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (0ULL))))) < (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-32753)))))))));
            }
        } 
    } 
    var_15 = var_9;
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) min((max((arr_7 [i_2]), (arr_7 [i_2]))), (((((/* implicit */int) (short)7083)) - (((/* implicit */int) arr_6 [i_2]))))));
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 3) 
                {
                    {
                        arr_16 [i_2] [10ULL] [10ULL] [i_5] = ((((/* implicit */_Bool) min(((+(19ULL))), (35888059530608640ULL)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7083))))) ? (((((/* implicit */_Bool) (short)7064)) ? (((/* implicit */int) arr_14 [i_5] [i_4] [i_2] [i_2])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1020930642189227097LL)) < (3980303814490285873ULL)))))) : (((((/* implicit */int) arr_6 [i_5 - 1])) * (((/* implicit */int) (short)-7068)))));
                        var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3 + 4] [i_4])), (((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned long long int) arr_7 [i_2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32735))) / (1869955498203288936ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), ((short)19519)))))))));
                        var_17 = (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_4] [i_5]))) : (15891107891596921445ULL))) <= (((unsigned long long int) (short)7083))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 7886141189272998822ULL)) ? (((((/* implicit */_Bool) var_6)) ? (1020930642189227085LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [3ULL] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        var_19 = (short)7083;
    }
}
