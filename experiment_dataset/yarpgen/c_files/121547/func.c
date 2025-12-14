/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121547
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((unsigned short) 0U)))))), (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) var_10)), (-2757570807411371540LL))) : (((/* implicit */long long int) max((4294967285U), (((/* implicit */unsigned int) var_12)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */signed char) (short)23015);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned short)15360))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] [i_2 + 1] [(unsigned short)16] [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)15360))));
                        arr_13 [i_4 - 1] [(unsigned char)8] [(unsigned char)8] [3U] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) * (((arr_3 [15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) var_9))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (0U) : (((((/* implicit */unsigned int) -619971181)) | (0U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((arr_4 [i_4]) | (var_13)))))) : (((unsigned long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_10 [i_4] [i_2] [i_3] [i_4 + 1])))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            arr_17 [(_Bool)1] [i_2] [(_Bool)1] [4] [i_2 - 1] [i_2] = ((/* implicit */short) min(((~(-3901344271313520559LL))), (2757570807411371511LL)));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((max((13510798882111488LL), (max((((/* implicit */long long int) (_Bool)1)), (2757570807411371512LL))))), (((/* implicit */long long int) (~(((unsigned int) 1885667317U))))))))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((/* implicit */long long int) (unsigned short)50180)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((var_0), (((/* implicit */long long int) var_12)))))))))));
                            var_23 *= ((unsigned int) var_12);
                            arr_18 [i_1] [i_2] [i_3] [(short)1] [(short)1] [i_5 - 1] = ((/* implicit */short) (unsigned short)50200);
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((/* implicit */int) ((signed char) (_Bool)1))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6] [i_6] = var_14;
        var_25 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (1LL)))) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6])) : ((+(var_15))))), (-1127590964)));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 2652523853U)), (var_1)));
    }
}
