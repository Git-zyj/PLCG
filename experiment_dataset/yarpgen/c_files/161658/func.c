/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161658
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) var_9);
                var_13 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (max((var_6), (arr_5 [i_1] [i_0] [i_0])))))) == (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 15253511732437682573ULL)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))));
                var_14 -= ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned char) (+(-26221961701504461LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) -26221961701504461LL);
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -26221961701504461LL)) ? (-26221961701504469LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
        arr_11 [i_2] = ((/* implicit */signed char) arr_7 [i_2 + 1] [i_2 + 1]);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(arr_7 [i_2 - 3] [i_2]))))));
        var_19 -= ((/* implicit */_Bool) ((int) arr_10 [i_2 - 2]));
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) min((max(((-(((/* implicit */int) arr_14 [i_3])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-126)) && (((/* implicit */_Bool) arr_12 [i_3]))))))), (max((arr_15 [i_3] [i_3]), (((/* implicit */int) arr_12 [i_3]))))));
        arr_17 [i_3] = min((((long long int) max((arr_12 [i_3]), (((/* implicit */signed char) arr_14 [i_3]))))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_13 [i_3])), (var_12)))));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((arr_15 [i_3] [2]) ^ (min((((((/* implicit */_Bool) var_6)) ? (arr_15 [i_3] [(unsigned short)2]) : (var_3))), (((/* implicit */int) ((signed char) arr_13 [i_3])))))));
        var_20 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_13 [i_3])) - (((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) arr_13 [i_3]))));
    }
}
