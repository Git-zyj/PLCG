/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115916
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
    var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)36237)) : (((/* implicit */int) var_8))))) ? (var_2) : (var_15)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) arr_4 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_5 [i_2 - 1] [i_2 - 2]), (((/* implicit */long long int) arr_1 [i_3] [i_0]))))), (max(((+(15655941996274589958ULL))), (((/* implicit */unsigned long long int) arr_0 [i_4]))))));
                                var_19 += ((/* implicit */long long int) min(((((+(2790802077434961630ULL))) ^ (((/* implicit */unsigned long long int) (~(var_14)))))), (((/* implicit */unsigned long long int) var_15))));
                                var_20 = ((/* implicit */short) ((-3408177259776058803LL) >= (((((/* implicit */_Bool) 0ULL)) ? (min((arr_5 [i_0] [11LL]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_12))))))));
                                arr_13 [i_4] [i_3] = ((/* implicit */int) ((var_15) <= (var_1)));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned short) 15655941996274589975ULL);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_20 [i_5] = (((!(((/* implicit */_Bool) (unsigned short)39837)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_16))));
                                var_22 += ((/* implicit */unsigned short) (-(min((arr_6 [11U] [11U] [i_2]), (5163328450518739871LL)))));
                                var_23 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_0])) ? (var_2) : (((/* implicit */unsigned int) 1071644672))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned int) (((((((~(2147483647))) + (2147483647))) + (2147483647))) << ((((((~(((/* implicit */int) arr_9 [i_0] [i_0])))) + (43933))) - (28)))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5717379845377963590LL)) ? (((((2790802077434961657ULL) + (((/* implicit */unsigned long long int) 595178873U)))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned short)26078)) + (((/* implicit */int) var_8)))))))));
}
