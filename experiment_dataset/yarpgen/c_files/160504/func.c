/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160504
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
    var_13 = ((/* implicit */unsigned short) var_12);
    var_14 &= ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [9U] [i_0] = ((/* implicit */long long int) min((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_2 [4U] [i_0])))), ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (8247662259957234094LL) : (((/* implicit */long long int) var_8)))) << (((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) - (70)))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_11))));
        var_17 -= ((/* implicit */short) min(((unsigned short)3), ((unsigned short)12359)));
        var_18 |= ((/* implicit */long long int) arr_6 [i_1]);
        arr_8 [i_1] = ((/* implicit */short) ((1874012713U) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_6 [i_1]))))))));
        var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_6 [i_1])))))));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_20 -= min((((unsigned short) min((((/* implicit */unsigned int) (unsigned short)52189)), (arr_11 [i_2])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_2] [(unsigned short)14]))))));
        /* LoopSeq 4 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            arr_14 [(_Bool)1] [2U] [2U] = (_Bool)1;
            arr_15 [(_Bool)1] [(unsigned char)22] = ((/* implicit */unsigned int) var_2);
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_7))))) > (((/* implicit */int) ((unsigned char) arr_12 [i_4] [i_4])))));
            var_22 *= ((/* implicit */_Bool) arr_11 [13]);
            var_23 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_2] [i_4]))));
            var_24 -= ((/* implicit */unsigned short) (~(arr_13 [i_2] [i_4])));
            var_25 = ((((/* implicit */_Bool) (unsigned short)44064)) || (((/* implicit */_Bool) var_5)));
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) var_4);
            arr_20 [i_5] [5LL] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) < (((/* implicit */int) (unsigned short)65533))));
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) ((long long int) ((-4669312585889034418LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            var_28 -= ((/* implicit */long long int) var_9);
            var_29 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_12))))) > (min((((/* implicit */int) var_3)), ((-(((/* implicit */int) (unsigned short)12370))))))));
        }
        arr_24 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    }
}
