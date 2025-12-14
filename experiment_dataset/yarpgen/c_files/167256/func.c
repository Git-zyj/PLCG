/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167256
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
    var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((-(var_19))) - (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_8))))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))))) & ((-(((var_18) * (var_0)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_10))))) < ((-(var_16))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) var_13);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) var_4);
                                var_23 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_18)))) && (((/* implicit */_Bool) ((var_0) & (((/* implicit */unsigned long long int) var_19))))))))) ^ ((~(((((/* implicit */unsigned long long int) var_5)) & (var_0)))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_5))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
                                var_25 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) var_11)), (((((/* implicit */int) var_1)) + (((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((var_0) * (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) & (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_13)))) / (((/* implicit */int) ((((/* implicit */int) var_11)) != (var_2))))))))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_4)), (var_0))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))) && ((!(((/* implicit */_Bool) (+(-1709135794))))))));
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) ^ (((((/* implicit */int) var_10)) & (((/* implicit */int) var_8)))))))));
                            arr_22 [i_0] [i_5 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (-(var_19)))) & (var_5))) < (((/* implicit */long long int) ((/* implicit */int) ((max((var_5), (((/* implicit */long long int) var_14)))) < (((/* implicit */long long int) (~(((/* implicit */int) var_17)))))))))));
    var_30 = ((/* implicit */_Bool) (-((((~(var_16))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
}
