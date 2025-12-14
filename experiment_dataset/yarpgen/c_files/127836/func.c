/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127836
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (max((var_9), (((/* implicit */unsigned short) (_Bool)1))))))), (((((/* implicit */_Bool) ((int) var_17))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) <= (var_0))))))));
        var_21 *= (((+(var_19))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [(unsigned short)10] [i_0])))));
        arr_2 [i_0] = min((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) || (((/* implicit */_Bool) 3181565555U))))), ((~(((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned short)49142))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)16378)), (-230166298)))) ? (((/* implicit */int) arr_5 [i_1])) : (((int) ((unsigned long long int) var_2)))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) != (var_18))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)41199)) <= (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
                    arr_12 [i_1] = min((((/* implicit */long long int) arr_4 [i_1])), (max((((/* implicit */long long int) var_7)), (arr_7 [(unsigned char)5] [i_2] [i_3]))));
                    arr_13 [(unsigned short)0] [i_2] [i_2] [(unsigned short)0] = ((/* implicit */_Bool) ((((_Bool) arr_10 [i_2])) ? (arr_8 [i_1] [i_2] [i_3]) : (((unsigned long long int) var_18))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49142))))) ? ((~((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))))) : (max(((~(var_1))), ((-(25)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_19);
            arr_23 [i_4] = ((/* implicit */int) ((var_2) * (((/* implicit */unsigned int) -495398872))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((~(arr_10 [i_6]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)49158), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16387)) > (var_1)))))))))))));
        var_24 = var_12;
    }
    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) -1616400872)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1077379937U))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)0)))))))));
    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
}
