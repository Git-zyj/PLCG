/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159487
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
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((int) (unsigned short)14299)))));
    var_17 -= (-(min((min((1417811566642967701LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) min(((signed char)65), (((/* implicit */signed char) (_Bool)0))))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) -1417811566642967707LL))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_19 = ((((/* implicit */int) (short)-512)) <= (((/* implicit */int) (unsigned char)163)));
                            var_20 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (short)-531)), (max((((/* implicit */unsigned long long int) var_13)), (2522439260183325687ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((signed char) arr_9 [i_0] [i_1 - 4] [i_2] [i_3]))), (max((((/* implicit */unsigned char) var_10)), ((unsigned char)227))))))));
                            var_21 &= ((/* implicit */unsigned long long int) (-(((arr_8 [i_0 + 1] [i_1] [i_1] [i_2] [i_3]) ? ((-(1368152555U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(signed char)9] [i_3])))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1417811566642967702LL)) ? (1368152555U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110)))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [i_2]))))), (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) min((2926814719U), (((/* implicit */unsigned int) arr_6 [i_2] [i_1 - 3])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) (unsigned char)101))))), (((((/* implicit */_Bool) (unsigned short)16918)) ? (arr_0 [i_1]) : (2522439260183325687ULL))))))))));
                var_24 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])), (max(((short)1433), ((short)29492)))))), (((((((/* implicit */_Bool) 1417811566642967721LL)) && (((/* implicit */_Bool) (short)-512)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_0 + 1] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [6U] [i_1])) ? (15924304813526225936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)507)))))))));
            }
        } 
    } 
}
