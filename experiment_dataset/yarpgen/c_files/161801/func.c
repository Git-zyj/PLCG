/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161801
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
    var_11 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = (-(((((/* implicit */_Bool) (short)32136)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21681))))))))) ? ((-(arr_0 [i_0]))) : (((/* implicit */int) (((!(((/* implicit */_Bool) (short)-9085)))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21681))) : (arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0])))) >= (((((/* implicit */_Bool) (short)21675)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20246))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9056)) ? (408016146U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9085)))))) || (((/* implicit */_Bool) (+(arr_1 [i_0]))))))));
        arr_4 [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) << (((((unsigned long long int) arr_1 [i_0])) - (3960542190ULL)))))) ? (((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9085))) <= (arr_1 [i_0])))))) : (((((/* implicit */_Bool) ((((arr_0 [i_0]) + (2147483647))) << (((((((unsigned long long int) arr_1 [i_0])) - (3960542190ULL))) - (18446744073383152333ULL)))))) ? (((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9085))) <= (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_1])), (4294967293U)))) ? (min((arr_10 [i_1] [i_1]), (((/* implicit */int) (short)9077)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4U)))))))))));
                    var_14 = ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (short)13511))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((min((((/* implicit */int) arr_7 [i_0] [i_0])), (arr_10 [i_0] [i_0]))) + (2147483647))) << (((((/* implicit */int) arr_7 [(_Bool)1] [i_0])) - (5017)))))) ? (arr_10 [i_0] [i_1]) : (((/* implicit */int) ((18200238327537949580ULL) == (((/* implicit */unsigned long long int) 197118132)))))));
                    arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2])), (arr_1 [i_0])))) ? ((~(arr_8 [i_0] [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) arr_10 [i_0] [i_2]))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_2] [i_0])))) : (max((((/* implicit */unsigned int) var_10)), (3886951158U)))))) ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 869894757)) ? (((/* implicit */int) (short)32421)) : (arr_0 [i_0]))))));
                }
            } 
        } 
    }
}
