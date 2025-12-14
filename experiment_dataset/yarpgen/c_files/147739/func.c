/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147739
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((unsigned long long int) ((short) -1074508161)));
        arr_4 [i_0] [i_0] = -1074508160;
        arr_5 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) -1074508143)) ? (1074508164) : (1074508168)))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((unsigned int) -1074508184)) ^ (((/* implicit */unsigned int) (+(1074508172)))))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_1])), (var_6))))));
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1]);
            var_12 *= ((/* implicit */short) min(((~(((/* implicit */int) var_3)))), (min((-1074508170), (((/* implicit */int) var_1))))));
        }
        for (short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_19 [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_3])) : (1074508161)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_1] [i_3])) ^ (1074508160)))) : (max((arr_17 [i_1] [14LL] [i_1]), (((/* implicit */long long int) 1074508162)))))), (((/* implicit */long long int) var_1))));
            var_13 = ((/* implicit */long long int) var_1);
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 20; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_24 [i_4] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((short) ((((/* implicit */_Bool) -1074508170)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_3] [i_4]))))))));
                        arr_25 [i_4] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((short) (~(-1074508168))));
                        arr_26 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [(short)6] [i_1] [i_4 - 1]))))) ? (-1074508168) : ((-(max((1074508155), (((/* implicit */int) var_10))))))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (~(max(((+(1074508156))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                arr_33 [i_7] = ((/* implicit */short) (~(((/* implicit */int) ((short) var_3)))));
            }
        } 
    } 
}
