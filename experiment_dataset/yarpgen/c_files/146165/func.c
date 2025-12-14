/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146165
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
    var_11 |= ((/* implicit */unsigned int) ((((((/* implicit */int) (!(var_3)))) + (((/* implicit */int) var_2)))) / (max((((/* implicit */int) ((unsigned char) var_7))), (var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_10);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 1] [i_2] [i_3])), (var_1)))))))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((arr_0 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))))))));
                            arr_11 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1430247012U)) ? (((/* implicit */int) min((((short) -2LL)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))))));
                            var_15 &= ((/* implicit */int) arr_4 [i_0] [(unsigned short)14] [i_3 + 2]);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                arr_14 [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1])))), (((6245000049011685181ULL) << (((arr_3 [i_3] [i_3 + 2] [i_1 + 1]) + (6007349026045672040LL)))))));
                                arr_15 [i_3] [i_1] [i_3] [i_3] [i_3] = (!(var_4));
                                var_16 -= ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_4)))))), (var_10)));
                            }
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) var_8);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_1 + 1])))))));
                            var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [4] [i_5])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_6])))))))), (arr_16 [i_1] [i_1] [i_1] [i_1])));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                var_21 += ((/* implicit */unsigned char) min((((/* implicit */int) arr_13 [i_1] [i_1] [i_1 - 1] [i_1] [i_1])), (((((/* implicit */int) arr_16 [(_Bool)1] [i_1 - 1] [i_1 - 1] [(_Bool)1])) >> (((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1]))))));
            }
        } 
    } 
}
