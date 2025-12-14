/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111664
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
    var_10 = ((/* implicit */_Bool) (~((~(var_1)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51209))) : ((+(var_8))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)29560)) && (((/* implicit */_Bool) (unsigned short)14326)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 17971824203128073721ULL))))))))));
                    arr_6 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (((-((-(((/* implicit */int) (unsigned short)14338)))))) ^ (((/* implicit */int) arr_0 [i_0]))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = min((min((arr_5 [i_0] [i_1] [i_2]), ((unsigned short)65535))), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)51209))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_4 - 3])) : (arr_8 [i_0] [i_2] [i_3] [i_3])))))));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((int) ((unsigned char) var_4))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(16383LL)))) && ((!(((/* implicit */_Bool) 1167035116202997448LL))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33837)) ^ (((/* implicit */int) ((unsigned short) (+(var_6)))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (+(min((((/* implicit */long long int) (short)-12469)), (arr_4 [i_6 - 2] [i_6 - 1]))));
                                var_16 ^= ((/* implicit */unsigned long long int) max((arr_1 [i_6 - 1] [i_6 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6] [i_6 - 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    arr_26 [i_8] = ((long long int) min(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (!(((/* implicit */_Bool) -2743164660390639263LL)))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((unsigned int) (short)-29560)))))));
                    arr_27 [i_9] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)253)) ^ (((/* implicit */int) (signed char)-47))));
                }
            } 
        } 
    } 
}
