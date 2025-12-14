/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167707
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
    var_18 |= ((/* implicit */int) (_Bool)0);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_3 [8LL] [8LL] |= ((/* implicit */long long int) (+(((max((arr_0 [i_0]), (arr_1 [i_0 + 1]))) | (((arr_1 [i_0 + 1]) >> (((1887579124) - (1887579108)))))))));
        var_19 = ((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) != ((-2147483647 - 1))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((-5514662255176470841LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_10 [i_0] [i_0 + 1])) - (15130)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1]))) & (arr_9 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0 + 1]))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((-5514662255176470841LL) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_10 [i_0] [i_0 + 1])) - (15130))) + (27069)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1]))) & (arr_9 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0 + 1])))))));
                                arr_15 [i_2] [i_4] |= ((/* implicit */int) max((max((((((-5514662255176470839LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32777))) - (8))))), (arr_9 [i_0 + 2]))), (((/* implicit */long long int) arr_12 [i_4]))));
                                var_21 = ((/* implicit */long long int) 1377080478);
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */_Bool) ((long long int) var_12));
                    var_23 ^= ((/* implicit */int) ((short) ((unsigned long long int) arr_10 [i_1] [i_0 + 2])));
                }
            } 
        } 
    }
    for (int i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_24 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)-4801)) | (arr_18 [(unsigned short)14] [i_5 + 1])))) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) (short)4827))))));
        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) -8421190939957470740LL))));
        arr_19 [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)9062)) && (((/* implicit */_Bool) 1007058667)))) ? (((/* implicit */int) arr_10 [i_5] [i_5])) : ((+(var_4)))))) >= (arr_9 [i_5 - 1])));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_6])) | (((/* implicit */int) var_0))));
        var_27 += ((/* implicit */unsigned short) (+(arr_20 [i_6 - 1] [i_6 - 2])));
    }
}
