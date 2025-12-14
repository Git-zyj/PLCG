/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116810
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (arr_0 [i_0] [i_0])));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) 2491293217U))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) (unsigned short)50769);
        var_13 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) ((unsigned int) arr_2 [i_1] [i_3]));
                        var_15 = (signed char)-96;
                        arr_14 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) (~(arr_12 [i_1])));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((int) arr_5 [i_1]));
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            arr_20 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_15 [i_6])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_5] [i_5] [i_6] [i_6] [i_6]), (((/* implicit */int) arr_5 [i_5]))))) || (((/* implicit */_Bool) 16777215))))) : ((+(((/* implicit */int) (_Bool)1))))));
            arr_21 [i_5] [i_5] [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_5] [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_9 [(_Bool)1]))) ^ (((/* implicit */int) arr_19 [i_6]))))) : (max((((/* implicit */unsigned int) arr_1 [i_5] [i_6])), (arr_3 [i_5]))));
        }
        arr_22 [i_5] = ((/* implicit */_Bool) min(((~((+(58350744))))), (((/* implicit */int) ((unsigned short) (_Bool)0)))));
    }
    var_17 = ((/* implicit */short) var_9);
}
