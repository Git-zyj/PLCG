/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186082
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */short) (+(3064235019U)));
            arr_6 [i_0] = ((/* implicit */long long int) ((((arr_4 [8U] [i_0]) && (((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (15360U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))));
        }
        for (short i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            arr_10 [i_0] [i_2 - 2] = ((/* implicit */signed char) ((arr_4 [i_2 - 1] [i_2 + 1]) && (arr_4 [(unsigned char)19] [i_2 - 1])));
            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)-37))));
            arr_11 [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)15484)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [22])) && (((/* implicit */_Bool) arr_1 [i_2])))))) : (arr_9 [i_2 - 1])));
        }
        var_20 *= ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned int) var_6)) : (arr_3 [i_0] [i_0]));
        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (arr_3 [i_3] [(_Bool)1]) : (arr_9 [i_3])));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)55))))) : (((((/* implicit */_Bool) 1733797210)) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) var_2)))))))));
        var_24 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3] [i_3]))));
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) arr_9 [i_4]);
        var_26 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_4])))) ? (((/* implicit */int) arr_13 [i_4] [7U])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1733797205)) ? (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4])) : (9006649498927104ULL)))) && (((/* implicit */_Bool) var_1)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) ((arr_9 [i_5]) * (((arr_9 [i_5]) / (arr_9 [i_5])))));
        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_5]))))));
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) min((var_3), (2702969820260858729ULL)));
    }
    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_30 = ((/* implicit */unsigned char) 13588591374528058733ULL);
    var_31 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (15743774253448692886ULL)));
}
