/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139629
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_6 [(signed char)21] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39360))))) | (((/* implicit */int) max((arr_4 [i_0 + 1]), (arr_4 [i_0 - 1]))))));
            var_20 = ((/* implicit */short) var_15);
        }
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((short) ((arr_0 [i_0 + 1]) % (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 2]))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)26165)))))));
        arr_7 [i_0] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) arr_3 [i_0] [19ULL])))) ? (((/* implicit */int) arr_5 [(signed char)18] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))), ((+(((/* implicit */int) arr_2 [(unsigned short)14] [i_0 + 1]))))));
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((((((/* implicit */long long int) ((/* implicit */int) (short)32761))) > (var_9))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : ((-(var_0))))), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) var_7))), (((((var_12) + (2147483647))) >> (((var_0) - (8277303192743799116LL)))))))))))));
    var_24 = var_13;
    var_25 *= ((/* implicit */unsigned char) ((unsigned short) var_19));
}
