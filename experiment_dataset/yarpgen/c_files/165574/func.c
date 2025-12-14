/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165574
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
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)169))));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (min((((((/* implicit */_Bool) (short)-4128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4127))) : (669547946843182042ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)63)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 857491798)), (((unsigned long long int) 420380390))));
        var_16 = min((arr_3 [i_0] [i_0]), (12));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_10 [i_3] [i_2] [i_2] = min((((/* implicit */int) (unsigned char)192)), (min((min((-594221837), (((/* implicit */int) (unsigned short)49443)))), (min((-1119850771), (((/* implicit */int) (unsigned char)231)))))));
                    var_17 = ((/* implicit */short) var_10);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (short i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_5 + 1] [i_5] [i_3] [i_3])) ? ((-(arr_15 [i_1] [i_2] [i_3] [i_4] [i_5 + 3]))) : (((((arr_6 [i_5 + 1]) + (2147483647))) >> (((arr_6 [i_5 - 2]) + (1169704078)))))));
                                var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 3)), (10489291579025950939ULL)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (min((64356860774626460ULL), (((/* implicit */unsigned long long int) var_0))))))));
                }
            } 
        } 
        arr_17 [i_1] |= ((/* implicit */unsigned long long int) ((int) -13));
        var_20 = ((/* implicit */unsigned char) (~(((((var_2) + (2147483647))) >> (((((/* implicit */int) (unsigned short)41135)) - (41115)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) arr_4 [i_6]))))), ((-(min((((/* implicit */unsigned long long int) var_0)), (var_4))))))))));
                    var_22 = ((/* implicit */unsigned short) 5362291866544345309ULL);
                    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(arr_14 [i_1] [i_6] [i_6] [i_7])))), (min((arr_2 [i_7]), (arr_2 [i_7])))));
                    var_24 = ((/* implicit */unsigned short) (~(var_4)));
                }
            } 
        } 
        arr_23 [i_1] = (+(min((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) (unsigned char)180)))));
    }
    for (unsigned short i_8 = 4; i_8 < 21; i_8 += 1) 
    {
        arr_27 [i_8] = ((((/* implicit */_Bool) min((15288714366476527422ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)35)), ((short)-15714)))) : ((-(((/* implicit */int) var_9)))));
        var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)37633)), (0ULL)));
    }
    var_26 &= var_10;
}
