/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137021
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
    var_18 = ((/* implicit */_Bool) ((unsigned char) ((((unsigned long long int) var_3)) | (((var_15) >> (((var_9) - (3784594644U))))))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) (((~(((/* implicit */int) var_14)))) % (((/* implicit */int) max((var_16), (var_7))))))), (min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_4 [14U] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_10)))));
        arr_5 [i_0] [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) var_5)) + (var_15))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_9) < (var_9))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_8 [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) min(((unsigned char)128), ((unsigned char)141)));
        arr_9 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        arr_10 [i_1] = ((/* implicit */_Bool) max((min((var_2), (((/* implicit */unsigned short) var_16)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) <= (var_0))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_15 [i_2] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_6)), (var_5))) + (max(((-(var_4))), (((/* implicit */unsigned int) var_14))))));
        arr_16 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)126))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_22 [i_2] [i_3 + 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */long long int) 2149908153U)) : (-3422048542514489440LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_16)))))));
                    arr_23 [5LL] [i_3] [i_3] [i_3] = ((unsigned long long int) ((unsigned int) -484328653));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_27 [i_5] [i_5] = ((/* implicit */long long int) (-(var_4)));
        arr_28 [i_5] [i_5] |= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)13))))))), ((!(((/* implicit */_Bool) var_0))))));
    }
}
