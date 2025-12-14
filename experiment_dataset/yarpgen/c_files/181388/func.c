/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181388
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
    var_15 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)13235)), (var_13))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_3 [i_1] [i_1] [i_1]) < (arr_3 [i_0] [i_0] [i_1]))) ? (((((/* implicit */_Bool) (unsigned short)46910)) ? (-9223372036854775805LL) : (((/* implicit */long long int) 1249944623)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (648087374) : (-1)))))))));
            arr_6 [i_0] [i_0] [i_1] = ((min((((/* implicit */int) ((287225987U) != (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))))), ((+(((/* implicit */int) arr_1 [(short)7])))))) / ((-(max((arr_2 [i_0] [i_1 - 1]), (((/* implicit */int) (_Bool)1)))))));
            arr_7 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_9 [i_3] [i_1] [i_0]))));
                        arr_12 [i_3] [i_1 + 1] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */short) ((unsigned short) (+(6897140725583279301LL))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_4 = 4; i_4 < 23; i_4 += 1) 
    {
        var_18 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned short)52525))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)254))) < (11U)))) : (((/* implicit */int) var_8))))), (arr_13 [i_4])));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_14))));
    }
    var_20 *= ((/* implicit */unsigned short) var_8);
    var_21 = ((/* implicit */unsigned short) max((((((-1294191905) == (((/* implicit */int) (short)21194)))) ? (((/* implicit */int) var_9)) : (852785988))), (((/* implicit */int) (short)-26368))));
    var_22 ^= ((/* implicit */unsigned short) var_10);
}
