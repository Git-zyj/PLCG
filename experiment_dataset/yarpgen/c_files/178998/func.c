/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178998
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1577785637)) ? (var_8) : (((/* implicit */unsigned long long int) 989900246U))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_15)), (var_0)))) : (min((((/* implicit */unsigned long long int) (unsigned short)26761)), (1029138983747969000ULL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) arr_7 [(unsigned char)14] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        arr_11 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (_Bool)1)), (var_17)))))), (min((((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_1 - 1] [i_1 - 1]))), (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) 254220429695152463LL)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) arr_7 [16LL] [i_0])))))) : (var_1))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [13LL])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) ((arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */int) arr_1 [i_0]))));
                            var_23 += ((/* implicit */unsigned char) ((unsigned short) var_2));
                        }
                    }
                    var_24 = (-(5164784902771667651LL));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (+(min((var_17), (((/* implicit */int) (unsigned char)43))))));
                                arr_23 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_0] = ((/* implicit */unsigned long long int) arr_21 [i_2] [i_1 - 1] [i_2] [i_6] [i_0]);
                                var_26 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_8 [(_Bool)1] [i_1] [(_Bool)1] [i_1 + 1]))))))));
                            }
                        } 
                    } 
                    arr_24 [5ULL] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_16 [12LL] [(_Bool)1] [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0] [i_2]))))) & (var_1)));
                }
            } 
        } 
    } 
}
