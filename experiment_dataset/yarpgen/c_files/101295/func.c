/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101295
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */signed char) ((8242791822094989731ULL) & (((/* implicit */unsigned long long int) -2329373348167809335LL))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_11 [i_0] = ((((((/* implicit */int) var_5)) + (2147483647))) >> (((8101598237703901535LL) - (8101598237703901517LL))));
                        var_13 *= ((/* implicit */unsigned char) ((signed char) 2329373348167809334LL));
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((int) var_9))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 604184260)) ? (8101598237703901520LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10986177912652938499ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) 7014028594875227188LL))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2329373348167809359LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (2329373348167809343LL)));
                        var_16 += ((unsigned long long int) (short)-14644);
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        var_17 |= ((/* implicit */unsigned short) (+(((((/* implicit */int) var_9)) / (((/* implicit */int) var_1))))));
                        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_10)));
                        var_19 = ((((/* implicit */int) var_7)) / (((/* implicit */int) var_5)));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                        arr_20 [i_0] [i_2] [i_2] [i_0] [i_2] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2329373348167809335LL)) == (0ULL)));
                    }
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2329373348167809339LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
                    arr_21 [i_0] = ((/* implicit */int) ((unsigned long long int) (unsigned char)226));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((2329373348167809334LL) - (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    }
    for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        var_23 = ((/* implicit */int) 0LL);
        var_24 *= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) 511)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) var_5))), (var_10)));
}
