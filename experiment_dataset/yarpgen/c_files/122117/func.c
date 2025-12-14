/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122117
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
    var_11 = ((_Bool) ((_Bool) var_3));
    var_12 = ((_Bool) ((_Bool) var_4));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 &= max((-4828483615054372797LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_3 [i_2] [i_1] [i_0]))))) == (max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_2])))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((_Bool) min((((/* implicit */long long int) ((_Bool) arr_6 [i_0] [i_0]))), ((+(arr_6 [i_0] [i_0])))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_14 += ((/* implicit */_Bool) ((((/* implicit */int) ((max((var_0), (((/* implicit */long long int) arr_12 [(_Bool)1])))) < (((long long int) var_7))))) - (((/* implicit */int) arr_11 [i_3]))));
        arr_13 [(_Bool)1] [i_3] = ((/* implicit */long long int) (((!(arr_11 [i_3]))) ? (((/* implicit */int) (!(arr_11 [i_3])))) : (((/* implicit */int) arr_11 [i_3]))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_18 [i_4 - 1] = ((((/* implicit */int) (!((_Bool)1)))) > ((+((((_Bool)1) ? (((/* implicit */int) arr_14 [i_4] [i_4 - 1])) : (((/* implicit */int) var_7)))))));
        var_15 += (_Bool)1;
        var_16 += ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_14 [i_4] [i_4 - 1]))))), (min((((/* implicit */long long int) var_6)), (var_8))))), (arr_15 [i_4])));
    }
    var_17 = ((/* implicit */long long int) ((_Bool) var_9));
}
