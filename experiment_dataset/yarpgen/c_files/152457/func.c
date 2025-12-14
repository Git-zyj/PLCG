/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152457
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
    var_11 *= (+(7117379544249738147ULL));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((max((((((/* implicit */_Bool) var_3)) ? (7117379544249738165ULL) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (~(var_5)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) var_10)), (((/* implicit */short) var_6)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) min(((~(arr_1 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : ((+(((var_4) << (((arr_0 [i_0] [i_0]) - (3073156262U)))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)122)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_13 [i_3] [i_3]))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1548268691U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) : (7992598610217854890ULL)));
                            arr_18 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7117379544249738147ULL))));
                        }
                        arr_19 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 133143986176ULL)) ? (((/* implicit */unsigned long long int) -6620531242234881511LL)) : (2788729725066095325ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1948810402U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? ((~(((/* implicit */int) arr_6 [i_3])))) : (max((arr_9 [i_1 + 1] [i_1] [i_1]), (arr_9 [i_1 + 1] [i_1] [i_1])))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2]))) / (arr_12 [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_9 [i_3] [i_2] [i_0]) : (arr_1 [i_0]))))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) ((long long int) min((((((/* implicit */unsigned long long int) var_7)) | (var_3))), (((/* implicit */unsigned long long int) var_4)))));
}
