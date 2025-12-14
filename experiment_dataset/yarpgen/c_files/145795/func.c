/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145795
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
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] [i_0] = min((arr_0 [3U]), (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_0]) : (arr_4 [i_1]))));
            arr_7 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) max((arr_2 [(_Bool)1] [i_1]), (((/* implicit */unsigned int) (unsigned char)27))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (min((var_7), (((/* implicit */long long int) var_13))))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min(((~(((((/* implicit */unsigned long long int) var_5)) ^ (var_2))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_13)) : (1824194615))), (((/* implicit */int) (_Bool)1))))))))));
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) min((arr_0 [i_1]), (var_3))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
        {
            arr_11 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) min(((~(arr_1 [8U]))), (max((arr_2 [i_2] [i_0]), (arr_2 [i_0] [i_2])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_16 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_2] [i_2]), (arr_2 [i_4] [i_0]))))));
                        arr_17 [i_0] [i_0] [i_2] [9LL] [i_4] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                    }
                } 
            } 
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            arr_21 [i_5] = (~(((((/* implicit */_Bool) ((signed char) arr_12 [i_0] [i_0] [i_5]))) ? ((~(var_1))) : (((((/* implicit */_Bool) 1327601679U)) ? (952010855U) : (var_3))))));
            arr_22 [i_0] [i_5] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_0]))))), (arr_15 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) ((signed char) 2471052392869346302LL))))));
        }
        arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((arr_13 [i_0]), (arr_3 [(signed char)14] [i_0] [i_0]))), (((/* implicit */unsigned int) var_13))))) ? (min((var_7), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_12)))))) : (((/* implicit */long long int) min((arr_20 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_17 = ((/* implicit */long long int) ((((arr_20 [i_0] [i_0] [i_0]) >> ((((~(var_7))) + (4948007494522965694LL))))) > (((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_3))), (var_5))))));
    }
    var_18 = ((/* implicit */int) var_6);
    var_19 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37952)))))) ? ((~(((/* implicit */int) var_0)))) : (((int) var_2))))), (((((/* implicit */_Bool) var_4)) ? ((+(var_6))) : (((/* implicit */unsigned long long int) min((952010876U), (((/* implicit */unsigned int) (_Bool)1)))))))));
}
