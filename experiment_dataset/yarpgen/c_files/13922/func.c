/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13922
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [(unsigned char)10] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)4] [(_Bool)1])))) > (((((/* implicit */int) var_1)) << (((((((/* implicit */int) (short)-29103)) + (29122))) - (13)))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_4 [(short)17] [i_1] [i_2]))));
                    arr_9 [i_0] [i_1] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)0))))))) * (((((/* implicit */_Bool) -9223372036854775793LL)) ? (9223372036854775773LL) : (((/* implicit */long long int) -1602454104))))));
                }
            } 
        } 
        var_15 *= ((/* implicit */unsigned char) ((_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_15 [(unsigned char)11] [i_4] [5] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)32767)))))));
                    arr_16 [i_0] [10] [(short)20] [0LL] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) >= (((unsigned int) -9223372036854775793LL)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((+((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)127)))))))) + ((((~(-9223372036854775775LL))) >> (min((9223372036854775773LL), (((/* implicit */long long int) (_Bool)0))))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(short)16] [(unsigned char)5] [13U] [(_Bool)1] [i_6] [(signed char)14]))) & (arr_14 [(_Bool)1] [i_5] [i_0] [i_7])))))) ? (min((min((9223372036854775792LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) 1238020143U)))) : (((/* implicit */long long int) var_0))));
                        arr_23 [i_6] [(short)4] [(unsigned char)0] [i_7] |= ((/* implicit */short) ((unsigned char) var_1));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) arr_20 [i_0] [(unsigned char)1] [0ULL] [9]);
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (arr_8 [i_8] [i_8] [(unsigned short)19] [17ULL])))) ? (((/* implicit */int) (unsigned char)0)) : (arr_11 [(_Bool)1] [i_8])));
        var_21 = ((/* implicit */short) var_9);
        var_22 = ((/* implicit */short) var_10);
        var_23 ^= var_3;
        var_24 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    }
    var_25 = ((/* implicit */short) var_4);
}
