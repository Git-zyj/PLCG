/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16546
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)165)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) arr_9 [12U] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (unsigned char)50)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 6U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_0] [i_1] [i_0])) ? (var_1) : (var_9)))))))));
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) ((1157544055) < (var_1))))) - (arr_6 [i_3] [i_1] [i_2 + 1] [i_3] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)211))))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [i_0]) + (7U)))) ? (((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0])) | (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 710745001U)) ? (4294967289U) : (111060U))))));
        arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0] [7]), (4294967290U)))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) var_1))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) 710745020U))))), (max((arr_4 [i_0]), (((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967283U)))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_13 *= ((/* implicit */unsigned long long int) var_9);
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((-(((/* implicit */int) max((arr_0 [i_5]), (arr_0 [i_0]))))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17002396797396065715ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max(((+(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)3)))))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))))))))));
}
