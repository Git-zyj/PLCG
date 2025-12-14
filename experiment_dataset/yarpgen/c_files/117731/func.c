/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117731
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
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 3] [i_1 + 2]))))))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_12)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_14))) - (54340U)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_3] [(unsigned char)0] = ((/* implicit */long long int) (unsigned char)176);
                            var_19 = ((/* implicit */int) (+(min((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_16)))))));
                            arr_12 [i_0] [i_2] [i_2] = (+(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))) : (var_1))), (((/* implicit */unsigned int) ((short) arr_5 [i_1 - 1] [(unsigned char)16] [i_4]))))));
                        }
                        for (unsigned char i_5 = 4; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            arr_15 [i_0] [i_2] = ((/* implicit */short) var_17);
                            arr_16 [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (((((-(var_13))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_8 [i_5 + 2] [i_2] [i_0] [i_2] [12])) : (var_15))))) : (arr_1 [i_3] [i_3])));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 4; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */unsigned int) var_8);
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_17 [i_3] [6LL] [i_0 - 1] [6LL] [i_0]))));
                        }
                        arr_20 [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (+(((arr_3 [i_1 + 3] [i_0 + 2] [i_0 + 2]) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) != (arr_8 [i_0 + 2] [(signed char)0] [i_1 - 1] [(signed char)0] [i_3])))) | (((/* implicit */int) max((((/* implicit */short) (unsigned char)174)), (var_10))))));
                    }
                    var_23 = var_14;
                    var_24 = ((/* implicit */long long int) (unsigned char)159);
                    var_25 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_2])) == (((/* implicit */int) (unsigned char)81)))))) : (((long long int) (signed char)56)))) + (max((var_5), (((/* implicit */long long int) arr_13 [i_1 + 3] [(_Bool)1] [i_2] [(unsigned char)6] [(unsigned char)6]))))));
                }
            }
        } 
    } 
    var_26 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
}
