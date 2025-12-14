/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162785
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) max((8068644796855237647ULL), (10378099276854313978ULL)));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!((_Bool)0))))))) & ((~(8068644796855237655ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) min((((/* implicit */int) (short)32754)), (2147483647)))) ? (((((/* implicit */_Bool) ((int) arr_3 [i_0]))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((12773534333257621976ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31664)))))))) : (var_5));
                        arr_14 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                        arr_15 [i_0] = ((/* implicit */_Bool) ((unsigned int) (short)7495));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7504)) ? ((+(0))) : (((/* implicit */int) (_Bool)1))))) ? ((-(((((/* implicit */_Bool) -1043852290)) ? (434165378U) : (((/* implicit */unsigned int) 1710723743)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (335282355U)))) ? (189891869) : (((/* implicit */int) var_12))))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(-189891869)));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_4))));
}
