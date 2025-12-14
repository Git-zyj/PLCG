/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114300
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
    var_14 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_1) ? (((((/* implicit */int) var_8)) + (var_9))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_9))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)175)) % (((/* implicit */int) arr_3 [i_1] [i_0]))))) ? ((-((+(((/* implicit */int) (signed char)76)))))) : (((/* implicit */int) ((unsigned short) (~(var_13)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) min(((~(((((/* implicit */_Bool) 3U)) ? (1190869177) : (((/* implicit */int) (unsigned short)14)))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [(unsigned short)0] [(signed char)15])) ? (((/* implicit */unsigned long long int) var_9)) : (var_13))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31997))))))));
                                arr_16 [i_3] [i_3] [i_4] = ((unsigned long long int) ((long long int) var_3));
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */short) ((_Bool) arr_14 [i_0] [(short)19] [i_2] [18LL] [i_3] [i_4]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 24; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((long long int) (~(-727636382)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((3555696483863597922LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))))) && (((/* implicit */_Bool) max((var_5), (var_4))))))))));
                    arr_28 [i_5 - 2] [i_6] [i_5 - 2] [i_5 - 2] = ((/* implicit */unsigned short) ((2918547457024484563ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((short)31997), ((short)32016))))));
}
