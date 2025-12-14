/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170607
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (min((((/* implicit */int) (short)31246)), (-2034055118))) : (((/* implicit */int) (!(arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_7)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_15))))) == ((-(min((3506640898U), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)20178))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))) + (((unsigned int) arr_6 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                {
                    arr_14 [(_Bool)1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */int) (_Bool)1)))))))), (var_3)));
                    var_22 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (unsigned short)31131)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_9))))) <= (((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) var_16)))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (signed char)80))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)76)))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */short) arr_0 [(_Bool)1]);
    }
    var_25 = ((/* implicit */unsigned int) var_12);
}
