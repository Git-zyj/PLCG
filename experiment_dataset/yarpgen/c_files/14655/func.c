/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14655
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [4LL] = var_12;
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) >> (((1037693724U) - (1037693717U)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)5)) : (var_5))) : (((/* implicit */int) min((((/* implicit */short) var_13)), (var_4))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (16777215U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12124)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((-358998752) < (-1387268329))))))) : (min((((/* implicit */long long int) (unsigned char)201)), (var_7)))));
                            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-1387268340)))) ? (((((/* implicit */_Bool) (short)-23676)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)32657)) : (((/* implicit */int) (unsigned char)255))))));
                            var_17 += ((/* implicit */short) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65533)) && (((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned int) ((-1387268338) / ((-2147483647 - 1))))) : (min((((/* implicit */unsigned int) var_8)), (2737650286U)))));
                arr_10 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_7))) : (((/* implicit */long long int) (~(-2147483632))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (var_6)));
    var_20 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_3))))));
                    arr_18 [i_5] [(short)22] &= ((/* implicit */_Bool) (-(min((var_10), (((/* implicit */int) max((var_4), (var_11))))))));
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((183842191) << (((var_12) - (821665746U)))))) - (max((((/* implicit */long long int) var_12)), (var_7)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 2; i_7 < 17; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            {
                var_23 *= ((/* implicit */unsigned char) var_12);
                var_24 = ((/* implicit */int) min(((-(((((/* implicit */_Bool) (short)19602)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) 5266636722024748000LL)) ? (((/* implicit */int) (unsigned short)30559)) : (-2147483623))))))));
                var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */int) var_6))))) ? (2147483632) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
