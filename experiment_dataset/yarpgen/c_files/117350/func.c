/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117350
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? ((-(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_12 *= ((/* implicit */unsigned int) ((unsigned char) (unsigned char)0));
                        arr_10 [i_0] [i_2] [(unsigned short)1] [i_0] [i_0 - 1] = var_9;
                        arr_11 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_3])) : ((+(((/* implicit */int) arr_6 [i_1] [i_3]))))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_9))));
                        var_14 = ((/* implicit */_Bool) max((var_14), ((!(((/* implicit */_Bool) ((arr_1 [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_2 [i_3])))))))));
                    }
                } 
            } 
        } 
        var_15 = ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))));
        arr_12 [i_0 - 1] = ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_4 [i_0]))))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1]))));
    }
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        arr_16 [(unsigned short)6] = ((/* implicit */unsigned char) ((arr_14 [i_4 + 3] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [(signed char)14] [(signed char)14] [(signed char)14] [i_4] [(_Bool)1] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))))))))))));
        arr_17 [(unsigned char)0] [i_4] = ((/* implicit */unsigned short) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
        var_17 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_15 [i_4 + 1])))))), (((int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
        var_18 = arr_7 [12U] [(_Bool)1] [(unsigned char)10] [i_4 + 3];
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4])) || ((!(((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_10)))))));
    }
    var_20 = ((/* implicit */unsigned short) var_6);
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ^ (var_9)))));
}
