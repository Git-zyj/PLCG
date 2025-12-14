/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104972
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) == (535007292681184821ULL))))))) & (((((/* implicit */int) max((var_3), ((unsigned char)153)))) ^ (((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 = ((((/* implicit */int) arr_3 [i_0] [i_0 - 1])) == (((/* implicit */int) (!(((arr_6 [i_0] [i_1] [i_2] [i_2]) >= (((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))));
                    arr_7 [i_0] [i_1] [(signed char)10] = ((/* implicit */signed char) arr_2 [i_0 + 1] [i_0 + 1] [i_0]);
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) (((+(((/* implicit */int) min((var_10), (((/* implicit */short) (_Bool)1))))))) >= (((/* implicit */int) (short)32318))));
                    var_21 = ((/* implicit */unsigned long long int) max((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]), (arr_2 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (~((~(((((/* implicit */int) (_Bool)1)) >> (((var_9) - (3453337284968585802ULL)))))))));
}
