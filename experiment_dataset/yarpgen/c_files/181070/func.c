/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181070
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 410202916298838674ULL);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */int) ((signed char) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2]));
                    arr_10 [(unsigned char)0] [i_1] [i_2] [i_1] = -1694266051;
                    var_13 -= ((/* implicit */unsigned int) (unsigned char)188);
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_14 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 8841544599242149468ULL)) && (arr_12 [i_3]))));
        var_15 -= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))) ^ (arr_8 [i_3] [i_3] [(unsigned char)1])))));
    }
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
    var_17 |= ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_18 [i_5])))) >= (((/* implicit */int) arr_19 [i_5] [i_5] [i_4] [i_5]))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 6598294581090889916LL))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -1526844441)) ? (140737488354304LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) != (25655518086449190LL))))))) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 6598294581090889911LL))))), (((((/* implicit */_Bool) (unsigned char)138)) ? (arr_20 [i_4] [(unsigned char)10]) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_6] [i_4]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_1);
}
