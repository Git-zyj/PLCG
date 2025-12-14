/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158088
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 2891217007U)))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)30)) << (((max((((/* implicit */unsigned int) min((arr_2 [i_0]), (arr_2 [i_0])))), (min((1457092648U), (((/* implicit */unsigned int) (_Bool)1)))))) - (89U)))));
    }
    var_22 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) (short)21248))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_3])), (arr_3 [i_3]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)224)), (arr_11 [8ULL]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((unsigned char) (short)27216))), (arr_4 [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21237)) ? (((/* implicit */int) (short)-21234)) : (((/* implicit */int) (short)18830))))) ? ((~(2251799813652480ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30)))))));
                    arr_12 [(unsigned char)4] [(unsigned char)4] &= ((/* implicit */short) (-(((((/* implicit */int) var_5)) - (((((/* implicit */_Bool) (short)-26524)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_2 [i_1]))))))));
                    arr_13 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned short) (unsigned char)30)), (((/* implicit */unsigned short) max((arr_4 [(short)7]), (((/* implicit */short) var_5)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60583))) : (-6032431964204205059LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_1] [i_1] [12])), ((unsigned char)20))))) : ((+(1379228911723454797LL))))) : (((/* implicit */long long int) min((1158387838U), (((/* implicit */unsigned int) (unsigned short)29571)))))));
                }
            } 
        } 
    } 
}
