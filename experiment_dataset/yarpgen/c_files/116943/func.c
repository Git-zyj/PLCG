/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116943
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (1216507700U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_1] [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(1216507689U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)5427)) / (((/* implicit */int) (unsigned short)3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_14), (arr_9 [i_3 + 1] [i_1 + 3] [i_2] [i_3]))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) (short)-5427))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) / (5133183142683236185LL)))))));
                            var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)138))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)23245))))) ? (((/* implicit */int) var_10)) : (531683267)));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_0] [i_1]))) < (4294967288U)))))) : (((/* implicit */int) max((arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 3]))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-5427)) : (((/* implicit */int) var_8)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1635369512)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)255))))) > ((~((+(var_7)))))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) -5133183142683236185LL))));
}
