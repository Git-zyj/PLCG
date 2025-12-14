/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167687
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_2] [(unsigned short)2] [i_2] [i_3] [i_3 + 2] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_0 [i_0]))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(2438018906U)))))) ? (((/* implicit */long long int) (~(4003914646U)))) : (max((arr_6 [i_0] [i_0] [i_1] [i_1] [i_0] [(unsigned short)10]), (((/* implicit */long long int) arr_0 [i_3 + 1]))))));
                        var_20 = ((/* implicit */unsigned char) ((int) ((unsigned int) max((arr_3 [i_1] [i_2] [i_3]), ((unsigned short)60323)))));
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((-3802763020943794044LL), (((/* implicit */long long int) (unsigned char)15))))) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))))))));
        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-4418))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) 4003914646U)) : (arr_6 [(_Bool)0] [14U] [i_0] [i_0] [6U] [i_0]))))), (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)120)) | (((/* implicit */int) (unsigned short)2283)))))))));
        arr_10 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(unsigned char)12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        arr_11 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
    }
    var_22 &= ((/* implicit */short) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1992756967U)))) : (var_6)))));
    var_23 += ((/* implicit */unsigned int) (-((~(min((((/* implicit */long long int) (unsigned char)0)), (var_17)))))));
    var_24 &= ((/* implicit */long long int) var_3);
}
