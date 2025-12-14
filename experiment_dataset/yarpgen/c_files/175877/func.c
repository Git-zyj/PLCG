/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175877
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
    var_16 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1094699143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) 5761801401144786565LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2535956904U)) ? (((/* implicit */int) arr_4 [i_0] [1U])) : (((/* implicit */int) var_15))))))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [0]))) >= (arr_5 [i_0] [i_0] [i_2]))))));
                    var_17 = (~(max((var_4), (((/* implicit */unsigned int) (short)-3265)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_22 [(signed char)14] [i_4] [i_5 - 1] [i_3] = ((/* implicit */unsigned int) ((signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64193))) + (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5293020119770291719ULL))))))));
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) >= (18446744073709551612ULL)))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_16 [i_3] [i_4] [i_3] [i_7] [i_5 - 1] [i_3]))))));
                            }
                        } 
                    } 
                    var_18 = (!(((_Bool) ((((/* implicit */unsigned long long int) var_4)) * (18446744073709551591ULL)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((int) (~(min((-5378362615257125991LL), (7334219658692705815LL))))));
    var_20 = (~(((/* implicit */int) var_10)));
}
