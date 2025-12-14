/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116891
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_1 [i_0]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_10)))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) >> (((1020727522) - (1020727504)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (1581208631U))))));
        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 14789748366280454302ULL)) && (((/* implicit */_Bool) var_3)))) && (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))));
        var_19 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) arr_2 [i_0])))) > (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_20 |= ((/* implicit */short) ((((/* implicit */int) ((arr_0 [i_0] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44542)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20993)) || (var_8))))));
            arr_10 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_13)))) & (((((/* implicit */int) arr_8 [i_1])) & (((/* implicit */int) arr_8 [i_1]))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_21 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) > (((/* implicit */int) arr_8 [i_0]))))) + (((((/* implicit */int) arr_8 [i_0])) + (((/* implicit */int) arr_8 [i_0]))))));
            arr_13 [i_0] [i_2] = ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_13)))) && (((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) (unsigned short)44542)))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21012)) + (((/* implicit */int) (_Bool)0))));
            arr_17 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_16 [i_3]))));
        }
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_17)) - (((/* implicit */int) arr_15 [i_4] [i_4])))) << (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_3 [i_4]))))));
        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_7) ^ (var_7)))) | (((((/* implicit */long long int) 4294967295U)) & (arr_6 [i_4])))));
    }
    var_25 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_5 - 3])) | (((/* implicit */int) arr_3 [i_6]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (1953353151U))))));
                    var_27 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (1345172460U)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (15513291469686129239ULL)))));
                }
            } 
        } 
    } 
}
