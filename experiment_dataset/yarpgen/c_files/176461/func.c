/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176461
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) & (373620689)))) ? (((/* implicit */int) (unsigned char)222)) : (arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((((int) -240888782)) <= (((((/* implicit */_Bool) -1998538064)) ? (var_13) : (var_1)))))));
        var_19 = ((/* implicit */unsigned char) ((int) var_0));
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */int) (unsigned char)39)), (96))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) var_5))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_7 [i_3] [i_2 - 1] [i_1])))) ? (((/* implicit */int) var_2)) : (((arr_1 [i_1] [i_2]) << (((((/* implicit */int) var_3)) - (109)))))));
                    arr_13 [7] [i_3] [i_2] [i_3] = (unsigned char)39;
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    var_22 = ((unsigned char) ((-1803214274) < (((/* implicit */int) (unsigned char)104))));
                    arr_21 [i_5] [i_4] [i_1] = ((((/* implicit */_Bool) ((unsigned char) ((int) var_0)))) ? (((((/* implicit */_Bool) min((-299606923), (arr_19 [i_1] [6] [i_5] [i_4])))) ? (((/* implicit */int) ((arr_10 [i_1] [i_4] [i_5] [i_5]) != (((/* implicit */int) (unsigned char)163))))) : (((/* implicit */int) ((arr_2 [i_1]) != (arr_17 [i_1] [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (1327119053) : (var_10))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_23 = ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)238)) : (218086301));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (var_13) : (var_1))), (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) arr_11 [i_6 - 2] [i_6 - 2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */int) (unsigned char)42))))) ? (((/* implicit */int) var_7)) : (arr_19 [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2]))) : (((/* implicit */int) ((unsigned char) (unsigned char)222)))));
                        arr_30 [i_6] [i_6] [i_7] [8] [i_6] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_6 - 2] [i_6 - 3] [i_6 - 3]))))) ? (((((/* implicit */int) (unsigned char)248)) & (1375423174))) : (((((/* implicit */_Bool) arr_27 [i_6 - 3] [i_6 + 1] [i_6 - 2])) ? (((/* implicit */int) arr_27 [i_6 + 1] [i_6 - 2] [i_6 - 3])) : (((/* implicit */int) arr_27 [i_6 - 2] [i_6 + 1] [i_6 + 1])))));
                    }
                    var_25 &= ((((((/* implicit */_Bool) (unsigned char)74)) && (((/* implicit */_Bool) (unsigned char)42)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_7] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [i_1]))))));
                }
            } 
        } 
    }
    var_26 = var_15;
    var_27 = var_12;
}
