/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12401
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((signed char) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_3 [11U] [i_1])) : (var_13)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((signed char) var_4));
                                var_19 = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) ((int) min((var_3), (((/* implicit */unsigned long long int) arr_12 [i_4] [i_3] [i_2] [i_0] [i_0]))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2]))))) ? (((unsigned int) 0U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_12 [i_0] [(unsigned char)4] [i_2 + 1] [i_0] [i_4])))))))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)17)) : (-1018840761)))) : (min((2401656953U), (((/* implicit */unsigned int) (unsigned char)242))))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_7 [11U] [i_1] [i_1] [(short)8]))) ? (min((var_15), (((/* implicit */long long int) arr_2 [(signed char)0] [(_Bool)1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) arr_1 [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    for (long long int i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) min((var_23), ((~((~(((/* implicit */int) arr_19 [i_6]))))))));
                            var_24 = ((/* implicit */unsigned short) var_3);
                            var_25 = ((/* implicit */long long int) ((unsigned short) var_9));
                            var_26 = ((/* implicit */_Bool) (~(arr_24 [i_5] [i_5] [17] [i_7 + 1] [(unsigned short)4])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_9 = 2; i_9 < 16; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_27 |= ((/* implicit */unsigned int) arr_23 [i_9]);
                                var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))))), (((/* implicit */unsigned long long int) ((((_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) var_16);
            }
        } 
    } 
    var_30 |= ((/* implicit */unsigned short) var_8);
}
