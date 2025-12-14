/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153771
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_15 = var_14;
            var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_3] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_11 [i_0 + 1] [i_0 + 2] [i_2 - 1]) % (var_4)))), (-1LL)));
                    var_17 *= ((/* implicit */unsigned char) arr_12 [i_0 - 1] [i_2 + 1]);
                    var_18 = ((/* implicit */int) arr_11 [i_0] [i_2] [i_3]);
                    arr_14 [i_0] [12U] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1LL) % (((/* implicit */long long int) ((int) var_8)))))) ? (((/* implicit */long long int) 2519738582U)) : (((((/* implicit */long long int) var_5)) % (arr_12 [i_2 - 1] [i_0 - 1])))));
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        var_19 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) var_9)), (arr_9 [i_0] [i_0] [(_Bool)1]))))), (min((arr_1 [i_0]), (arr_1 [i_0 + 1])))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4]))))) : (((/* implicit */int) var_9))));
        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_16 [i_4]))))) ? (arr_17 [i_4] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (1775228713U)));
        var_22 = ((/* implicit */unsigned int) ((_Bool) 2519738593U));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (arr_26 [i_5] [i_7] [i_8] [i_8])))) % (((arr_17 [i_8] [i_6]) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) % (var_13)));
                                var_24 = ((/* implicit */unsigned int) min((((arr_23 [i_5 - 3] [i_5 - 2] [i_5 - 2]) ? (arr_25 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_8]) : (arr_25 [i_5 - 3] [i_5 - 2] [i_5 - 2] [i_8]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((arr_28 [i_5] [i_6] [i_7] [i_5] [i_9]), ((_Bool)0)))) : (((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) min((max((((arr_1 [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_23 [i_5] [i_6] [i_7]))))))), (((/* implicit */unsigned int) ((signed char) arr_9 [i_5 + 1] [i_5 + 1] [16LL])))));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) 1971954397U);
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 1775228713U)) ? (min((((/* implicit */long long int) (short)-23454)), (((((/* implicit */_Bool) arr_21 [i_5] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_6]))) : (-3923702951700531419LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) arr_6 [i_5] [i_6] [i_11])), (arr_2 [i_12] [i_11])))), (((unsigned short) arr_20 [i_5] [i_6]))))))));
                                arr_40 [i_12] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_6] [i_10] [i_6] [i_12]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
