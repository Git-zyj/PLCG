/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139605
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_0 [i_3] [i_2])))))) * (max((((/* implicit */long long int) arr_7 [(unsigned short)6] [i_2] [3LL])), (63LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (unsigned char)9))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [8U] [i_1] [9U])) && (((/* implicit */_Bool) -4508456992414470149LL))))))))) : (((((/* implicit */_Bool) max((9007197107257344LL), (((/* implicit */long long int) arr_2 [2]))))) ? (max((arr_6 [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [(unsigned short)2] [i_1] [i_1])) | (((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) >= (arr_8 [(unsigned short)3] [i_1] [i_2] [i_3])))))) / (((/* implicit */int) (unsigned short)38775))));
                            var_15 ^= ((/* implicit */unsigned short) arr_8 [i_2] [i_2] [i_1] [i_0]);
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]))))), (arr_6 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) ((arr_0 [i_0] [i_1]) >= (arr_0 [(unsigned char)1] [i_2])))) : (((((/* implicit */_Bool) ((481815218) ^ (2064111909)))) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1]) : (((-2014843553) | (57519846)))))));
                            var_17 = ((/* implicit */_Bool) arr_8 [(unsigned short)15] [i_1] [i_2] [i_1]);
                        }
                    } 
                } 
                var_18 = ((((/* implicit */int) arr_1 [i_0])) / (((((((((/* implicit */_Bool) (unsigned short)65065)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))) + (2147483647))) << (((((min((((/* implicit */long long int) -2014843564)), (arr_8 [i_0] [i_0] [i_0] [i_1]))) + (2014843582LL))) - (18LL))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (max((max((((/* implicit */unsigned int) var_8)), (var_6))), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_2))));
}
