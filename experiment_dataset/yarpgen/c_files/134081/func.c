/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134081
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */long long int) (unsigned char)245);
                    arr_8 [i_0] [i_2] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16245))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) var_5);
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-(min((((/* implicit */long long int) (_Bool)1)), (9181676823485987809LL))))))));
                }
            } 
        } 
    } 
    var_14 = var_1;
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                arr_15 [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) + ((-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)42809))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)11)))) ? (((/* implicit */int) min(((unsigned short)63329), (((/* implicit */unsigned short) var_0))))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (((((/* implicit */int) (_Bool)1)) / (1942296102))) : ((-(((/* implicit */int) (unsigned char)11))))))));
                            var_16 = ((/* implicit */_Bool) (~(arr_16 [i_3] [i_4] [i_5])));
                            arr_21 [i_6] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((-(arr_2 [i_5] [i_6]))) >> ((((-(((/* implicit */int) min(((unsigned short)56227), (var_11)))))) + (43466)))));
                            arr_22 [i_3] [i_5] &= ((/* implicit */unsigned char) arr_2 [i_6] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
}
