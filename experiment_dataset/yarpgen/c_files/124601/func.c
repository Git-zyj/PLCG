/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124601
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_14)) + (((unsigned long long int) var_3))));
                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_8) : (var_8)))) & (min((3876239668U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (var_14))))))));
                var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                /* LoopSeq 4 */
                for (short i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    var_18 -= ((/* implicit */_Bool) var_10);
                    arr_9 [i_0] [i_1] [(_Bool)0] [i_1] = max(((~(var_11))), (((int) -1691137138)));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) -1394171969);
                                var_20 *= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-6)) & (1747037631)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_14)) : (17U))))))))))));
                }
                for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_23 [i_5] [i_6] [i_5] [i_5] [(short)17] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) -1109183075)) ? (var_10) : (var_7))), ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (var_11))))))));
                                arr_24 [i_6] [i_6] [i_5] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) (short)7397);
                            }
                        } 
                    } 
                    arr_25 [i_5] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) | ((~(var_13)))));
                }
                for (int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    arr_28 [0U] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-4529)))))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775807LL)))));
                    arr_29 [i_0] [(short)12] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_1))))));
                }
                for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (int i_11 = 2; i_11 < 17; i_11 += 3) 
                        {
                            {
                                var_22 = var_1;
                                arr_40 [i_11] = ((/* implicit */unsigned int) (+(min((var_5), (var_11)))));
                                var_23 *= ((/* implicit */long long int) var_9);
                                arr_41 [i_0] [i_0] [i_10] [i_10] [(short)1] = ((int) var_8);
                            }
                        } 
                    } 
                    arr_42 [i_9] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (~((-(4U))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_0))));
                    var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) 1653894540)) ? (var_6) : (((/* implicit */int) var_3)))) + (((/* implicit */int) min(((short)22334), ((short)26755))))));
                }
            } 
        } 
    } 
}
