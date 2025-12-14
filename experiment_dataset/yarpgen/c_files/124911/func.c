/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124911
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) (unsigned short)1)))) : (var_14))), (((/* implicit */int) (signed char)-86))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_7);
                    arr_8 [i_0] [(unsigned short)5] [(unsigned short)5] [i_1] = ((/* implicit */signed char) arr_2 [i_0] [i_1 + 1]);
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)33751)))))));
                    var_21 -= ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (var_11))))))) : (((/* implicit */int) (unsigned short)0)));
                    var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), ((-((+(var_10)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((unsigned short) var_2)))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) max((var_24), ((+(var_11)))));
                                arr_15 [i_0] [i_1] = ((/* implicit */long long int) var_9);
                                arr_16 [i_0] [i_1] [i_0] [i_4] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))));
                                var_25 &= ((/* implicit */int) var_3);
                                arr_17 [i_1] [i_0] [i_1] [i_3 - 1] [i_4] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */long long int) 2097151)) + (var_1)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 23; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        {
                            arr_23 [(signed char)11] [i_1 - 2] [i_6 + 1] [i_1] = ((/* implicit */unsigned int) ((int) -2097152));
                            var_26 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((var_1) + (9223372036854775807LL))) << (((var_17) - (1535632393)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1 - 2] [i_0] [i_0] [i_7]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
