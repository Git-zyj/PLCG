/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118059
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [15U] [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (280548937U))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_0 [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) max((max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_11))));
                var_14 = ((/* implicit */int) var_3);
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    var_15 -= ((/* implicit */int) (_Bool)1);
                    var_16 = min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 0)), (var_7)))))), (max((max((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (arr_4 [i_0 + 1])))))));
                    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_13)), (var_2))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                    arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_2 - 2] [0] [i_1] [i_0])) : (((int) var_13))))) : (arr_3 [i_0 + 1])));
                }
                for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) <= (var_7)))), (max(((unsigned short)52005), (((/* implicit */unsigned short) (signed char)114))))));
                                var_19 = ((/* implicit */int) (+(var_10)));
                                var_20 *= ((/* implicit */unsigned char) arr_4 [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_25 [16U] [16U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_7 + 1] [i_1 - 2])), (arr_1 [(short)10])))) && (((/* implicit */_Bool) max((arr_1 [0LL]), (((/* implicit */unsigned long long int) var_13)))))));
                                var_21 = ((/* implicit */long long int) arr_17 [i_7 + 1]);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) (+(-500047554))))))) ? (1599726752) : (((((/* implicit */_Bool) 9072986631638669232LL)) ? (((/* implicit */int) (short)-2877)) : (((/* implicit */int) (signed char)75))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_28 [(short)11] [i_0] = ((((/* implicit */int) ((var_0) >= (arr_10 [9ULL] [i_1] [i_1] [2])))) % (((/* implicit */int) ((short) (_Bool)1))));
                        arr_29 [i_0] [i_1 - 2] [i_3] [i_8] = ((/* implicit */int) ((long long int) ((arr_3 [i_0 + 1]) == (((/* implicit */unsigned long long int) var_7)))));
                    }
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_12);
}
