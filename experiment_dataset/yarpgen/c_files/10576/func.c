/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10576
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_9))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))));
    var_15 = ((/* implicit */signed char) min((((unsigned short) min((((/* implicit */unsigned long long int) (signed char)-91)), (var_3)))), (((/* implicit */unsigned short) ((short) min((var_3), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0 - 2] [i_2 - 2] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_1), (var_1))), (var_1)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_1 + 1] [i_2 - 1] [i_3 - 1] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                arr_14 [i_0 - 3] [i_0] [i_2 - 1] [i_3 - 1] [i_4] = ((/* implicit */_Bool) min(((unsigned char)94), ((unsigned char)161)));
                                arr_15 [i_3 + 1] [i_0] = ((/* implicit */_Bool) (~((~(arr_4 [i_0 - 1] [i_1 - 3] [i_2 - 2] [i_0 - 3])))));
                                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_2 + 1] [i_4]))));
                                arr_16 [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_2 - 1] [i_3 + 2] [i_0] = ((/* implicit */unsigned short) (+(arr_13 [i_4] [i_3 + 1] [i_2 - 2] [i_1 + 1])));
                                arr_17 [i_0 - 1] [i_1 + 1] [i_0] [i_2 - 2] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) ((short) (!(arr_8 [i_0 + 1] [i_1 - 2] [i_1 + 1] [i_3 - 1] [i_0]))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_2);
                                arr_20 [i_0] [i_3 - 1] [i_2 + 1] [i_3 - 1] [i_5 + 1] = ((/* implicit */unsigned long long int) var_11);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_7 - 2] [i_6] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (_Bool)1)))));
                                arr_29 [i_0 + 1] [i_0 - 1] [i_8] [i_7 - 2] [i_1 + 1] [i_0] [i_1 - 3] = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
