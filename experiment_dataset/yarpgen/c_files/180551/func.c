/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180551
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_10 += ((/* implicit */unsigned long long int) (((_Bool)0) ? (0) : (((/* implicit */int) (_Bool)0))));
        var_11 -= (-(((/* implicit */int) (_Bool)1)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (865603170))))));
        var_13 = ((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_1 + 1]);
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (~(3417399895U)))) | (arr_10 [i_1 + 1] [i_1] [i_3 + 3] [i_3 + 3]))), (7529349278456911962ULL)));
                        var_16 = ((/* implicit */unsigned short) 9360110208043622192ULL);
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned char)254)), ((-(((/* implicit */int) arr_9 [(unsigned short)15] [i_4] [1LL] [18ULL])))))) | (((/* implicit */int) (signed char)106)))))));
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2896467407683786046LL)) < (max((7529349278456911973ULL), (((/* implicit */unsigned long long int) (unsigned short)55627))))));
                        var_19 += ((/* implicit */signed char) max((((/* implicit */short) (signed char)45)), ((short)25271)));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(10917394795252639655ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [2LL] [(unsigned short)6])) : (min((((9086633865665929407ULL) % (((/* implicit */unsigned long long int) arr_5 [11ULL])))), (((/* implicit */unsigned long long int) arr_5 [i_1])))))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_5] [(unsigned short)16])) + (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1] [i_1]))));
            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [(unsigned short)4] [(unsigned char)8] [i_5] [i_1]))));
            var_23 += ((/* implicit */unsigned long long int) arr_9 [i_1 - 2] [i_5] [(unsigned short)5] [i_5]);
        }
    }
    var_24 = ((/* implicit */unsigned char) var_2);
}
