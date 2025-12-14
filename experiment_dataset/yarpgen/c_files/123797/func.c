/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123797
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
    var_11 = max((var_6), (max((var_6), ((~(((/* implicit */int) (signed char)-105)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) max((((arr_14 [(_Bool)1] [16ULL] [i_1] [i_2 - 2] [i_4 - 3]) % (min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_2] [i_1] [i_4])), (arr_8 [i_0] [i_1] [i_2] [i_4]))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) (signed char)82))), (((((/* implicit */_Bool) 2692093872U)) ? (1018826163884230248LL) : (((/* implicit */long long int) 3584U)))))))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_3] [i_4 + 2]), (arr_7 [i_0] [14ULL] [(_Bool)1])))), (arr_13 [i_0] [i_1] [11U] [i_0] [i_4 - 2]))))));
                                var_14 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                                var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_3] [i_4 + 2] [i_1]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [18ULL] [i_1] [i_2] = ((/* implicit */long long int) ((_Bool) max((((/* implicit */short) var_2)), (min((((/* implicit */short) arr_7 [i_2] [i_1] [i_0])), (arr_12 [i_0] [i_1] [i_2 - 2] [i_2] [i_2]))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (1859793456598027035ULL)))) && (((((/* implicit */int) max((((/* implicit */short) arr_0 [i_1] [i_1])), (arr_12 [i_2 - 2] [i_1] [i_1] [(unsigned char)15] [i_0])))) != (((/* implicit */int) ((signed char) var_1))))))))));
                }
            } 
        } 
    } 
}
