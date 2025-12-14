/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157710
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
    var_11 += ((/* implicit */unsigned int) ((var_10) <= (var_10)));
    var_12 |= ((/* implicit */_Bool) ((unsigned short) var_2));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)474)) && (((/* implicit */_Bool) (unsigned short)30620)))) ? (1945403147U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && ((_Bool)0))))));
                    var_15 = ((/* implicit */int) min((var_15), (((arr_4 [i_0] [(unsigned char)5] [i_0 - 2]) / (max((var_7), (((/* implicit */int) arr_9 [i_0] [i_1] [i_0 - 2]))))))));
                }
                for (int i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_16 -= ((/* implicit */unsigned int) arr_3 [i_1]);
                    arr_12 [i_3 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) var_6));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 - 2])) ? (arr_6 [i_3 - 2]) : (((/* implicit */int) (unsigned short)65531))))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_0 - 2] [i_3 - 2]) ? (-2013764065) : (((/* implicit */int) (_Bool)0))))) : (((unsigned long long int) var_5))));
                }
                for (int i_4 = 2; i_4 < 14; i_4 += 4) /* same iter space */
                {
                    var_18 -= ((((/* implicit */_Bool) min((var_2), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1]))) : (arr_11 [i_0 - 2])))))) ? (((/* implicit */int) ((-2043580463) > (((/* implicit */int) (unsigned short)21499))))) : (((((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_5)) : (444441946))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_4 - 2])) ? (arr_4 [i_0 - 2] [i_1] [i_4 + 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_4 + 1]))));
                }
                var_19 = ((/* implicit */unsigned short) var_10);
                var_20 -= ((/* implicit */unsigned short) ((min((arr_0 [i_0 + 1]), (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) < (((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) <= (var_10))) ? (((/* implicit */int) var_1)) : (var_7)))));
            }
        } 
    } 
}
