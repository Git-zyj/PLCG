/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161792
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_1), (((/* implicit */unsigned long long int) (unsigned char)118)))), (((/* implicit */unsigned long long int) ((12740445646950361205ULL) <= (((/* implicit */unsigned long long int) 1350946756)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -4626920476630750713LL)) || (((/* implicit */_Bool) -1759782173))))) : (((((/* implicit */_Bool) 4294967295U)) ? ((~(var_5))) : (((-1759782173) % (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) max((var_1), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) == (((/* implicit */int) (unsigned short)60637)))))) & (max((var_10), (((/* implicit */unsigned long long int) 4294967290U))))))));
                                var_15 = ((/* implicit */long long int) var_9);
                                var_16 = 1759782173;
                                var_17 = ((/* implicit */int) ((((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177)))))) >= ((-(arr_8 [i_0] [i_1 - 1] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [(unsigned char)11] [i_6])) <= (((int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (var_12))))));
                                var_19 = ((/* implicit */unsigned short) var_10);
                                arr_18 [i_2] [i_2] [i_5] |= ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((var_1) - (5795938816777033011ULL)))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (var_1))) ^ (max((var_1), (((/* implicit */unsigned long long int) arr_16 [i_5] [i_5] [i_5] [9U] [i_5])))))) : (((/* implicit */unsigned long long int) ((-1124341233) & (289262400)))));
                                var_20 = ((/* implicit */unsigned long long int) ((-83797901) <= (min((((((/* implicit */_Bool) var_9)) ? (var_5) : (var_0))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 13U)))))))));
                                arr_19 [2LL] [i_1] [i_2] [i_5] [i_0] = (+(var_12));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0 + 2] [i_0] [i_2] = ((/* implicit */unsigned int) (((+(((var_6) % (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2])))))) >> (((min((((/* implicit */long long int) var_3)), (arr_9 [i_0 + 2] [i_0 + 3]))) + (8553715198686499004LL)))));
                    arr_21 [8] [i_1] [i_2] [i_0] = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */int) var_10);
}
