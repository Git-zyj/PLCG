/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153831
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
    var_20 += ((/* implicit */long long int) min(((+(var_3))), (var_3)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)154))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1511398563U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))) : (min((var_17), (((/* implicit */long long int) (unsigned char)102))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) - (4023536436U))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) >= (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 1082128992655878303LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))) : (-1778127633)))));
        var_21 ^= ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_1 + 3] = ((/* implicit */unsigned char) ((int) var_17));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) var_12);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2783568738U)) ? (-2861880143918552339LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12292)))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((1812710042U), (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)85)))), (((((/* implicit */_Bool) (unsigned short)33003)) ? (((/* implicit */int) (unsigned short)52432)) : ((-2147483647 - 1))))))))))));
                        arr_14 [i_3 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_12 [i_1 - 1] [i_3]);
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)157))));
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 4744086400874480624LL)) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) (unsigned char)142)))));
        arr_18 [i_4] [(unsigned short)8] = ((/* implicit */unsigned int) var_15);
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((((/* implicit */_Bool) -1082128992655878304LL)) ? (arr_1 [7LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) << (((arr_1 [i_4]) - (317666830U))))))));
    }
    var_27 = ((/* implicit */unsigned short) var_8);
    var_28 -= ((/* implicit */unsigned int) (+(var_12)));
}
