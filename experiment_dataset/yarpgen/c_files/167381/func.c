/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167381
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_5)))) >= (((((/* implicit */_Bool) (unsigned short)14)) ? (1099511627775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58485)))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))), ((+(((/* implicit */int) ((short) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((int) -397858601)) >= (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) ((unsigned char) (unsigned short)65521))))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) 12275958470241589580ULL))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)22216)))), (((/* implicit */int) ((unsigned char) (short)7213))))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (short)0))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1]);
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (short i_5 = 3; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_5 - 1] [i_4] [i_5] [i_6]) >> (((arr_7 [i_0] [i_5 - 1] [i_4] [i_0] [i_6]) - (3845854450820299736ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_6] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_4] [i_5])) : (((/* implicit */int) (short)22230))))) ? (((/* implicit */long long int) arr_3 [(unsigned short)10] [i_4] [21])) : (((((/* implicit */_Bool) arr_13 [i_1] [3ULL] [i_5] [11U])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22217))) : (arr_8 [i_0] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3579))) : (65535U)))) ? (((unsigned int) (short)22194)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_5 - 3] [i_6 + 1]))))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((min((arr_0 [i_5 - 2] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_4])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((2680380443U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))))))))))))));
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((int) var_9)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) min((((short) var_12)), (((/* implicit */short) ((((3843703111051329814LL) % (((/* implicit */long long int) var_19)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) : (65535U)))))))));
}
