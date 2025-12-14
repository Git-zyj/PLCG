/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108353
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
    var_17 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] = ((/* implicit */short) var_0);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) * ((((((~(((/* implicit */int) var_5)))) + (2147483647))) << ((((~(var_15))) - (7204884966812512347ULL)))))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_9);
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_2] [i_0] = ((/* implicit */_Bool) (((-(var_3))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11)))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((-(((/* implicit */int) var_2)))) >= (((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((14609549388746756631ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) > (((/* implicit */unsigned long long int) var_14))));
                                arr_26 [i_0] [i_1] [i_0] = ((/* implicit */int) (+((~(var_14)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+((+(var_14))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    arr_35 [i_9] [i_10] [i_11] &= ((/* implicit */short) (~((~((~(var_9)))))));
                    arr_36 [i_11] = ((/* implicit */unsigned int) var_12);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_4)) != (((((var_15) & (((/* implicit */unsigned long long int) var_1)))) - (((/* implicit */unsigned long long int) var_9))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_4))))) <= (var_9)));
}
