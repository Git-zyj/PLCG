/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179071
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0])))))))));
                arr_4 [i_1 + 1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (short)-15598)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_0] [i_0]))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_2 [i_0] [i_1])) - (47224)))))) ? (((((/* implicit */_Bool) (unsigned short)10172)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (unsigned short)49167)))) : ((+(((/* implicit */int) var_15))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -446080171)) ? (2926683395U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [i_3])) & ((~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_3])) != (1445386728))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (unsigned char)40);
                            arr_13 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [i_3] [i_2])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_11 [i_3]) : (((/* implicit */long long int) arr_10 [i_3] [i_3] [i_5])))) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((arr_8 [i_2] [i_3]) - (((/* implicit */unsigned long long int) arr_12 [i_2] [i_4] [i_2]))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_6 = 4; i_6 < 9; i_6 += 2) 
                            {
                                arr_17 [i_2] [i_3] [i_4] [2ULL] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_8 [i_2] [i_3]))) < (((/* implicit */unsigned long long int) 2494153441U))));
                                arr_18 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) arr_10 [i_2] [i_4] [i_4]);
                                var_22 = ((/* implicit */unsigned short) arr_7 [i_2]);
                                var_23 = (-(((/* implicit */int) (_Bool)1)));
                                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            }
                            for (signed char i_7 = 4; i_7 < 12; i_7 += 2) 
                            {
                                arr_21 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((int) min((((/* implicit */int) arr_7 [i_2])), (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_20 [i_7] [i_5] [i_4] [i_3] [i_2])))))));
                                arr_22 [i_2] [i_2] [i_2] [6U] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_5] [i_7] [i_2])) | (((/* implicit */int) (short)26550)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                                var_25 = ((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)1))))));
                            }
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) arr_5 [8] [i_5]))))) ? ((+(((/* implicit */int) arr_14 [i_2] [(_Bool)1] [10LL] [12] [i_5] [i_5] [i_4])))) : ((~(((/* implicit */int) (short)8192))))))) : (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (65535ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_23 [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned short) arr_8 [i_2] [i_2])))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_10);
    var_28 = ((/* implicit */unsigned char) var_7);
}
