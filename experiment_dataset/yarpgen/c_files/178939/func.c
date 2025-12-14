/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178939
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
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (-914524168) : (((/* implicit */int) (short)-25070))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                    arr_10 [i_2] [i_2 + 1] [i_2 - 2] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                    arr_11 [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                }
                arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)30100)) ? (((/* implicit */int) arr_4 [i_1 - 3] [i_1 + 2] [i_0])) : (((min((-979072258), (((/* implicit */int) (short)-8624)))) + (((/* implicit */int) (unsigned short)63957))))));
                arr_13 [i_1] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) -30)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned char) ((557558219) <= (((/* implicit */int) (signed char)-7)))))) : (((/* implicit */int) (unsigned char)172))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 610173062U)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_15 [i_3]))))));
        arr_17 [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 1597178231U)) ? (3684794239U) : (4294967278U))));
    }
    for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) 
    {
        arr_21 [i_4 - 2] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((610173047U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_4]))))))));
        arr_22 [(short)6] [(_Bool)1] = 20;
        arr_23 [i_4 - 2] [(signed char)0] = ((/* implicit */unsigned int) var_0);
    }
    var_10 = ((signed char) var_4);
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */int) (unsigned short)8160)) / (var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254))))))));
        arr_27 [i_5] = ((((/* implicit */_Bool) min(((short)17573), (((/* implicit */short) (_Bool)1))))) ? ((~(176240183U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196)))))));
        arr_28 [i_5] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (unsigned short)8139)) - (8119)))));
        arr_29 [i_5] = ((((/* implicit */_Bool) arr_24 [i_5])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)17556))) - (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */int) arr_24 [i_5])) : (arr_25 [i_5])))));
    }
}
