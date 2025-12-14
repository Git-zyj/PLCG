/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165578
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [i_0] [i_0])), ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = (unsigned short)23412;
        var_12 = ((/* implicit */int) var_0);
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_13 = ((_Bool) (!(((/* implicit */_Bool) arr_7 [i_1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_17 [i_4] [i_3] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                        var_14 = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)9), ((unsigned short)1635)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-31879))))) : (((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1] [i_3] [i_4])) ? (var_0) : (((/* implicit */unsigned long long int) arr_12 [i_4 + 2] [(unsigned short)8] [i_1])))))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((arr_12 [i_1] [i_1] [i_3]) + (9223372036854775807LL))) << (((arr_5 [(unsigned short)14]) - (3382234039706424811LL))))) - (((/* implicit */long long int) (-(((/* implicit */int) (short)-15133)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4 + 2] [i_4 + 2])) || (((_Bool) 9223372036854775807LL))))) : (((/* implicit */int) arr_16 [23LL] [i_2] [2LL] [i_4])))))));
                        var_16 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (short)32767)), (var_0)))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) 17592183947264LL);
    var_18 = ((/* implicit */_Bool) (unsigned short)20);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((((/* implicit */int) arr_24 [i_6] [i_7] [i_8])) % (((/* implicit */int) arr_24 [i_5] [i_6] [i_8])))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_0))));
                                var_21 = ((/* implicit */int) var_8);
                            }
                            for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 2) /* same iter space */
                            {
                                arr_36 [(unsigned short)19] [(_Bool)1] [i_8] [i_7] [i_6] [i_5] [i_5] = arr_11 [(_Bool)1] [i_7] [i_6] [i_5];
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_5] [i_7] [i_5])))))));
                                var_23 = ((/* implicit */short) arr_18 [i_10] [i_5]);
                                arr_37 [i_5] [i_5] [i_5] [i_5] [i_10 + 1] = ((((/* implicit */_Bool) arr_12 [i_10 + 1] [i_10 - 2] [i_10 - 2])) ? (((/* implicit */unsigned long long int) arr_12 [i_10 - 1] [11] [i_10 - 2])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_12 [i_10 - 2] [i_10 - 1] [i_10 - 2])) : (var_0))));
                            }
                            arr_38 [i_5] [20] [20LL] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_5] [i_6] [20] [i_7] [i_8])) ^ (((/* implicit */int) arr_19 [i_5]))));
                            var_24 = ((/* implicit */unsigned short) ((((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8]))))) ^ (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_6])))));
                        }
                    } 
                } 
                arr_39 [15ULL] [15ULL] = ((/* implicit */unsigned short) ((_Bool) arr_25 [0ULL]));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_5))));
}
