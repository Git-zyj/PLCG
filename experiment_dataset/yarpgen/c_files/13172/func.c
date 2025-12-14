/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13172
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
    var_10 = ((/* implicit */int) (~(var_6)));
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) min(((short)-26296), ((short)-26307))))))), (min((((/* implicit */long long int) var_3)), ((~(var_6)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 &= ((/* implicit */short) 3003661817745356466LL);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_13 = (~((~(min((var_3), (arr_0 [i_0]))))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_2] [i_3]) ^ (((/* implicit */int) arr_8 [i_1]))))), ((+(((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) var_3)))))))))));
                        var_15 *= ((/* implicit */short) (((((-(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_4))))))) + (2147483647))) >> (((arr_7 [(short)12] [(short)12]) - (138764271)))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [20ULL]))))), (((((((/* implicit */_Bool) (unsigned short)30611)) ? (-6742002487352971905LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26306))))) & (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_2] [18U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34915))))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_17 = ((/* implicit */unsigned short) ((arr_6 [i_0]) ^ (13450939849799354038ULL)));
                    }
                    arr_15 [i_0] [i_1] [(unsigned short)20] [(unsigned short)20] |= ((/* implicit */unsigned char) min((var_0), (((/* implicit */long long int) ((unsigned char) min((var_7), (((/* implicit */unsigned long long int) (short)23556))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3915710951482687906ULL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (arr_5 [i_0] [i_0] [8ULL])))))))) : (max((((((/* implicit */_Bool) arr_8 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_10 [i_0] [(signed char)10] [(signed char)10] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [24U]))) : (arr_6 [i_0]))))))))));
        var_19 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14531033122226863709ULL)) ? (2524942459138001577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26306)))))) ? (((unsigned long long int) var_6)) : (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_1))))) == (((/* implicit */unsigned long long int) var_6))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-16384))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 14531033122226863709ULL)))) : (((14531033122226863700ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30620)))))))) ? (max((((((/* implicit */_Bool) var_8)) ? (var_0) : (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [2ULL] [(unsigned char)5] [i_0])) | (var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
}
