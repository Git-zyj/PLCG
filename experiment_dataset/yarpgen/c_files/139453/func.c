/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139453
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
    var_17 = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (20ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) 4264826332271403061LL);
                    var_19 = ((/* implicit */short) var_11);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    var_20 -= ((((/* implicit */_Bool) 12143806644728539101ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5502))) : (((((((/* implicit */unsigned long long int) 2147483647)) * (22ULL))) + (((((/* implicit */unsigned long long int) 378994868U)) * (7943034366154727556ULL))))));
                    arr_17 [9ULL] [i_3] [9ULL] = ((/* implicit */_Bool) var_1);
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))), (((long long int) arr_0 [i_3 - 1]))));
                    arr_18 [2U] [i_4] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))), (4095)));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((248U) + (((/* implicit */unsigned int) 0)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_5]))))))))) ? (((/* implicit */unsigned long long int) (+(arr_7 [i_3] [i_3 - 1])))) : (max((((/* implicit */unsigned long long int) min(((unsigned short)12973), ((unsigned short)0)))), ((~(5747661045084384038ULL)))))));
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(var_5)))) - ((~(((/* implicit */int) (unsigned char)255))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_4), (1ULL))) <= (((unsigned long long int) var_16))))))));
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (unsigned short)65535))));
}
