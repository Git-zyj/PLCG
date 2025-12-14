/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162743
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) ((signed char) ((short) ((((/* implicit */unsigned long long int) arr_1 [i_0])) - (var_3)))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((arr_2 [i_2 + 1] [i_2 - 1] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))), (((unsigned short) (short)9291))));
                    var_16 = ((/* implicit */unsigned long long int) (((-(arr_2 [i_2 - 1] [i_2 - 1] [i_2]))) >= (arr_2 [i_2 - 2] [i_2 - 1] [i_0])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */unsigned long long int) (-(var_4)));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 4; i_3 < 24; i_3 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)9291)) + (((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) ((short) min(((short)9282), (((/* implicit */short) (signed char)(-127 - 1)))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((max((15883785515408445241ULL), (((/* implicit */unsigned long long int) -92768344)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_15 [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_4] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (max((7119698740511455501LL), (((/* implicit */long long int) arr_0 [i_4])))) : (((/* implicit */long long int) arr_0 [i_4]))))) < ((~(0ULL)))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9300))) - (max((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_4]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */short) var_8);
                        var_23 = ((/* implicit */unsigned short) max((0LL), (-786777537761316400LL)));
                    }
                } 
            } 
            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), (var_5))))) : (((((/* implicit */_Bool) (unsigned short)40567)) ? (var_0) : (arr_7 [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33381)))));
        }
        arr_23 [i_4] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)0))))));
        var_25 = ((/* implicit */unsigned long long int) arr_21 [i_4] [i_4] [i_4] [i_4]);
    }
}
