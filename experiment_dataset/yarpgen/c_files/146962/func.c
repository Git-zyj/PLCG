/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146962
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
    var_17 = ((/* implicit */long long int) var_15);
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 169899205339126459LL)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 169899205339126459LL))))) : (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
            var_19 = ((/* implicit */short) var_8);
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1]);
            arr_9 [i_0] [(unsigned short)10] = ((/* implicit */unsigned short) ((arr_5 [i_1 + 2] [i_1 + 3]) + (((/* implicit */unsigned long long int) var_4))));
            arr_10 [i_0] [(signed char)6] [i_1 + 2] = ((/* implicit */unsigned long long int) var_12);
        }
        arr_11 [i_0] = ((/* implicit */unsigned short) ((arr_3 [8U]) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8254)) ? (((/* implicit */int) (unsigned short)11590)) : (((/* implicit */int) (short)-8254))));
            arr_16 [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
            arr_17 [2LL] [3U] [i_0] = ((((((/* implicit */int) var_10)) < (-5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) -5)) : (arr_5 [i_2] [i_2]))));
            arr_18 [i_0] = ((arr_3 [i_0]) | (arr_3 [i_0]));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_23 [(short)14] [i_0] = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 4; i_5 < 19; i_5 += 3) 
                    {
                        arr_26 [i_4] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)8259))));
                        arr_27 [i_0] [i_3 + 2] [i_4] [i_5] = ((/* implicit */signed char) ((arr_5 [i_5 + 1] [i_3 + 2]) >> (((/* implicit */int) var_0))));
                        arr_28 [i_0] [(short)3] [i_0] [(signed char)12] [i_0] [i_5] = ((/* implicit */unsigned short) (short)-8265);
                        arr_29 [i_0] [i_0] [i_3] [i_4] [i_5] [i_0] = arr_3 [i_5 - 2];
                        arr_30 [(unsigned short)10] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                    }
                    for (int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        arr_35 [i_0] [i_0] [12U] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (arr_3 [i_6 + 1])));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -169899205339126460LL))));
                        arr_36 [i_6] = ((/* implicit */unsigned short) (+(arr_12 [i_3 + 1] [i_3 - 2] [19ULL])));
                    }
                    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)236))))));
                        arr_41 [i_3] = ((/* implicit */unsigned short) 1507213185U);
                    }
                    arr_42 [(unsigned short)9] [(unsigned short)10] [i_4] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)13244)) - (((/* implicit */int) (unsigned short)11590))));
                }
            } 
        } 
    }
}
