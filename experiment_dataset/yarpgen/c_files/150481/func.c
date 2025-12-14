/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150481
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (min((((((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_2)))))) + (((((/* implicit */_Bool) 1547969542U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2746997754U))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (0) : (0))))))))));
                    var_14 = ((/* implicit */unsigned char) (~(max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((signed char) var_5)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 4)) / (arr_7 [i_0] [i_0] [i_2] [2] [i_3])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3])) ? (arr_6 [i_2] [i_1] [i_2] [6U]) : (var_4))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((1855298160), (-30)))))))))));
                        var_16 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) | (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_6 [i_2] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) min((-279459146), (((/* implicit */int) var_2)))))))));
                        var_17 = ((unsigned long long int) ((unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) (short)-29984)))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_4] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_5 [(signed char)2] [(signed char)2] [i_0])))) : ((~(((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_0]))))));
                        var_18 *= arr_0 [i_4 - 1];
                    }
                    var_19 = ((/* implicit */unsigned short) (-(min((((arr_10 [(unsigned short)9] [i_1] [i_1] [i_1] [5ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2])), (3LL))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_7);
}
