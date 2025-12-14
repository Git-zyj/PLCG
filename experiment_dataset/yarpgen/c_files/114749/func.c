/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114749
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)7] [i_1] [i_0] |= ((/* implicit */long long int) (signed char)0);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        var_11 *= ((/* implicit */short) (signed char)9);
                        var_12 += ((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_3 + 1]);
                        var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                        var_14 -= ((/* implicit */signed char) (unsigned char)251);
                    }
                    for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (signed char)0))))))), (arr_2 [i_0])));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)14))))) & ((~(arr_10 [i_4] [i_4] [(signed char)9]))))) : (((long long int) (unsigned char)11)))))));
                        var_16 = ((/* implicit */signed char) ((unsigned int) arr_5 [i_1]));
                    }
                    var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (arr_11 [i_0] [i_1] [i_2 + 1] [i_1]))))));
                    var_18 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53027)) >> (((/* implicit */int) (signed char)0))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */long long int) var_5);
}
