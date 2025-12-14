/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115574
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
    var_11 = ((/* implicit */signed char) ((var_1) / (8512515185430691801LL)));
    var_12 = ((/* implicit */long long int) max((var_12), (max(((+(8512515185430691801LL))), (((/* implicit */long long int) (unsigned short)40892))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_13 = ((((/* implicit */int) ((((/* implicit */long long int) var_8)) > (8512515185430691791LL)))) + (-1271614557));
                        var_14 = ((/* implicit */unsigned short) (((!((!(arr_5 [i_0] [(unsigned short)11] [i_2 - 1] [i_2]))))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) var_8))));
                        arr_9 [i_3] [i_2] [i_2] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 2])) ? (arr_3 [i_2 + 1] [i_2 + 2] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [i_2] [(signed char)17] [(unsigned char)10]))) * (((((/* implicit */_Bool) arr_8 [13U] [i_0] [i_0] [i_2] [i_3] [(_Bool)1])) ? (arr_2 [(signed char)16] [i_2] [(signed char)16]) : (arr_1 [i_1]))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                                arr_15 [(signed char)14] |= ((/* implicit */_Bool) ((int) (+(3841539533U))));
                                var_16 = ((/* implicit */unsigned long long int) arr_5 [i_5] [i_1] [i_2] [i_4]);
                                var_17 = ((/* implicit */unsigned short) ((1271614557) % (((/* implicit */int) ((((/* implicit */int) ((8512515185430691801LL) == (((/* implicit */long long int) ((/* implicit */int) var_4)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [(unsigned char)4] [i_5]))))))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */_Bool) 0)) ? (arr_14 [i_2 + 2] [i_2] [i_2] [i_2] [i_2 + 1] [10ULL] [i_2 + 1]) : (arr_14 [6ULL] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [(short)0] [i_2 + 2])))));
                }
            } 
        } 
    } 
}
