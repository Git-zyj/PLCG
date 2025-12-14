/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167665
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max(((~(((((/* implicit */_Bool) (unsigned short)58222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (15797143401551195730ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)7313))))))))));
            arr_5 [i_0 - 1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0]))))), (max((var_3), (((/* implicit */unsigned short) (short)32767)))))))));
            var_15 = ((/* implicit */short) -1419196739);
        }
        for (short i_2 = 2; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0 - 1] [i_2 - 2] [i_2]))))), (min((((/* implicit */unsigned int) 2147483647)), (1409419368U)))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_17 *= ((signed char) -1397947201);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 4] [i_4 + 3])) ? (((/* implicit */int) arr_9 [i_0 + 3])) : (((/* implicit */int) var_7))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15102)))))) : ((-(arr_6 [i_0])))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */int) (short)32762)), (1419196729)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-24))))));
            var_20 = ((/* implicit */int) (-((~(arr_13 [(unsigned short)0])))));
            arr_17 [i_2] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), (arr_1 [(_Bool)1])))), (((((/* implicit */_Bool) arr_11 [14ULL] [i_0] [0ULL] [i_2 - 1])) ? (arr_0 [12] [(short)17]) : (((/* implicit */unsigned long long int) var_0)))))) > (((/* implicit */unsigned long long int) (~((~(-1232396954))))))));
        }
        arr_18 [i_0 + 3] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
    }
    var_21 = ((/* implicit */_Bool) var_7);
    var_22 = ((/* implicit */signed char) var_11);
    var_23 = (_Bool)1;
}
