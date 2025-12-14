/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116107
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
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)58160))) < ((~(((((/* implicit */_Bool) (unsigned short)7377)) ? (((/* implicit */unsigned long long int) -7746950219088505516LL)) : (18183820378256427443ULL)))))));
                arr_5 [i_0] = ((/* implicit */int) var_8);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((262923695453124172ULL), (((/* implicit */unsigned long long int) var_9))))) ? (min((((/* implicit */unsigned long long int) var_0)), (18183820378256427443ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)56617)) : (((/* implicit */int) (short)6)))))))) ? (((((/* implicit */_Bool) 516971612)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58160)) & (516971601)))) : (((7660593541548172961ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58163))))))) : ((-(min((12045811871128095729ULL), (((/* implicit */unsigned long long int) (unsigned short)38367))))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (unsigned short)58137)))))))));
                var_16 = ((/* implicit */int) var_2);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) 5195762704885706354ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_13)))))) : ((~(2110807904U))))), (((/* implicit */unsigned int) var_9))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (unsigned short)58173))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) ((short) 18446744073709551612ULL)))) ^ (((((/* implicit */_Bool) 0LL)) ? (-7746950219088505516LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((7659228147445234542ULL), (var_7)))))) ? (((((((/* implicit */_Bool) 2110807904U)) ? (((/* implicit */long long int) 0U)) : (var_8))) | ((-(1273931267510713017LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45755)))));
                    arr_22 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 4044787444U)) == (9195379630815847171ULL)))) & (((/* implicit */int) (signed char)-52))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_3))))) : ((+(225731240797661326ULL))));
                    arr_23 [i_4] [i_4] = ((/* implicit */unsigned short) (((-(4294967295U))) <= (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
