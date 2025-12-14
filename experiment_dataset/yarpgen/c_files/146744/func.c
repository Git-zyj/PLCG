/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146744
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
    var_15 *= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22727))) == (var_9)));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_16 = ((/* implicit */int) (-(373047688U)));
                    var_17 = ((/* implicit */long long int) ((unsigned long long int) var_9));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) var_1))))));
                }
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */short) ((3849870835U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15191)))))), (var_13)));
                    var_19 = (!(((/* implicit */_Bool) (unsigned char)254)));
                }
                for (signed char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)254))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_7)) : (var_6)))))) ? (1991786909303790775LL) : (((/* implicit */long long int) var_14)))))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (-(arr_12 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    var_22 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2044) : (((/* implicit */int) (_Bool)1))))) < (arr_7 [(unsigned short)13] [i_1 + 3] [(_Bool)1])));
                    arr_17 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)126))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (3849870829U)));
                    arr_18 [i_5] [(unsigned char)17] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 3]))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
}
