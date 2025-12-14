/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156494
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
    var_17 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_0)))) : (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) var_7)))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) + (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (5299850020451576532LL))) ? (var_0) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) : (var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_2] [i_2 - 2] = ((/* implicit */unsigned long long int) (-(((arr_2 [i_0] [i_0]) % (((/* implicit */unsigned int) -2147483642))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) arr_5 [i_0]))))) : (((((/* implicit */int) (signed char)-54)) | (((/* implicit */int) arr_5 [i_3])))))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8523)) ? (2189493066470717272LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((((/* implicit */_Bool) (unsigned char)3)) ? (13635716020024215716ULL) : (((/* implicit */unsigned long long int) 1510799199)))) / (((/* implicit */unsigned long long int) var_3))))));
                arr_12 [i_1] = ((/* implicit */int) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_8) + (((/* implicit */long long int) arr_1 [i_6] [i_5]))))))) - (((unsigned int) arr_13 [i_6 - 1] [i_5]))));
                            arr_23 [i_4] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (12718153340816526135ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) arr_20 [i_5] [i_4] [i_4] [i_5]);
                var_23 = var_3;
                var_24 = ((/* implicit */long long int) ((arr_19 [i_5] [i_5]) / (((/* implicit */int) var_5))));
                var_25 = ((/* implicit */short) var_10);
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)212))));
}
