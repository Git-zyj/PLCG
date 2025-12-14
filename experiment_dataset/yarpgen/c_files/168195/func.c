/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168195
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (arr_1 [i_0] [i_0])))) ? (var_6) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)9899)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19324))) : (var_9)))) : (max((((/* implicit */unsigned long long int) ((short) arr_4 [i_0]))), (min((((/* implicit */unsigned long long int) (unsigned short)5347)), (arr_3 [i_1 + 1] [i_0] [i_0])))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 805306368U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) 511))))))) % (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (18446744073709551615ULL)))))));
                var_12 ^= ((/* implicit */int) ((unsigned int) max(((signed char)63), (((/* implicit */signed char) arr_2 [(unsigned char)10] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (max(((-(max((14266718497863157499ULL), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)0])))))), (((/* implicit */unsigned long long int) min((var_11), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) -511)) : (4064220085742865038LL))))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_5))))), (9271390792265168695ULL)))) || (((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2]))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_4])) || (((/* implicit */_Bool) (unsigned char)144))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((unsigned long long int) -1592319073);
}
