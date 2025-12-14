/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106353
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((4398782647980296728LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
            var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9149)) < (((/* implicit */int) arr_0 [i_0]))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_14 -= ((/* implicit */unsigned short) max((-1149837518), (((/* implicit */int) (_Bool)0))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */long long int) (unsigned short)56141);
                            var_16 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */long long int) arr_14 [i_0] [i_4 - 1] [i_0] [i_4 + 1] [i_4] [i_4 - 1])) < (1134869706841467168LL)))), (((long long int) (short)5927))));
                        }
                    } 
                } 
            } 
            var_17 ^= ((/* implicit */short) ((signed char) max((((((/* implicit */int) (_Bool)0)) % (arr_14 [i_2] [(_Bool)1] [i_2] [18LL] [i_2] [i_2]))), (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))));
            var_18 = -1922667412;
        }
        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-841587962248334579LL)));
        arr_19 [(short)10] &= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_4 [i_0] [(signed char)3])));
        var_20 ^= ((/* implicit */_Bool) (((+((~(((/* implicit */int) arr_5 [(signed char)17] [(signed char)17])))))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)184)) >= (((((((/* implicit */int) (short)-32757)) + (2147483647))) >> (((151293918U) - (151293900U))))))))));
    }
    for (short i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        var_21 += ((/* implicit */unsigned int) (unsigned char)49);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (short)22456))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)-15744)) >= (-110498311)));
    }
    var_24 = ((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) 4264985200U))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)1))));
    var_26 = ((/* implicit */signed char) (unsigned short)14211);
}
