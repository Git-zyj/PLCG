/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116475
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
    var_11 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) 5U);
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_5)), (max((((((/* implicit */_Bool) 900327586U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (928205938U))), ((+(4294967269U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))), (min((((/* implicit */unsigned int) (signed char)-97)), (arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) (~(var_0)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), ((-(var_6)))))) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (-(3394639718U))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4)))), (((3394639712U) != (3394639709U))))))));
                                var_17 = ((/* implicit */unsigned char) ((long long int) arr_10 [i_5 - 1] [i_2 - 1]));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((min((max((((/* implicit */unsigned int) var_10)), (1345886538U))), (((/* implicit */unsigned int) (short)-9480)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 3; i_6 < 22; i_6 += 1) 
    {
        arr_20 [i_6] [i_6] = 3394639712U;
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    {
                        arr_27 [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (short)29893)) == (min((var_5), (((/* implicit */int) var_7))))))), ((-(((/* implicit */int) arr_26 [i_6 - 3] [i_7] [i_9] [i_7] [i_7] [i_9]))))));
                        var_19 = var_5;
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((var_8), (var_5)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4294967291U)) ? (900327575U) : (24U))), (min((889171833U), (((/* implicit */unsigned int) var_10)))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_0))));
}
