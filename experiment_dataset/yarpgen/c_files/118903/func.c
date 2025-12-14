/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118903
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (min((min((var_6), (var_17))), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 3584U);
        var_20 = ((/* implicit */unsigned int) max((var_20), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1462333843311268377LL))))), (((unsigned int) 3583U))))));
        var_21 += ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) arr_0 [i_0])))))) > (((((/* implicit */_Bool) arr_1 [14U])) ? ((-(arr_1 [(unsigned short)14]))) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3] = ((3239393252485514194ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_3 + 3])) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)3784))))));
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (arr_1 [22U])))) < ((+(var_12)))))), (var_11)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_24 -= var_14;
            arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1463521645)) ? (((/* implicit */long long int) ((var_13) + (((/* implicit */int) var_4))))) : (arr_5 [i_4] [i_1])));
            arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_4])) <= (arr_1 [i_4])));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_3 [i_4]))));
            var_26 = ((/* implicit */unsigned short) ((arr_14 [i_1] [i_1] [i_1]) && (arr_6 [i_1])));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_14 [i_1] [i_1] [i_1]))));
            arr_19 [i_5] [i_5 - 1] [i_1] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)56))))));
            arr_20 [i_1] [i_5] [i_1] = (!(((/* implicit */_Bool) arr_8 [i_1] [i_5 - 1])));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_8 [i_1] [i_5]) : (arr_8 [i_1] [i_1])));
        }
    }
    var_29 = ((/* implicit */unsigned long long int) var_15);
    var_30 *= ((/* implicit */unsigned char) var_5);
    var_31 = ((/* implicit */unsigned short) var_5);
}
