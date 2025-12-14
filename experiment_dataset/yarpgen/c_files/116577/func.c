/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116577
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) arr_3 [0U] [i_0] [0U]))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) 651872027);
                var_12 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_7))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
                var_13 |= ((/* implicit */unsigned char) (+(arr_0 [i_1])));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((!(arr_8 [i_0] [i_1] [i_1 + 2] [i_1 + 2]))) ? ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (((arr_8 [i_2] [i_2] [i_2] [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) : (((/* implicit */int) (short)32760)))) : (((/* implicit */int) arr_1 [i_1])))))))));
                    var_15 -= ((/* implicit */unsigned char) arr_3 [i_2] [i_1 + 2] [i_2]);
                    arr_9 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 502184897831930784LL))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (var_1) : (var_6)))), (var_2)))) && (((/* implicit */_Bool) ((((var_1) >= (var_5))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_2])) : (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) var_0)) : (var_5))))))));
                    var_17 = max((max((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2])), (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) * (((((/* implicit */int) var_0)) % (arr_0 [i_2])))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) (~(var_6)));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3 - 1] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3970500637U)) == (max((((/* implicit */unsigned long long int) 2147352576)), (max((15689784076834272650ULL), (((/* implicit */unsigned long long int) arr_8 [i_3 + 1] [i_4] [i_5] [i_3 + 1]))))))));
                                var_20 = ((/* implicit */long long int) var_10);
                                var_21 -= ((/* implicit */int) var_0);
                                var_22 = ((/* implicit */unsigned char) max((max((2147483647), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (max((((((/* implicit */_Bool) (unsigned short)65172)) ? (1227664391) : (-203671637))), (max((arr_0 [i_7 - 1]), (((/* implicit */int) (short)32767))))))));
                                var_23 -= ((((/* implicit */_Bool) arr_14 [(_Bool)1])) ? (((((/* implicit */_Bool) (short)-16261)) ? (-1LL) : (((/* implicit */long long int) arr_20 [i_6] [(unsigned char)4] [i_4] [(unsigned char)4] [i_3])))) : (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) arr_7 [i_3] [i_4] [i_3])), (var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) (+(max((((/* implicit */int) var_8)), ((+(var_9)))))));
}
