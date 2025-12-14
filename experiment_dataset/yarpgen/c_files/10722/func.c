/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10722
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) ((unsigned short) 1474421498545258784ULL))) : ((~(((/* implicit */int) (signed char)106)))))) << (((16972322575164292845ULL) - (16972322575164292841ULL)))));
                var_16 = ((/* implicit */unsigned int) min((((long long int) arr_0 [i_0] [i_0])), (((/* implicit */long long int) var_4))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_3 - 1])) ? (((/* implicit */int) (signed char)-106)) : (arr_8 [i_2 - 1] [i_2 + 1])))))));
                    var_18 = ((/* implicit */signed char) ((int) max((arr_9 [i_2 - 1] [i_4] [i_2 - 1]), (arr_9 [i_2 + 1] [i_4] [i_2 - 1]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_7 = 2; i_7 < 11; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((int) var_0)) : (((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (2147483647)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_3))))))));
                                arr_20 [i_2] [i_3] [i_3] [i_5] [i_5] [i_6] [(_Bool)1] = ((/* implicit */_Bool) arr_2 [i_7]);
                            }
                            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                            {
                                arr_23 [i_5] [i_3 + 1] [i_6 + 2] [(_Bool)1] [i_8] [i_3 - 1] = ((/* implicit */unsigned int) (~((+(arr_8 [i_2 + 1] [i_5 + 2])))));
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-101)), (arr_9 [i_2 + 1] [8] [i_2 + 1])));
                                arr_24 [i_2] [i_3] [i_5] [i_6] [i_8] = (!(((/* implicit */_Bool) min((arr_17 [i_2]), (((/* implicit */int) var_9))))));
                            }
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)-107)))), ((_Bool)1)))) != ((-((~(((/* implicit */int) var_5))))))));
                            var_22 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_5 - 2])) : (((/* implicit */int) arr_19 [i_5 - 1])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((arr_13 [i_2 + 1]) + (arr_13 [i_2]))), (max((arr_13 [i_2 + 1]), (arr_13 [i_3 + 1]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((((/* implicit */unsigned int) var_0)), (var_1))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) (unsigned char)149))), (((((/* implicit */_Bool) var_13)) ? (2147483629) : (((/* implicit */int) (_Bool)1)))))))));
    var_25 = ((/* implicit */_Bool) ((int) min((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_10)))))));
}
