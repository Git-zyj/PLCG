/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108330
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) > (((/* implicit */int) arr_0 [i_0 + 1])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                arr_15 [i_0] [19U] [(_Bool)1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 8791319817657129045LL);
                                var_12 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */short) var_9)))))) <= (((((/* implicit */_Bool) (unsigned char)162)) ? (2673594765183021940ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 16725121284972977274ULL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 6129420025727014138ULL)) ? (-588640382741012377LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22063)))))));
                                arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0 + 1] = ((/* implicit */signed char) max((((/* implicit */int) max(((short)21323), (((/* implicit */short) arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))), ((~(((/* implicit */int) (short)-29870))))));
                            }
                            var_14 = min(((unsigned char)224), (((/* implicit */unsigned char) (signed char)14)));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) 4114607236U))));
                            var_16 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_8)) + (min((((/* implicit */unsigned long long int) arr_14 [i_1] [i_0] [i_1] [i_1] [i_0])), (3291126505540609772ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_2 - 3] [i_3] [(_Bool)1] [i_2 - 3] [i_3] [i_3] [i_3]), (arr_13 [i_2 - 3] [i_2 - 2] [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)8] [i_2])))))));
                            arr_17 [i_0] [i_2 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_13 [i_0] [i_2 - 2] [i_0 + 1] [i_3] [(short)9] [i_0] [i_0 + 1]), (arr_13 [i_1] [i_2 + 1] [i_0 - 1] [i_0 - 1] [(unsigned char)5] [i_2 + 1] [i_3])))) + (((/* implicit */int) max((arr_13 [i_0 - 1] [i_2 + 1] [i_0 - 1] [i_1] [i_0] [i_3] [i_2 + 1]), (arr_13 [i_2] [i_2 - 2] [i_0 - 1] [i_3] [i_1] [i_0 - 1] [i_0 - 1]))))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_1] = ((/* implicit */short) var_9);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_4);
}
