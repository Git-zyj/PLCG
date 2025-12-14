/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178199
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
    var_17 = ((/* implicit */int) var_12);
    var_18 = ((/* implicit */unsigned short) max(((+(var_7))), (((/* implicit */unsigned int) -1974902593))));
    var_19 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */short) -1974902593);
                var_20 = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) 16252928LL)) <= (var_1)))) >= (-2073042438))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_14)))) ? ((-(((/* implicit */int) var_0)))) : (var_3)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-76)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))))) <= (var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_4]))))) && (((/* implicit */_Bool) (+(var_2)))))))));
                                var_21 = ((/* implicit */int) var_11);
                                arr_13 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0 - 2] = ((/* implicit */_Bool) (~(((((((((/* implicit */_Bool) 1974902593)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_15))) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) arr_2 [i_0 - 2] [i_1] [i_1])))) + (225))) - (30)))))));
                                arr_14 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_4);
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                            {
                                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1 + 1] [i_0]))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5] = ((/* implicit */int) arr_10 [i_5] [i_2] [i_1 + 1] [i_0]);
                                arr_18 [i_5] [i_3] = ((/* implicit */unsigned short) (+(arr_0 [i_1 + 1] [i_1 - 1])));
                            }
                            for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                arr_21 [i_0] [i_1] = var_1;
                                arr_22 [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_9 [i_0 - 2] [i_0 - 1]))))));
                            }
                            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((min((((/* implicit */long long int) var_7)), (arr_19 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_3]))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1974902593)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2047U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((var_15) ^ (((/* implicit */long long int) var_7))))))) : (min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (6508390681458238859ULL))))))))));
}
