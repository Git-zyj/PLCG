/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153677
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) % (((/* implicit */int) (_Bool)1))))) > (min(((-(var_12))), (((/* implicit */unsigned int) var_14)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), ((unsigned char)78)))) ? (((/* implicit */int) max(((_Bool)1), (arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0])))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) || (((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(_Bool)1] = var_2;
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */_Bool) 16870309413240360278ULL);
                    arr_12 [i_1] [i_2] [i_1] [i_3] = (((~((+(((/* implicit */int) (unsigned char)177)))))) <= (((/* implicit */int) var_8)));
                    var_21 = 11077537314547872129ULL;
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)));
        var_23 = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]);
    }
}
