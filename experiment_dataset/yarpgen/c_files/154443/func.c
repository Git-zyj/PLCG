/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154443
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
    var_17 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_9)), (var_15)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */short) var_6);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((arr_8 [i_2]), (((/* implicit */long long int) arr_9 [i_2]))));
        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))) ? (var_0) : (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) arr_9 [i_2]))));
    }
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        arr_13 [i_3] = var_5;
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (arr_12 [i_3])))), (min((arr_7 [i_3]), (((/* implicit */unsigned long long int) var_10))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_10))));
    }
    for (short i_4 = 3; i_4 < 9; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) var_1);
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((var_6) ^ (arr_8 [i_5])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5]))) : (var_8))) : (((/* implicit */unsigned long long int) var_0)))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4811443602625451892ULL)))));
            arr_20 [i_4] [i_4] [i_5] = ((/* implicit */short) var_15);
        }
        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((14654871970556962548ULL) * (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) arr_3 [i_6 - 2])))), (((/* implicit */unsigned long long int) arr_12 [i_4]))));
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_9)), (var_10)));
            var_24 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_0 [i_4])), (var_10))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10))))));
            var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) (short)16384))), (((unsigned int) arr_0 [i_4]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_22 [i_4])), (((((/* implicit */_Bool) arr_10 [i_4] [i_7])) ? (min((((/* implicit */unsigned long long int) var_1)), (arr_7 [i_4]))) : (var_11)))));
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4])))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) min((arr_24 [6U] [6U] [i_7]), (var_14)))))))))));
        }
    }
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_3))));
}
