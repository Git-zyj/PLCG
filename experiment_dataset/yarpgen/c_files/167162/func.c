/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167162
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_0 [i_0]))));
        var_16 = ((/* implicit */_Bool) (-(var_13)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)4)), (13319182510757947084ULL)));
        var_17 &= ((unsigned short) 5127561562951604532ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 -= ((/* implicit */unsigned long long int) ((arr_2 [i_1]) ^ (((/* implicit */int) (_Bool)1))));
            var_19 *= ((/* implicit */unsigned short) arr_3 [i_1] [(unsigned short)0]);
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_20 *= arr_3 [2U] [(_Bool)1];
        var_21 ^= ((/* implicit */unsigned short) min(((+(13319182510757947083ULL))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)0)))))))));
    }
    var_22 = 13319182510757947100ULL;
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) (~(5127561562951604537ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) min((min((((/* implicit */int) (unsigned char)0)), (arr_13 [i_5]))), (arr_13 [i_4 + 3])));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [2U]);
                var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) var_14)), ((~(((/* implicit */int) arr_14 [i_4] [i_4 - 2] [i_5 - 1]))))));
                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_17 [i_4] [i_5 - 1] [(_Bool)1] [i_6])))), ((-(((/* implicit */int) (_Bool)1)))))))));
            }
        }
        var_28 &= ((/* implicit */unsigned short) 13319182510757947084ULL);
    }
    var_29 = ((/* implicit */unsigned char) min(((unsigned short)50309), (((/* implicit */unsigned short) var_12))));
}
