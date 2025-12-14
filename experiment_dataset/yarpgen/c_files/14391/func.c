/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14391
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
    var_16 = ((/* implicit */unsigned int) var_11);
    var_17 = ((/* implicit */short) 589718751);
    var_18 = ((/* implicit */unsigned short) (+(613770901257508308ULL)));
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_2] = (+(((min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_2])), (arr_10 [i_0] [i_1] [i_2] [i_2] [(signed char)0] [i_2]))) | (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)16383)), (-589718766)))))));
                                arr_14 [i_0] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) (+(((589718741) + (((/* implicit */int) (short)-16359))))));
                                arr_15 [i_1] [i_0] [2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((589718736) / (min((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [(signed char)10] [i_1])) : (var_7))), (((int) arr_3 [i_1] [i_1] [i_3]))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [10] [i_1] &= 930203339;
                arr_17 [i_0] [i_1] [i_1 - 1] = ((/* implicit */int) 3301458597U);
                arr_18 [(unsigned short)14] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [22])))))) < ((+(var_8)))));
            }
        } 
    } 
}
