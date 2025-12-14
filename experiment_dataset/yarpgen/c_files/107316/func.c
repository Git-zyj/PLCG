/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107316
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) - (18446744073709551609ULL)))))))) < (((((((/* implicit */long long int) arr_3 [i_0])) ^ (var_9))) - (((/* implicit */long long int) ((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) var_5))))))))));
                    var_11 += ((/* implicit */long long int) ((((((/* implicit */int) ((-2520167479379615770LL) <= (-2520167479379615779LL)))) << (((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) var_5)))))) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 2520167479379615770LL))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8))))))))));
                }
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_12 = (i_0 % 2 == zero) ? (((/* implicit */int) ((((((2520167479379615770LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-32753))))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) & (arr_2 [i_1] [i_0])))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((var_0) > (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_2)))))))))))) : (((/* implicit */int) ((((((2520167479379615770LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-32753))))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) & (arr_2 [i_1] [i_0])))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((var_0) > (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_2))))))))))));
                    var_13 += ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) / (-22LL))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152))) * (arr_3 [i_0])))))) / (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) ^ (var_6))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_1))))))))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1] [i_0]))))) * (((((/* implicit */int) (unsigned char)75)) >> (((arr_8 [i_3] [(_Bool)1] [i_1] [i_1]) - (1956837729U))))))) <= (((((/* implicit */int) ((390007710U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))) - (((((/* implicit */int) arr_7 [(unsigned short)0] [i_1] [i_1] [16U])) * (((/* implicit */int) var_7)))))))))));
                }
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_2))))) * (((16431674180190923165ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)625))) / (9223372036854775807LL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_2)) && ((_Bool)0))) || (((((/* implicit */_Bool) 1487282511)) || (((/* implicit */_Bool) var_9)))))) && (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1)))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))))));
}
