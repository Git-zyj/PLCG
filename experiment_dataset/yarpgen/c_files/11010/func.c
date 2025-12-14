/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11010
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
    var_12 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) var_9)), (((((/* implicit */int) var_1)) - (((/* implicit */int) var_2))))));
                            var_13 = ((/* implicit */short) (((-(((/* implicit */int) ((var_10) || (var_10)))))) <= (((((/* implicit */int) var_0)) / (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7)))))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_4))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_4)) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                                var_17 = ((/* implicit */short) var_8);
                                arr_19 [i_0] [i_0] [i_0] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_23 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) var_5);
                    arr_24 [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_10)))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_6)))));
                    arr_25 [3] = ((/* implicit */unsigned short) ((((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_8);
}
