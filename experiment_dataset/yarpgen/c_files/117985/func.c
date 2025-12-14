/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117985
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
    var_20 = ((unsigned long long int) var_19);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((-8388452108246598558LL) + (9223372036854775807LL))) << (((9223372036854775790LL) - (9223372036854775790LL))))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [(unsigned short)10])) : (((/* implicit */int) (short)32767))));
        }
        var_22 *= ((/* implicit */unsigned long long int) var_8);
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                arr_10 [i_3] [i_3] = ((/* implicit */signed char) var_0);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    arr_13 [i_3] [13U] [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 49152U)) ? (7620997407388343551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))));
                    var_24 = ((/* implicit */long long int) var_5);
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5311)) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_13)))))));
                }
                var_26 ^= ((/* implicit */_Bool) max((max((0LL), (((/* implicit */long long int) (unsigned short)55244)))), (((/* implicit */long long int) ((unsigned char) -1921207433767231737LL)))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65509)) + (((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) (signed char)3)))))) ? (arr_1 [(unsigned char)16] [(unsigned char)16]) : (max((((/* implicit */unsigned long long int) arr_2 [i_3 - 1] [i_3])), (((((/* implicit */_Bool) (short)27334)) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))))));
                arr_14 [i_3] = ((/* implicit */_Bool) arr_11 [i_3] [i_3 - 1] [17LL]);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8192))));
}
