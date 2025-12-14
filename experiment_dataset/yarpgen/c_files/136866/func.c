/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136866
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
    var_14 = ((/* implicit */long long int) (short)(-32767 - 1));
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-32752))))));
    var_16 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0 - 1] [i_0 - 1] [i_1] = ((((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_1]))) ? (((/* implicit */int) min(((short)-32751), ((short)32743)))) : (((/* implicit */int) ((_Bool) arr_3 [i_0]))))) / ((-(((/* implicit */int) ((_Bool) (short)-32753))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) arr_6 [i_3] [i_0]);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_3))));
                    }
                } 
            } 
            arr_11 [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_7 [19] [i_1] [i_0] [i_0])), (var_8))))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)-32751))) : (((arr_4 [i_0] [i_0 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(short)15])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) (+(var_10)))))))));
        }
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_22 [i_0] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))) ^ (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        arr_23 [(unsigned short)3] = arr_6 [i_0 - 1] [i_0 - 1];
                    }
                } 
            } 
            arr_24 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) -1);
        }
        var_19 -= ((/* implicit */short) max((((arr_21 [i_0] [i_0]) >> (((((/* implicit */int) arr_7 [10ULL] [i_0 - 1] [i_0 - 1] [i_0])) - (110))))), (((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_0 - 1]))));
    }
}
