/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144449
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_9)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min(((short)16376), (((/* implicit */short) var_8)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_12 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) 72053195991416832LL);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) (signed char)-1);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((max((arr_13 [i_4 + 1] [i_4 + 1] [i_3] [i_2]), (-72053195991416833LL))) > (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                        arr_16 [i_4] [i_2] [i_3] [i_4 + 1] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))), ((!(((/* implicit */_Bool) (+(var_10))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = arr_9 [i_1];
    }
}
