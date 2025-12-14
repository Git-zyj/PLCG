/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137564
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) min((var_10), (((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) < (-1LL)))));
                var_11 = ((/* implicit */_Bool) var_7);
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        var_12 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-64))))) >= (arr_8 [i_2 - 2]))) ? (((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)58))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_2 [i_3 - 4])) : (arr_7 [i_3])))), ((+(arr_4 [i_0])))))));
                        arr_9 [i_0] [i_0] [i_1 - 3] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) <= (arr_5 [i_0] [i_1] [i_2 - 3] [i_3 - 1])))) << ((((~(24LL))) + (52LL))))));
                        var_13 = ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-59)), (-982266062)))) ? (((/* implicit */int) arr_6 [(unsigned short)18] [i_1] [i_2] [4])) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_3 [i_0 + 3])))), (((((/* implicit */_Bool) (signed char)-65)) || (((/* implicit */_Bool) var_5))))))));
                    }
                    for (int i_4 = 3; i_4 < 22; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0 - 3])), (min((((/* implicit */long long int) ((arr_8 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_2] [i_4])))))), (arr_4 [19U])))));
                        var_15 = ((/* implicit */unsigned int) ((max((arr_0 [9] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) - (((((/* implicit */int) arr_10 [i_4 - 2] [i_0] [i_4 + 2] [i_4])) | (arr_7 [i_0 + 3])))));
                        var_16 -= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [(unsigned short)14] [i_2] [(_Bool)1]))) : ((~(arr_8 [i_4]))))));
                    }
                    var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) ((short) max((var_6), (((/* implicit */unsigned short) var_3))))))))));
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1 + 2] [i_0] [i_0 + 2] [i_0]))));
                }
                arr_12 [i_0] = ((/* implicit */unsigned int) (-(min(((~(var_1))), (((/* implicit */unsigned long long int) ((arr_4 [i_1]) + (1120289584530330130LL))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((unsigned short) ((int) (!(((/* implicit */_Bool) var_8))))));
    var_20 = ((/* implicit */unsigned short) var_7);
}
