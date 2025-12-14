/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163223
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((1639448255U) | (var_16))))))));
    var_18 = ((/* implicit */unsigned long long int) (~(4294967293U)));
    var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */int) var_11)) + (2147483647))) >> ((-(((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (unsigned char)254);
                        arr_12 [i_1] [i_3] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_17 [i_0] [i_0]))));
                    arr_18 [i_0] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)206)) <= (((/* implicit */int) ((signed char) var_12)))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_4] [(signed char)10] [i_6] [i_7] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_4] [i_5] [i_5] [(_Bool)1])) ? (arr_13 [i_0] [i_4 - 1] [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))))), (((/* implicit */unsigned int) max((max((arr_19 [(signed char)6] [i_4 - 1] [i_4]), (((/* implicit */short) (unsigned char)246)))), (((/* implicit */short) ((unsigned char) var_4))))))));
                                arr_25 [i_0] [i_0] [i_4] [i_5] [i_0] [i_6] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_23 [14] [i_0] [i_4 - 1] [i_4 + 1] [i_5] [i_5] [i_6]), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > ((-(var_16))))))) : (2126797837U)));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) max(((+(((/* implicit */int) arr_20 [i_0] [i_4 - 1])))), (((/* implicit */int) ((unsigned short) (short)16029))))));
                                arr_27 [i_0] [1U] = ((/* implicit */signed char) var_13);
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (signed char)125))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
