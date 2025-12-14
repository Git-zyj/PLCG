/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177058
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
    var_19 = ((/* implicit */long long int) var_10);
    var_20 = ((/* implicit */int) min((var_20), (var_6)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((arr_1 [16ULL]), (arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min(((unsigned short)26272), ((unsigned short)65535)))), (min((arr_0 [i_0]), ((+(arr_0 [i_0])))))));
            arr_8 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_6 [i_0] [i_1 - 1] [i_0]), (arr_6 [i_0] [i_1 + 1] [i_0])))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))), (arr_0 [i_0])))));
            var_21 = ((/* implicit */unsigned char) max((max((arr_6 [i_1] [i_1 - 1] [i_0]), (((/* implicit */short) arr_5 [i_0] [i_1 - 1])))), (min((arr_6 [i_1 + 1] [i_1 - 1] [i_0]), (arr_6 [i_1 - 1] [i_1 - 1] [i_0])))));
        }
    }
}
