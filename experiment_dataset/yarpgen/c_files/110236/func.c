/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110236
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
    var_12 = ((/* implicit */signed char) min((max((((/* implicit */int) (signed char)-57)), ((((_Bool)0) ? (-211326292) : (((/* implicit */int) (signed char)-57)))))), (((((/* implicit */int) var_1)) | (((((((/* implicit */int) var_11)) + (2147483647))) << (((((((/* implicit */int) var_0)) + (29752))) - (19)))))))));
    var_13 = ((/* implicit */_Bool) ((min((0LL), (((/* implicit */long long int) -1807264296)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_6)))))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_8) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) (((~(((/* implicit */int) var_11)))) + (min(((-2147483647 - 1)), (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) arr_1 [i_0]);
                        var_17 = ((/* implicit */int) var_8);
                        var_18 = (+(((/* implicit */int) var_7)));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((var_2) / (332119614))) % (arr_5 [i_4 - 3] [i_4 - 3] [i_4 - 2])));
                            arr_12 [i_1] [(_Bool)0] [i_4] [(short)0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-19149)) % (((/* implicit */int) arr_10 [i_4 - 1]))));
                        }
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(_Bool)1]))));
                    }
                } 
            } 
        } 
    }
}
