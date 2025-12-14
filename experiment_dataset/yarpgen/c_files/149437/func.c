/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149437
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((signed char) (!((_Bool)1))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */unsigned short) ((_Bool) ((((long long int) var_10)) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                                var_15 = ((/* implicit */unsigned short) ((9223372036854775800LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023)))));
                                arr_15 [i_4] = var_9;
                                var_16 += ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12)))) ? (((long long int) var_5)) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_7))))));
                            }
                            for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                            {
                                arr_20 [i_0] [i_5] [i_0] [(signed char)9] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_10))) % ((+(((/* implicit */int) ((unsigned short) var_9)))))));
                                arr_21 [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                            }
                            for (signed char i_6 = 1; i_6 < 10; i_6 += 3) 
                            {
                                arr_24 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_2] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ (((/* implicit */int) var_6))));
                                arr_25 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_7))) && (((_Bool) var_10)))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((long long int) var_9)))));
                            }
                            arr_26 [i_0] [(signed char)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) ((unsigned char) var_1)))));
                            var_18 = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                arr_27 [i_0] [i_1] = var_4;
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)1020)))) - (((/* implicit */int) var_3))));
    var_20 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((short) var_12)))))));
}
