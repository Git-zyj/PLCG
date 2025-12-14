/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175165
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
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(-1280379684)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35641)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)8] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (17686491252096531472ULL))))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_7);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] [(short)8] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35641))));
                    arr_11 [i_0] [(unsigned short)17] [i_0] = ((/* implicit */unsigned short) (-(-3340398503110606496LL)));
                    arr_12 [i_0] [16] [i_1 - 2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (arr_8 [i_2 - 3] [i_2] [i_1]))) ^ (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        var_21 *= ((/* implicit */unsigned int) arr_7 [i_3] [9]);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            arr_18 [17U] [i_0] [i_2] [i_3 - 2] [i_3] [i_4 + 1] = ((/* implicit */_Bool) var_2);
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_0] [i_3 + 1]), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) arr_16 [i_3 + 2] [i_2 - 3] [i_2 - 2] [i_1 - 3] [i_3 + 2] [i_3 + 2] [i_0])) : (760252821613020144ULL)))) ? (((arr_4 [i_2 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [i_2 - 3] [3LL] [i_2 - 1] [(unsigned char)14] [i_2 - 1] [i_2 - 3]))))));
                        }
                        var_23 = ((/* implicit */short) ((signed char) var_4));
                    }
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */int) 9223372036854775807LL);
                        var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_22 [i_1 - 3] [i_1 - 3] [i_1] [i_2 - 1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1])))))) ? (((/* implicit */unsigned long long int) 2147483647)) : (((arr_19 [(_Bool)1] [i_1] [i_2] [10ULL] [i_5] [i_5]) ^ (((/* implicit */unsigned long long int) arr_17 [(short)5] [i_1] [i_2]))))));
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) (unsigned short)37588);
    var_27 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14))) > (var_9))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4098449622292077326LL)) ? (((/* implicit */unsigned long long int) 1258643186U)) : (0ULL)));
        var_28 += (short)0;
        arr_26 [i_6] = ((/* implicit */short) (+((+(((/* implicit */int) arr_23 [i_6 + 1]))))));
    }
}
