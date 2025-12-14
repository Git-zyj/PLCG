/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166965
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3379663745U)) || (((/* implicit */_Bool) arr_7 [i_0] [3U] [(_Bool)1] [i_0]))));
                            arr_13 [i_0] [(unsigned short)3] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [13ULL] [i_2] [(short)9] [i_0])) ? ((~(min((((/* implicit */long long int) 1553541843U)), (arr_3 [i_0]))))) : ((~(((arr_0 [i_0]) >> (((arr_3 [1]) + (6569545874383503730LL)))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_3])) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_6 [i_2] [i_1] [i_2]))) : ((~(min((arr_10 [i_2] [i_2] [i_0] [i_0] [i_2]), (arr_10 [3LL] [i_1] [3LL] [i_3] [i_2])))))));
                            var_16 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_3 [i_0]) % (((/* implicit */long long int) 915303551U))))) || (((/* implicit */_Bool) arr_3 [i_2])))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)114)), ((unsigned short)36998))))))));
                            var_17 += ((/* implicit */unsigned char) max((1665783307), (((/* implicit */int) ((arr_3 [i_1]) != (min((arr_6 [i_1] [i_2] [i_3]), (((/* implicit */long long int) (-2147483647 - 1))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) min((((/* implicit */long long int) var_5)), (min((arr_0 [i_0]), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0]))))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */short) (+(((min((((/* implicit */unsigned long long int) arr_8 [i_0])), (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) arr_10 [i_0] [(signed char)8] [i_0] [i_0] [12ULL]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) (unsigned char)89);
        arr_20 [(short)13] = ((/* implicit */unsigned char) var_3);
        arr_21 [(unsigned char)19] [(unsigned char)19] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4])))))) != (arr_18 [i_4])));
    }
    var_19 = ((/* implicit */int) var_15);
}
