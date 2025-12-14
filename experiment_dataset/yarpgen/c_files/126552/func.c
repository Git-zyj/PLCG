/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126552
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
    var_15 = ((/* implicit */unsigned int) ((((_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-31842))))))) : (var_7)));
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_6) << (((var_6) - (13189817912337242050ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31828))))) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) >= (((min((var_7), (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_17 -= ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-31842)), (arr_5 [i_2] [i_2]))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~((-(var_6))))))));
                    arr_9 [i_0] [0U] [i_2] [0U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (unsigned short)55297)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (short)6676)))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-7)))) : (((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
    {
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            {
                arr_17 [i_3] [i_3] [i_4] = ((/* implicit */short) var_13);
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_20 = (!((!((!(((/* implicit */_Bool) var_9)))))));
                            var_21 *= (signed char)-82;
                        }
                    } 
                } 
            }
        } 
    } 
}
