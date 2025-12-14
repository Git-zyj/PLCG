/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155204
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) < (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (-4099614065326376513LL)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(10194878221202136084ULL)));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551613ULL)) && (((/* implicit */_Bool) 8795556151296ULL))))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) (((~(((/* implicit */int) ((signed char) (_Bool)0))))) > ((+(((/* implicit */int) ((signed char) arr_11 [i_2])))))));
                    arr_16 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) -4099614065326376513LL)) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((_Bool)0), ((_Bool)1)))), (-2000013230004496351LL))))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (_Bool)0))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51076))))))))));
        arr_18 [i_1] = ((/* implicit */unsigned int) (short)-27000);
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_22 [i_4] [i_4] = min(((+(((arr_19 [i_4] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))))))), (((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) != ((+(arr_19 [i_4] [i_4])))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((signed char) ((_Bool) arr_19 [i_4] [i_4]))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_14 = ((/* implicit */_Bool) ((((arr_13 [i_5] [i_5 - 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5 - 1]))))) | (min((((/* implicit */long long int) arr_11 [i_5])), (arr_13 [i_5] [i_5 - 1])))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_0))));
    var_16 = (~(min((0ULL), (((/* implicit */unsigned long long int) -1)))));
}
