/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175673
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (unsigned char)92)) : (var_14)))) : (((unsigned long long int) var_11))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_13))));
                                var_17 += ((/* implicit */unsigned int) ((var_14) > (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                            {
                                arr_15 [(signed char)7] [i_1] [i_0] [(unsigned short)10] [i_5] = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_10)))))) >= (min((2668959788218495386LL), (((/* implicit */long long int) (unsigned short)0))))))));
                                arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)88))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5472))) : (6675126970404603389ULL))) : (((/* implicit */unsigned long long int) var_14))))));
                                var_18 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((var_9) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (signed char)-110))))))))) < (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) ((10U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))))))) : (1125899906842623LL)))));
                                var_19 = ((/* implicit */unsigned char) (unsigned short)28858);
                            }
                            arr_17 [i_0] = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_3] [i_2 + 1] [i_0])) / (((/* implicit */int) (unsigned char)32))))))));
                            arr_18 [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) > (-3661219938563644021LL))))) != (((((/* implicit */_Bool) var_9)) ? (-8392321966758463768LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75)))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((1U), (3212227596U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) : (1082739700U)))));
                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) 0U)) * (-21LL)));
                var_20 = ((/* implicit */int) 1U);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) : (22U)));
                    arr_31 [i_6] [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -2018381135))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))))));
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((var_5) == (var_6)))), (max((((/* implicit */long long int) ((unsigned int) arr_28 [i_7] [i_7]))), ((~(-36LL)))))));
                }
            } 
        } 
    } 
}
