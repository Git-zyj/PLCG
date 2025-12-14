/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124530
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)83)), ((unsigned short)26447)))) ? (((/* implicit */unsigned long long int) arr_4 [(unsigned char)16])) : (((((/* implicit */_Bool) 2650434641U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (3ULL)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_3 [i_0] [i_2] [i_4])))));
                                var_18 = (+(var_14));
                                var_19 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) (signed char)97)), ((+(arr_13 [i_4] [i_3] [i_2 - 2] [i_1] [i_0 + 2])))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 2])))))) + ((~(((((/* implicit */_Bool) 2650434627U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) : (1644532635U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */short) (~(max((((arr_13 [i_5] [i_6] [i_5] [3ULL] [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((short) 18446744073709551613ULL)))))));
                var_22 += var_2;
                arr_19 [i_6] |= ((/* implicit */unsigned long long int) 2650434627U);
                var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_6])) ? (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_6] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_6 - 1] [i_6 - 1])))) : (((/* implicit */int) max((arr_18 [i_5] [i_5] [i_5]), (((/* implicit */short) var_13))))))), (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) >> ((~(((/* implicit */int) var_0))))))) ? ((((!(((/* implicit */_Bool) 7958720871907017016ULL)))) ? (max((var_12), (((/* implicit */unsigned long long int) 2650434619U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (18446744073709551608ULL)));
}
