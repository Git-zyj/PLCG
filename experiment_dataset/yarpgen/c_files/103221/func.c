/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103221
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
    var_12 &= ((/* implicit */_Bool) var_8);
    var_13 = ((/* implicit */long long int) (+((+(((/* implicit */int) (short)6066))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)47)))), (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [1U])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)27779)) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6066))))) ? (((((/* implicit */int) var_8)) % (((/* implicit */int) var_4)))) : (var_1)));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_15 &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [13] [i_2] [13U] [i_4] [i_5])))))));
                            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6049)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6066))) : (arr_13 [i_5] [i_2] [i_2] [i_2] [i_2] [i_1])));
                        }
                    }
                    var_17 -= (short)-6052;
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) max((var_18), (((arr_7 [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)768)))))));
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10066))) : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
        var_20 = ((/* implicit */unsigned int) var_1);
    }
    /* LoopSeq 2 */
    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 2) 
    {
        var_21 -= ((/* implicit */unsigned int) (short)10054);
        arr_20 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_6 + 1]), (arr_1 [i_6 + 1])))) ? (((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (arr_1 [i_6 + 1]) : (arr_1 [i_6 - 1]))) : (((/* implicit */int) ((short) arr_1 [i_6 + 1])))));
        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_6] [i_6]))));
        arr_21 [i_6] [i_6] = ((/* implicit */int) arr_10 [i_6 + 1] [i_6]);
        var_23 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_10 [i_6 - 1] [i_6 - 1]))))));
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 17; i_8 += 4) 
        {
            for (unsigned int i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    {
                        arr_33 [11U] [i_8] [i_8] [i_9 + 2] [i_8] [i_10] = ((/* implicit */signed char) (short)6052);
                        arr_34 [i_7] [i_8] [i_7] [0U] [i_9] [0U] = ((/* implicit */_Bool) max(((+(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7] [20]))) | (var_3))))), (((min((var_10), (((/* implicit */long long int) var_7)))) ^ (arr_8 [0U] [i_8 + 2] [i_8 + 2])))));
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */int) (unsigned short)37757);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)47863), (((/* implicit */unsigned short) (_Bool)1)))))) : (var_5)));
    }
}
