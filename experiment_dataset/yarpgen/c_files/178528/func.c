/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178528
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) % (var_3))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_5 [i_2 - 1] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((-(((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_5))))))));
                            var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_1 [i_0])), (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : ((~(12097512876638089944ULL)))));
                    arr_15 [i_0] [i_0] [i_1] [i_4] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))));
                }
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) arr_3 [i_6] [i_6]);
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) var_11)))))))))));
                            }
                        } 
                    } 
                    var_23 &= min((min((arr_16 [i_5 + 1]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_16)));
                }
                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_16))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1]))))) != (((/* implicit */int) arr_0 [i_0]))))) : (arr_13 [i_0] [i_1] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            {
                arr_29 [i_9] = ((((/* implicit */long long int) 342171275)) != (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_25 [i_8] [i_9])), (var_5))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_9]))) : (arr_28 [i_8]))))));
                var_26 ^= ((/* implicit */unsigned char) min((((/* implicit */int) min((min(((unsigned char)1), ((unsigned char)1))), (max((var_12), (((/* implicit */unsigned char) arr_25 [i_8] [i_8]))))))), (((((/* implicit */int) arr_24 [(unsigned short)14] [i_8 - 1])) ^ (((/* implicit */int) arr_24 [(unsigned char)11] [i_8 - 1]))))));
                arr_30 [i_8] = ((/* implicit */unsigned char) var_0);
                arr_31 [i_8] = ((/* implicit */int) ((_Bool) (signed char)-93));
            }
        } 
    } 
    var_27 = min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))))));
}
