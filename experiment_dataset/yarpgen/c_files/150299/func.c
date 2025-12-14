/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150299
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
    var_16 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 2161082386U)) : (2199023255551LL)))) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [(unsigned short)2] [i_1]))))) ? (((/* implicit */int) max((arr_4 [i_0] [i_1]), (((/* implicit */short) arr_5 [4ULL] [(signed char)2] [i_0]))))) : (((/* implicit */int) var_1))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) (unsigned short)31542));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_18 ^= ((/* implicit */long long int) arr_0 [i_2] [i_2]);
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) << (((/* implicit */int) var_12)))) * (((/* implicit */int) arr_4 [i_2] [i_2]))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_2] [i_2]));
        arr_10 [i_2] = ((/* implicit */long long int) var_14);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) -6288844658285787221LL)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned char) arr_2 [(short)2] [i_3]);
        var_22 = ((/* implicit */_Bool) (((-((-(((/* implicit */int) (unsigned char)243)))))) ^ (((/* implicit */int) var_13))));
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4] = ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) ((short) ((unsigned char) -2199023255552LL)))) : (((/* implicit */int) (signed char)(-127 - 1))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_23 [i_6] [i_6] [(unsigned short)9] [(unsigned short)9] = ((/* implicit */signed char) ((unsigned long long int) (-(var_2))));
                    var_23 -= ((/* implicit */long long int) ((var_15) || (((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4]))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((_Bool) arr_16 [i_4] [i_7 + 3]));
                                var_25 *= ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_6] [i_7 + 1]))));
                                var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */short) var_4)), (arr_4 [i_4] [i_8])))))) ? (arr_19 [(short)6]) : ((((!(((/* implicit */_Bool) 4242673814U)))) ? (max((3884960874133052958ULL), (((/* implicit */unsigned long long int) (unsigned short)33990)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (unsigned short)50147)) ? (-1847535394) : (((/* implicit */int) arr_21 [i_4] [i_4]))))))) * (arr_3 [i_4] [i_4])));
        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_13 [i_4]))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((((/* implicit */int) var_13)) + (((/* implicit */int) var_13))))));
    }
    var_29 = ((/* implicit */unsigned int) var_13);
    var_30 = ((/* implicit */int) max((((/* implicit */short) var_4)), (var_6)));
}
